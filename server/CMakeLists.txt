cmake_minimum_required(VERSION 3.14)
project(network-server)

set(CMAKE_CXX_STANDARD 14)

add_executable(network-server lib/unp.h config.h lib/error.c lib/error.h lib/wrapsock.c lib/wrapsock.h lib/wrappthread.c lib/wrappthread.h intro/daytimetcpsrv.c lib/wrapconnect.c lib/wrapconnect.h)
