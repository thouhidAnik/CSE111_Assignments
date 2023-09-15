#include<stdio.h>
int main() {
    int number,range;
    scanf("%d%d",&number,&range);
    printf("Numbers that share common factors with %d and also multiple of %d are : ",number,number);
    for (int i = 1; ; i++) {
        if (number*i > range)break;
        else printf("%d ",number*i);
    }
    printf("\n");
    return 0;
}