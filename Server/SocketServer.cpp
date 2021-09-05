#include "SocketServer.h"

SocketServer::SocketServer() {}

bool SocketServer::crearSocket() {
    //Crear un descriptor
    descriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (descriptor < 0) //valida la creacion del socket
        return false;
    info.sin_family = AF_INET; //IPV4 tipo de conexion
    info.sin_addr.s_addr = INADDR_ANY; //acepta a cualquiera con mi ip y mi puerto
    info.sin_port = htons(4050); //definimos el puerto
    memset(&info.sin_zero, 0, sizeof(info.sin_zero)); //limpiamos la estructura
    return true;
}

bool SocketServer::enlazarKernel() {
    if ((bind(descriptor, (sockaddr *)&info, (socklen_t)sizeof(info))) < 0) //enlaza al socket con el kernel
        return false;
    // escuchar a los clientes
    listen(descriptor,4);
    return true;
}
