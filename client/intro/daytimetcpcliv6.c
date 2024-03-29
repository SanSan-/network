#include "../lib/unp.h"
#include "../lib/error.h"
#include "../lib/wrapsock.h"

int
main(int argc, char **argv) {
    int sockfd, n;
    char recvline[MAXLINE + 1];
    struct sockaddr_in6 servaddr;
    if (argc != 2)
        err_quit("usage: a.out <IPaddress>");
    /* Create TCP socket */
    sockfd = Socket(AF_INET, SOCK_STREAM, 0);
    /* Specify server's IP address and port */
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin6_family = AF_INET6;
    servaddr.sin6_port = htons(13); /* daytime server */
    if (inet_pton(AF_INET6, argv[1], &servaddr.sin6_addr) <= 0)
        err_quit("inet_pton error for %s", argv[1]);
    /* Establish connection with server */
    if (connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
        err_sys("connect error");
    /* Read and display server's reply */
    while ((n = read(sockfd, recvline, MAXLINE)) > 0) {
        recvline[n] = 0; /* null terminate */
        if (fputs(recvline, stdout) == EOF)
            err_sys("fputs error");
    }
    if (n < 0)
        err_sys("read error");
    /* Terminate program */
    exit(0);
}