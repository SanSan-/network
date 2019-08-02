//
// Created by Alex Franz on 2019-07-10.
//
#include "daytimetcpsrv.h"

int
main(int argc, char **argv) {
    int listenfd, connfd;
    struct sockaddr_in servaddr;
    char buff[MAXLINE];
    time_t ticks;
    /* Create a TCP socket */
    listenfd = Socket(AF_INET, SOCK_STREAM, 0);
    /* Bind server's well-known port to socket */
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(13); /* daytime server */
    Bind(listenfd, (SA *) &servaddr, sizeof(servaddr));
    /* Convert socket to listening socket */
    Listen(listenfd, LISTENQ);
    /* Accept client connection, send reply (Infinite loop) */
    for (;;) {
        connfd = Accept(listenfd, (SA *) NULL, NULL);
        ticks = time(NULL);
        snprintf(buff, sizeof(buff), "%.24s\r\n", ctime(&ticks));
        Write(connfd, buff, strlen(buff));
        /** Terminate connection
         * This initiates the normal TCP connection termination sequence:
         * a FIN is sent in each direction and each FIN is acknowledged by the other end.
         * */
        Close(connfd);
    }
}
