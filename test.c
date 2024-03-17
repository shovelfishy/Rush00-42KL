/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <unistd.h>

void putchar(char c){
    write(1, &c, 1);
}

void test(int a, int b){
    for(int i = 1; i <= b; i++){
        for(int j = 1; j <= a; j++){
            if(i == 1 || i == b){
                if(j == 1){
                    putchar('A');
                } else if(j == a){
                    putchar('C');
                } else {
                    putchar('B');
                }
            } else{
                if(j == 1 || j == a){
                    putchar('B');
                } else {
                    putchar(' ');
                }
            }
        } 
        putchar('\n');
    }
}

int main()
{
    test(8,6);

    return 0;
}
