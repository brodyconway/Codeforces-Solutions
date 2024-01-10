#include <stdio.h>
#include <stdlib.h>

int odd_one_out(int a, int b, int c) {
    if(a == b){
        return c;
    }else if(a == c){
      return b;
    }else{
      return a;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int result = odd_one_out(a, b, c);
        printf("%d\n", result);
    }

    return 0;
}
