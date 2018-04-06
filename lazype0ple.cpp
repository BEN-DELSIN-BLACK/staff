#include <iostream>
using namespace std;
char divide='-';
int temp;
void utf8()
{
	//让控制台支持utf8编码
	system("chcp 65001");     
}
void fenge()
{
	//分割
	for(int i=1;i<=40;i++)
		cout<<divide;
	cout<<endl;
}
void hint()
{	
	//显示提示
	cout<<"Which programme do you want to start?"<<endl;
	cout<<"1.pan download"<<endl<<"2.Steam加速器"<<endl;
	cout<<"3.腾讯加速器"<<endl; 
	cout<<"4.ASF"<<endl<<"5.b站直播姬"<<endl;
	cout<<"6.tools"<<endl<<"7.迅雷下载"<<endl;
	cout<<"8.videos"<<endl<<"9.qq下载文件夹"<<endl;
	cout<<"10.显示提示"<<endl;
	fenge();
}
int main()
{
	utf8();
	hint();
	while(1)
	{	
		fenge();
		cin>>temp;
		if(temp==1)
			system("\"D:\\tools\\pan download\\PanDownload.exe\"");
		else if(temp==2)
			system("D:\\tools\\Steam加速器_3.0\\STEAM加速器.exe");
		else if(temp==3)
			system("\"D:\\tencent jiasuqi\\QMProxyAccelerator\\1.0.338.134\\QMProxyAcceler.exe\"");
		else if(temp==4)
			system("D:\\tools\\ASF-win-x64\\ArchiSteamFarm.exe");
		else if(temp==5)
			system("D:\\livehime\\livehime.exe");
		else if(temp==6)
			system("start D:\\tools");
		else if(temp==7)
			system("start D:\\迅雷下载");
		else if(temp==8)
			system("start D:\\videos");
		else if(temp==9)
			system("start \"\" \"C:\\Users\\BEN BLACK\\Documents\\Tencent Files\\1446417588\\FileRecv\"");
		else if(temp==10)
			hint();
	}
	return 0; 	
}
