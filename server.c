#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define BUFFER_SIZE 1024
#define PORT 8080

int main()
{
	 int server_fd;
	 struct sockaddr_in address;
	 int addr_len = sizeof(address);
	 char *messsage = "Hello from server";
	 char mess[BUFFER_SIZE] = {0};

	 server_fd = socket(AF_INET, SOCK_DGRAM, 0);
	 if (server_fd == 0)
	 {
	 	printf("ERROR ESTABLISHING CONNECTION\n");
	 }

	 address.sin_family = AF_INET;
	 address.sin_addr.s_addr = INADDR_ANY;
	 address.sin_port = htons(PORT);

	 if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0)
	 {
	 	printf("Can't connect to network");
	 }
	 printf("The Server is always listening....\n");

	 while(1)
	 {
	 	if (recvfrom(server_fd, mess, BUFFER_SIZE, 0, (struct sockaddr*)&address, (socklen_t*)&addr_len) < 0)
		{
			perror("No message gotten from client\n");
			return(EXIT_FAILURE);
		}
		printf("Message received from client: %s", mess);
	 }
}
