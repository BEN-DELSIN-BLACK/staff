#include <iostream>
using namespace std;
char divide='-';
int temp;
void fenge()
{
	for(int i=1;i<=40;i++)
		cout<<divide;
	cout<<endl;
}
void hint()
{
	cout<<"Which programme do you want to start?"<<endl;
	cout<<"1.pan download"<<endl<<"2.Steam������"<<endl;
	cout<<"3.��Ѷ������"<<endl; 
	cout<<"4.ASF"<<endl<<"5.bվֱ����"<<endl;
	cout<<"6.tools"<<endl<<"7.Ѹ������"<<endl;
	cout<<"8.videos"<<endl<<"9.qq�����ļ���"<<endl;
	cout<<"10.��ʾ��ʾ"<<endl;
	fenge();
}
int main()
{
	hint();
	while(1)
	{	
		fenge();
		cin>>temp;
		if(temp==1)
			system("\"D:\\tools\\pan download\\PanDownload.exe\"");
		else if(temp==2)
			system("D:\\tools\\Steam������_3.0\\STEAM������.exe");
		else if(temp==3)
			system("\"D:\\tencent jiasuqi\\QMProxyAccelerator\\1.0.338.134\\QMProxyAcceler.exe\"");
		else if(temp==4)
			system("D:\\tools\\ASF-win-x64\\ArchiSteamFarm.exe");
		else if(temp==5)
			system("D:\\livehime\\livehime.exe");
		else if(temp==6)
			system("start D:\\tools");
		else if(temp==7)
			system("start D:\\Ѹ������");
		else if(temp==8)
			system("start D:\\videos");
		else if(temp==9)
			system("start \"\" \"C:\\Users\\BEN BLACK\\Documents\\Tencent Files\\1446417588\\FileRecv\"");
		else if(temp==10)
			hint();
	}
	return 0; 	
}