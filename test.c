#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void test(int a, int b){
    for(int i = 1; i <= b; i++){
        for(int j = 1; j <= a; j++){
            if(i == 1){
                if(j == 1){
                    ft_putchar('A');
                } else if(j == a){
                    ft_putchar('C');
                } else {
                    ft_putchar('B');
                }
            } else if(i == b){
                if(j == 1){
                    ft_putchar('C');
                } else if(j == a){
                    ft_putchar('A');
                } else {
                    ft_putchar('B');
                }
            } else{
                if(j == 1 || j == a){
                    ft_putchar('B');
                } else {
                    ft_putchar(' ');
                }
            }
        } 
        ft_putchar('\n');
    }
}

int main()
{
    test(8,6);

    return 0;
}
