//
// Created by zy on 11/19/17.
//

#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include "TcpServer.h"
#include "Configure.h"
#include "Log.hpp"

class HttpServer
{
private:
    class RecvHeader{
    public:
        std::string way;
        std::string url;
        std::string httpVersion;
        std::string host;
        std::string userAgent;
        std::string Connection;
    };

    class SendHeader{

    };

public:
    HttpServer(const uint16_t& Port);

    void OnMessage(const TcpConnection& conn,const std::string& message);
    void start();

private:
    RecvHeader parseHeader(const std::string& message);
    TcpServer tcpServer;
};

#endif //HTTP_SERVER_H
