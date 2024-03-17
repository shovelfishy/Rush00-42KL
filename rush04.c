void rush(int a, int b){
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