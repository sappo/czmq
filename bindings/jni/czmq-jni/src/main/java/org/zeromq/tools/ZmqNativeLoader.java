package org.zeromq.tools;

import java.io.IOException;
import java.io.InputStream;
import java.util.Set;
import java.util.HashSet;
import java.util.Properties;
import org.scijava.nativelib.NativeLibraryUtil;
import org.scijava.nativelib.NativeLoader;

public class ZmqNativeLoader {

    private static final Set<String> loadedLibraries = new HashSet<>();

    private static final Properties properties;

    static {
        properties = new Properties();
        try {
            final String architecture = NativeLibraryUtil.getArchitecture().name().toLowerCase();
            final InputStream libraryMappingInputStream =
                ZmqNativeLoader.class.getClassLoader().getResourceAsStream(architecture + "/mapping.properties");
            if (libraryMappingInputStream != null) {
                properties.load(libraryMappingInputStream);
            }
        } catch (IOException e) {
            System.err.println("[ERROR] " + e.getMessage());
        }
    }

    public static void loadLibrary(String libname, boolean optional) {
        final String libnameMapping = properties.getProperty(libname);
        if (libnameMapping != null) {
            libname = libnameMapping;
        }
        if (!loadedLibraries.contains(libname)) {
            try {
                NativeLoader.loadLibrary(libname);
            } catch (IOException e) {
                if (optional) {
                    System.err.println("[WARN] " + e.getMessage() + " from jar. Assuming it is installed on the system.");
                } else {
                    System.err.println("[FATAL] " + e.getMessage() + " from jar. Dependency is required!");
                    System.exit(-1);
                }
            }
            loadedLibraries.add(libname);
        }
    }

}
