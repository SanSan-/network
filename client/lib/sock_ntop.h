//
// Created by Alex Franz on 2019-07-30.
//

#ifndef NETWORK_CLIENT_SOCK_NTOP_H
#define NETWORK_CLIENT_SOCK_NTOP_H

#include "unp.h"

char *sock_ntop(const struct sockaddr *sockaddr, socklen_t addrlen);

#endif //NETWORK_CLIENT_SOCK_NTOP_H
