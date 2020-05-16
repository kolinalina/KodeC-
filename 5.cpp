#include<stdio.h>
#include<conio.h>

int main()
 {
  int i,arr[20],j,no;
 
  printf("Masukkan jumlah data kaos kaki(jumlah array): ");
  scanf("%d",&no);
  printf("Masukkan %d kode warna di dalam array: ",no);
  
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
  
  printf("Pasangan Kaos Kaki: ");
  
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("[%d %d]", arr[i], arr[i]);
    }
   }
   }
  
 }