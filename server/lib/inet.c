//
// Created by Alex Franz on 2019-08-02.
//

#include "inet.h"

const char *Inet_ntop(int family, struct in_addr *addrptr, char *strptr, size_t len) {
    const char *ntop = inet_ntop(family, addrptr, strptr, len);
    if (ntop == NULL)
        err_sys("inet_ntop error");
    return ntop;
}