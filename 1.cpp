#include <iostream>
using namespace std;

void triangle(int input){
    for (int row = 1; row <= input; row++) {
        for (int col = 1; col <= row; col++) {
            printf("#");
        }
        printf("\n");
    }
}

int main(){
   int inputt;
   printf("Masukkan angka : ");
   int cek = scanf("%i", &inputt);
   
   if(cek == 1){
       triangle(inputt);
   }else{
       printf("Paramemeter harus angka dan positif!");
   }
}