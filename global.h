#ifndef _GLOBAL_H
#define _GLOBAL_H

#include <sys/types.h>//基本系统数据类型
#include <sys/socket.h>//linux下的socket函数，windows是winsock
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <iostream>
#include <thread>
#include <vector>
#include <mysql/mysql.h>
#include <unordered_map>
#include <pthread.h>
#include <set>
#include <hiredis/hiredis.h> //hiredis,c++连接会用到这个API
#include <fstream>
#include<sys/epoll.h>//线程池
#include<boost/bind.hpp>//c++的boost库
#include<boost/asio.hpp>
#include<errno.h>
using namespace std;

#endif
