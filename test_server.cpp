#include"server.h"

int main(){
    server serv(8023,"127.0.0.1");//本机IP
    serv.run();
}
