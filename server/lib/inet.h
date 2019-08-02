//
// Created by Alex Franz on 2019-08-02.
//

#ifndef NETWORK_SERVER_INET_H
#define NETWORK_SERVER_INET_H

#include "unp.h"
#include "error.h"

const char *Inet_ntop(int, struct in_addr *, char *, size_t);

#endif //NETWORK_SERVER_INET_H
