//
// Created by Alex Franz on 2019-07-10.
//

#include "wrapsock.h"

int
Socket(int family, int type, int protocol) {
    int n;
    if ((n = socket(family, type, protocol)) < 0)
        err_sys("socket error");
    return (n);
}
