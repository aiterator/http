//
// Created by zy on 11/19/17.
//

#ifndef HTTP_TCPSERVER_H
#define HTTP_TCPSERVER_H

#include <sys/socket.h>
#include <thread>
#include <cstring>
#include <assert.h>
#include <arpa/inet.h>
#include "Configure.h"
#include "Log.hpp"

class HttpServer
{
public:
    HttpServer();
    void start();

private:
    void waitConnected();
    int tcp_sockfd;
    std::thread thread_id;
};
#endif //HTTP_TCPSERVER_H