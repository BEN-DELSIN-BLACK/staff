#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
    system("chcp 65001");
    int ttime;
    char code[50];
    cout<<"请输入关机等待时间(秒)";
    cin>>ttime;
    sprintf(code,"shutdown -s -t %d",ttime);
    system(code);
    cout<<"按任意键退出程序";
    getchar();
    getchar();
    return 0;
}
