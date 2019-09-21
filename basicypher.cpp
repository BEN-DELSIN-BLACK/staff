#include <iostream>
#include <cstdio>
#include <cstring>
#include <windows.h>
using namespace std;

int fangxiang,weishu;
char cypher[500];
char result[500];

void read()
{
	scanf("%s",cypher);
	cout<<"左移(1)or右移(2)"<<endl;
	cin>>fangxiang;
	cout<<"移动几位?"<<endl;
	cin>>weishu; 
}

void solve()
{
	for(int i=0;i<strlen(cypher);i++)
	{
		if(fangxiang==1)
		{
			if(cypher[i]>='a'+weishu)
				result[i]=cypher[i]-weishu;
			else
				result[i]='z'-(weishu-cypher[i]+'a')+1;
		}
		if(fangxiang==2)
		{
			if(cypher[i]<='z'-weishu)
				result[i]=cypher[i]+weishu;
			else 
				result[i]='a'+(weishu-'z'+cypher[i])-1;
		}
	}
	printf("%s\n",result);
}

void clean()
{
	fangxiang=0; weishu=0;
	memset(cypher,0,sizeof(cypher));
	memset(result,0,sizeof(result));
}

int main()
{
	system("chcp 65001")
	while(1)
	{
		read();
		solve();
		clean();	
	}	
	return 0;	
} 
