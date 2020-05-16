# include <iostream>
using namespace std;
# define NO_OF_CHARS 256

class duplicate_char{
   public :
   void charCounter(char *str, int *count){
      int i;
      for (i = 0; *(str + i); i++)
      count[*(str + i)]++;
   }
   void printDuplicateCharacters(char *str){
      int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
      charCounter(str, count);
      int i;
      for (i = 0; i < NO_OF_CHARS; i++)
         if(count[i] > 1)
            printf("%c\t\t %d \n", i, count[i]);
      free(count);
   }
};
int main(){
   duplicate_char dupchar ;
   char str[]="";
   printf("Masukkan kata : ");
   
   scanf("%s", &str);
   
   cout<<"The duplicate characters in the string\n";
   cout<<"character\tcount\n";
   dupchar.printDuplicateCharacters(str);
   return 0;
}