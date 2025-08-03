#include <stdio.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <unistd.h>

#define PORT 6969

int main() {

    // Create a socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("webserver (socket)");
        return 1;
    }

    printf("socket created successfully\n");
    
    // Create the address to bind the socket to
    struct sockaddr_in host_addr;
    int host_addrlen = sizeof(host_addr);

    host_addr.sin_family = AF_INET;
    host_addr.sin_port = htons(PORT);
    host_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // Bind socket to address
    if (bind(sockfd, (struct sockaddr *)&host_addr, host_addrlen) != 0) {
        perror("webserver (bind)");
        return 1;
    }

    printf("socket was successfully bound to address\n");

    if (listen(sockfd, 128) != 0) {
        perror("webserver (listen)");
        return 1;
    }
    printf("server listening for connections on port %d\n", PORT);

    for (;;) {
        int newsockfd = accept(sockfd (struct sockaddr *)&host_addr, (socklen_t *)&host_addrlen);
    }

    return 0;
}