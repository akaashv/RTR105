#include <stdio.h>
int main()
{
    printf("f1() f2() f3() f4() are functions \n");
    void f1(void){
        printf("no argument, no return \n");
    }
     
    void f2(int a){
        printf("with argument, no Return \n");
    }
    
    int f3(void){
     printf("no argument, with Return \n");
        return 1;
   }
    
    int f4(int a){
        printf("with argument, with Return \n");
        return 1;
    }
    return 0;
}
