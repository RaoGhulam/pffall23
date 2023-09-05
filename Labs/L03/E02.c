#include <stdio.h>

int main() {
            int len=0;
            int width=0;
            int depth=0,volume ;

            printf("==Findig Volume Program==\n");
            printf("\n--Taking Inputs--\n");
            printf("Enter length: ");
            scanf("%d",&len);
            printf("Enter width: ");
            scanf("%d",width);
            printf("Enter depth: ");
            scanf("%d",&depth);

            printf("\n--Done...Taking Inputs--\n");
            printf("\n--Calculating Volume--\n");

            volume = len * width * depth;
            printf("Volume is: %d",volume);
}