//
// Created by Alex Franz on 2019-07-10.
//

#ifndef NETWORK_SERVER_WRAPCONNECT_H
#define NETWORK_SERVER_WRAPCONNECT_H

#include "unp.h"
#include "error.h"

int Accept(int, struct sockaddr *__restrict, socklen_t *__restrict);

ssize_t Write(int __fd, const void *__buf, size_t __nbyte);

int Close(int);

#endif //NETWORK_SERVER_WRAPCONNECT_H
