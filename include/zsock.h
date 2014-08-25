/*  =========================================================================
    zsock - high-level socket API that hides libzmq contexts and sockets

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of CZMQ, the high-level C binding for 0MQ:
    http://czmq.zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef __ZSOCK_H_INCLUDED__
#define __ZSOCK_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  @interface

#if defined (ZSOCK_NOCHECK)
#   define zsock_new(t) zsock_new_((t), NULL, 0)
#   define zsock_new_pub(e) zsock_new_pub_((e), NULL, 0)
#   define zsock_new_sub(e,s) zsock_new_sub_((e), (s), NULL, 0)
#   define zsock_new_req(e) zsock_new_req_((e), NULL, 0)
#   define zsock_new_rep(e) zsock_new_rep_((e), NULL, 0)
#   define zsock_new_dealer(e) zsock_new_dealer_((e), NULL, 0)
#   define zsock_new_router(e) zsock_new_router_((e), NULL, 0)
#   define zsock_new_pull(e) zsock_new_pull_((e), NULL, 0)
#   define zsock_new_push(e) zsock_new_push_((e), NULL, 0)
#   define zsock_new_xpub(e) zsock_new_xpub_((e), NULL, 0)
#   define zsock_new_xsub(e) zsock_new_xsub_((e), NULL, 0)
#   define zsock_new_pair(e) zsock_new_pair_((e), NULL, 0)
#   define zsock_new_stream(e) zsock_new_stream_((e), NULL, 0)
#   define zsock_destroy(t) zsock_destroy_((t), NULL, 0)
#else
#   define zsock_new(t) zsock_new_((t), __FILE__, __LINE__)
#   define zsock_new_pub(e) zsock_new_pub_((e), __FILE__, __LINE__)
#   define zsock_new_sub(e,s) zsock_new_sub_((e), (s), __FILE__, __LINE__)
#   define zsock_new_req(e) zsock_new_req_((e), __FILE__, __LINE__)
#   define zsock_new_rep(e) zsock_new_rep_((e), __FILE__, __LINE__)
#   define zsock_new_dealer(e) zsock_new_dealer_((e), __FILE__, __LINE__)
#   define zsock_new_router(e) zsock_new_router_((e), __FILE__, __LINE__)
#   define zsock_new_pull(e) zsock_new_pull_((e), __FILE__, __LINE__)
#   define zsock_new_push(e) zsock_new_push_((e), __FILE__, __LINE__)
#   define zsock_new_xpub(e) zsock_new_xpub_((e), __FILE__, __LINE__)
#   define zsock_new_xsub(e) zsock_new_xsub_((e), __FILE__, __LINE__)
#   define zsock_new_pair(e) zsock_new_pair_((e), __FILE__, __LINE__)
#   define zsock_new_stream(e) zsock_new_stream_((e), __FILE__, __LINE__)
#   define zsock_destroy(t) zsock_destroy_((t), __FILE__, __LINE__)
#endif

//  Create a new socket. This macro passes the caller source and line
//  number so that CZMQ can report socket leaks intelligently. To switch
//  off this checking, which may be costly if you use a LOT of sockets,
//  define ZSOCK_NOCHECK before compiling your code. Returns the new
//  socket, or NULL if the new socket could not be created.
CZMQ_EXPORT zsock_t *
    zsock_new_ (int type, const char *filename, size_t line_nbr);

//  Destroy the socket. You must use this for any socket created via the
//  zsock_new method.
CZMQ_EXPORT void
    zsock_destroy_ (zsock_t **self_p, const char *filename, size_t line_nbr);

//  Smart constructors, which create sockets with additional set-up. In all of
//  these, the endpoint is NULL, or starts with '@' (connect) or '>' (bind).
//  Multiple endpoints are allowed, separated by commas. If endpoint does not
//  start with '@' or '>', default action depends on socket type.

//  Create a PUB socket. Default action is bind.
CZMQ_EXPORT zsock_t *
    zsock_new_pub_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a SUB socket, and optionally subscribe to some prefix string. Default
//  action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_sub_ (const char *endpoint, const char *subscribe, const char *filename, size_t line_nbr);

//  Create a REQ socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_req_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a REP socket. Default action is bind.
CZMQ_EXPORT zsock_t *
    zsock_new_rep_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a DEALER socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_dealer_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a ROUTER socket. Default action is bind.
CZMQ_EXPORT zsock_t *
    zsock_new_router_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a PUSH socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_push_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a PULL socket. Default action is bind.
CZMQ_EXPORT zsock_t *
    zsock_new_pull_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create an XPUB socket. Default action is bind.
CZMQ_EXPORT zsock_t *
    zsock_new_xpub_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create an XSUB socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_xsub_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a PAIR socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_pair_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Create a STREAM socket. Default action is connect.
CZMQ_EXPORT zsock_t *
    zsock_new_stream_ (const char *endpoint, const char *filename, size_t line_nbr);

//  Bind a socket to a formatted endpoint. If the port is specified as '*' or '!'
//  and the endpoint starts with a "tcp://", binds to an ephemeral TCP port
//  from DYNAMIC_FIRST to DYNAMIC_LAST
//  and returns the actual port number used.  To override the given range, which
//  is the IANA designated range from C000 (49152) to FFFF (65535), after the * or !,
//  you can include the notation "[<min>-<max>]". 
//  '*' will test ports starting at 'min' (default DYNAMIC_FIRST), and increment 
//      upwards to 'max' (default DYNAMIC_LAST). 
//       Examples: "tcp://192.168.3.1:*[50100-50500]", "tcp://*:*"
//  '!' will randomly choose ports from within the range. It will iterate from one
//      random port number to the next. It will give up if it attempts more than
//      total possible number of ports in the range, with a max of 30. Then it will
//      revert to a linear search (as with '*'). Therefore, '!' works best in large,
//      sparsely populated ranges.
//       Examples: "tcp://192.168.3.1:![55000-60000]", "tcp://*:!"
//  The first open port is bound and its number returned.
//  If a TCP endpoint was given, returns the port number if successful. 
//  If not, returns a 0 on success.
//  Returns -1 if not successful. 
//  When using ephemeral ports, note that ports may be reused by different threads, 
//  without clients being aware.
CZMQ_EXPORT int
    zsock_bind (zsock_t *self, const char *format, ...);

//  Unbind a socket from a formatted endpoint.
//  Returns 0 if OK, -1 if the endpoint was invalid or the function
//  isn't supported.
CZMQ_EXPORT int
    zsock_unbind (zsock_t *self, const char *format, ...);

//  Connect a socket to a formatted endpoint
//  Returns 0 if OK, -1 if the endpoint was invalid.
CZMQ_EXPORT int
    zsock_connect (zsock_t *self, const char *format, ...);

//  Disconnect a socket from a formatted endpoint
//  Returns 0 if OK, -1 if the endpoint was invalid or the function
//  isn't supported.
CZMQ_EXPORT int
    zsock_disconnect (zsock_t *self, const char *format, ...);

//  Attach a socket to zero or more endpoints. If endpoints is not null,
//  parses as list of ZeroMQ endpoints, separated by commas, and prefixed by
//  '@' (to bind the socket) or '>' (to attach the socket). Returns 0 if all
//  endpoints were valid, or -1 if there was a syntax error. If the endpoint
//  does not start with '@' or '>', the serverish argument defines whether
//  it is used to bind (serverish = true) or connect (serverish = false).
CZMQ_EXPORT int
    zsock_attach (zsock_t *self, const char *endpoints, bool serverish);

//  Returns socket type as printable constant string
CZMQ_EXPORT const char *
    zsock_type_str (zsock_t *self);

//  Send a zmsg message to the socket, take ownership of the message
//  and destroy when it has been sent.
CZMQ_EXPORT int
    zsock_send (zsock_t *self, zmsg_t **msg_p);

//  Send data over a socket as a single message frame.
//  Returns -1 on error, 0 on success
CZMQ_EXPORT int
    zsock_sendmem (zsock_t *self, const void *data, size_t size);

//  Receive a zmsg message from the socket. Returns NULL if the process was
//  interrupted before the message could be received, or if a receive timeout
//  expired.
CZMQ_EXPORT zmsg_t *
    zsock_recv (zsock_t *self);

//  Set socket to use unbounded pipes (HWM=0); use this in cases when you are
//  totally certain the message volume can fit in memory. This method works
//  across all versions of ZeroMQ.
CZMQ_EXPORT void
    zsock_set_unbounded (zsock_t *self);

//  Send a signal over a socket. A signal is a short message carrying a
//  success/failure code (by convention, 0 means OK). Signals are encoded
//  to be distinguishable from "normal" messages. Accepts a zock_t or a
//  zactor_t argument, and returns 0 if successful, -1 if the signal could
//  not be sent.
CZMQ_EXPORT int
    zsock_signal (void *self, byte status);
    
//  Wait on a signal. Use this to coordinate between threads, over pipe
//  pairs. Blocks until the signal is received. Returns -1 on error, 0 or
//  greater on success. Accepts a zsock_t or a zactor_t as argument.
CZMQ_EXPORT int
    zsock_wait (void *self);

//  Probe the supplied object, and report if it looks like a zsock_t.
CZMQ_EXPORT bool
    zsock_is (void *self);

//  Probe the supplied reference. If it looks like a zsock_t instance,
//  return the underlying libzmq socket handle; else if it looks like
//  a libzmq socket handle, return the supplied value.
CZMQ_EXPORT void *
    zsock_resolve (void *self);

//  Self test of this class
CZMQ_EXPORT void
    zsock_test (bool verbose);
//  @end

//  Compiler hints
CZMQ_EXPORT int zsock_bind (zsock_t *self, const char *format, ...) CHECK_PRINTF (2);
CZMQ_EXPORT int zsock_unbind (zsock_t *self, const char *format, ...) CHECK_PRINTF (2);
CZMQ_EXPORT int zsock_connect (zsock_t *self, const char *format, ...) CHECK_PRINTF (2);
CZMQ_EXPORT int zsock_disconnect (zsock_t *self, const char *format, ...) CHECK_PRINTF (2);

#ifdef __cplusplus
}
#endif

// include generated code
#include "zsock_option.h"

#endif
