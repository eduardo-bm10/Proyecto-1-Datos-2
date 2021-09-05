#ifndef SERVER_SOCKETSERVER_H
#define SERVER_SOCKETSERVER_H

#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>
using namespace std;

class SocketServer{
public:
    SocketServer();
    void run();
    void setMensaje(const char* msn);

private:
    int descriptor; //identifica a los sistemas
    sockaddr_in info; //informacion del socket servidor
    vector<int> clientesDescriptor; //almacena los clientes que se conecten

    bool crearSocket();
    bool enlazarKernel();
    static void* controladorCliente(void* obj);

};
#endif //SERVER_SOCKETSERVER_H
