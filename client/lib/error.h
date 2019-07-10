//
// Created by Alex Franz on 2019-07-09.
//

#ifndef NETWORK_ERROR_H
#define NETWORK_ERROR_H

#include "unp.h"
#include <stdarg.h> /* ANSI C header file */
#include <syslog.h> /* for syslog() */

int daemon_proc; /* set nonzero by daemon_init() */

void err_ret(const char *fmt, ...);
void err_sys(const char *fmt, ...);
void err_dump(const char *fmt, ...);
void err_msg(const char *fmt, ...);
void err_quit(const char *fmt, ...);
static void err_doit(int, int, const char *, va_list);

#endif //NETWORK_ERROR_H
