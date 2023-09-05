# include <stdio.h>
# include <math.h>
int main() {

           int base=0;
           int perp=0;
           float hyp=0;
 
           printf("--Finding Hypotenus--\n");
           printf("Enter base: ");
           scanf("%d",&base);
           printf("Enter perpendicular: ");
           scanf("%d",&perp);
          
           printf("--Calculatig Hypotenus--");

           base = base * base;
           perp = perp * perp;
           hyp = sqrt(base + perp);
    
           printf("Hypotenus: %f", hyp);
}