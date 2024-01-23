#include <stdio.h>

int main(){
    int x;
    printf("Bitte gib eine Zahl ein: ");
    scanf("%d", &x);

    if (x==3){
        printf("Die Zahl ist 3\n");
        printf("%d", x);
        printf("\n");
    }
    else{
        printf("Die Zahl ist verschieden von 3\n");
        printf("%d", x);
        printf("\n");
    }
    return 0;
}



