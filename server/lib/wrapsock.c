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

void
Listen(int fd, int backlog) {
    char *ptr;
/* can override 2nd argument with environment variable */
    if ((ptr = getenv("LISTENQ")) != NULL)
        backlog = atoi(ptr);
    if (listen(fd, backlog) < 0)
        err_sys("listen error");
}
