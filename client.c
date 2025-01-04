#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define PORT 8080
 
int main()
{
	int client_fd;
	struct sockaddr_in addcl;
	int addr_len = sizeof(addcl);
	char mess[BUFFER_SIZE] = "hello from client\n";

	client_fd = socket(AF_INET, SOCK_DGRAM, 0);
	if (client_fd < 0)
	{
		printf("Error\n");
	}

	addcl.sin_addr.s_addr = INADDR_ANY;
	addcl.sin_port = htons(PORT);

	sendto(client_fd, mess, BUFFER_SIZE, 0, (struct sockaddr*)&addcl, (socklen_t)addr_len);

	close(client_fd);
}
