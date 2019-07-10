//
// Created by Alex Franz on 2019-07-10.
//

#ifndef NETWORK_CLIENT_WRAPSOCK_H
#define NETWORK_CLIENT_WRAPSOCK_H

#include "unp.h"
#include "error.h"

int Socket(int, int, int);

int Bind(int, const struct sockaddr *, socklen_t);

int Listen(int socket, int max_num_of_connection);

#endif //NETWORK_CLIENT_WRAPSOCK_H
