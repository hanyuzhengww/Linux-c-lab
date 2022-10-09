#include"client.h"
int main(){
    client clnt(8023,"172.22.2.26");//端口8023, 服务器IP 172.22.2.26
    clnt.run();//运行
}
