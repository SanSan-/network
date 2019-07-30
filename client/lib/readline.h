//
// Created by Alex Franz on 2019-07-30.
//

#ifndef NETWORK_CLIENT_READLINE_H
#define NETWORK_CLIENT_READLINE_H

#include "unp.h"

ssize_t readline(int filedes, void *buff, size_t maxlen);

#endif //NETWORK_CLIENT_READLINE_H
