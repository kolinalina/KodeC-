#include<iostream>
#include<string.h>
using namespace std;


void cek_data(char strs[100]){
    char count=0, countt=0;
	int i, len;
	
	len=strlen(strs);
	for(i=0; i<len; i++)
	{
		if(strs[i]==' ')
		{
			count++;
		}
	}
	for(i=0; i<len; i++)
	{
		if(strs[i]==' ' && len > 1)
		{
			countt++;
		}
	}
	cout<<countt+1<<"/"<<count+1;
}

int main ()
{
    char strss[100];
    cout<<"Tuliskan Kalimat : ";
	cin.getline(strss, sizeof(strss));
	
	cek_data(strss);

}