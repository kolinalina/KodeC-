#include <iostream>
using namespace std;

void HollowTriangle(int input){
    for (int row = 1; row <= input; row++) {
        for (int col = 1; col <= row; col++) {
            printf(" ");
        }
        
        for (int j = input; j >= (2*row - input); j--) {
            printf("*");
        }
 
        printf("\n");
    }
}

int main(){
   int inputt;
   printf("Masukkan angka : ");
   scanf("%i", &inputt);
   
   if(inputt % 2 == 0){
       printf("Harus Bilangan Ganjil!");
   }else{
       HollowTriangle(inputt);
   }
}