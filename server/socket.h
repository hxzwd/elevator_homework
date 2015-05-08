#include <WinSock2.h>
#include <cstdint>
#define sock_handle SOCKET

bool init_socket(void);
void close_socket(sock_handle close_it);
//bool establish_connection(int8_t *addr, uint32_t port);
sock_handle  get_socket(void);
bool check_socket(sock_handle check_it);
bool bind_addres(sock_handle server, int8_t *addr, uint32_t port);
sock_handle  accept_client(sock_handle server);
bool listen_for_clients(sock_handle server, uint32_t clients);
bool connect_to_server(sock_handle server, int8_t *addr, uint32_t port);
void clear_network(void);
void send_msg(sock_handle destination, int8_t* buffer, uint32_t buffer_size, uint32_t flags);
uint32_t get_msg(sock_handle source, int8_t* buffer, uint32_t buffer_size, uint32_t flags);