#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <signal.h>
#include <dirent.h>
#include <sys/select.h>
#include <sys/fcntl.h>
#include <ctime>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <algorithm>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>
#include <string>

#define BUFSIZE 65535
#define MAXHOSTBUFFERSIZE 512
#define LINPRINT printf("--%d--\n", __LINE__)
#define uchar unsigned char
