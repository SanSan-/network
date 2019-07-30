cmake_minimum_required(VERSION 3.14)
project(network-client)

set(CMAKE_CXX_STANDARD 14)

add_executable(network-client lib/unp.h config.h intro/daytimetcpcli.c lib/error.c lib/error.h lib/wrapsock.c lib/wrapsock.h lib/wrappthread.c lib/wrappthread.h intro/daytimetcpcli.h lib/sock_ntop.c lib/sock_ntop.h lib/readn.c lib/readn.h lib/writen.c lib/writen.h test/readline1.c test/readline1.h lib/readline.c lib/readline.h)