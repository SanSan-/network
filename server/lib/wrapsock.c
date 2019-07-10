//
// Created by Alex Franz on 2019-07-10.
//

#include "wrapsock.h"

int
Socket(int family, int type, int protocol) {
    int n;
    if ((n = socket(family, type, protocol)) < 0)
        err_sys("create socket error");
    return (n);
}

int
Bind(int sock, const struct sockaddr *sockaddr, socklen_t socklen) {
    int n;
    if ((n = bind(sock, sockaddr, socklen)) < 0)
        err_sys("bind socket error");
    return (n);
}

int
Listen(int socket, int max_num_of_connection) {
    int n;
    if ((n = listen(socket, max_num_of_connection) < 0))
        err_sys("convert to listen socket error");
    return (n);
}
