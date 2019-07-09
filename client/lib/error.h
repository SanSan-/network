//
// Created by Alex Franz on 2019-07-09.
//

#ifndef NETWORK_ERROR_H
#define NETWORK_ERROR_H

void err_ret(const char *fmt, ...);
void err_sys(const char *fmt, ...);
void err_dump(const char *fmt, ...);
void err_msg(const char *fmt, ...);
void err_quit(const char *fmt, ...);

#endif //NETWORK_ERROR_H
