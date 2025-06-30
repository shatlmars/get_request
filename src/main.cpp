#include "main.h"

struct sockaddr_in sa;



int main(int argc, char* argv[]){
    inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr));
    char ip4[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);
    std::cout << ip4;
    return 0;
}
