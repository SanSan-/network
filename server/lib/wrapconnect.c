//
// Created by Alex Franz on 2019-07-10.
//

#include "wrapconnect.h"

int
Accept(int listenfd, struct sockaddr *__restrict sockaddr, socklen_t *__restrict socklen) {
    int n;
    if ((n = accept(listenfd, sockaddr, socklen)) < 0)
        err_sys("connection accept error");
    return (n);
}

ssize_t
Write(int __fd, const void *__buf, size_t __nbyte) {
    ssize_t n;
    if ((n = write(__fd, __buf, __nbyte)) < 0)
        err_sys("write into connection error");
    return (n);
}

int
Close(int connfd) {
    int n;
    if ((n = close(connfd)) < 0)
        err_sys("close connection error");
    return (n);
}
