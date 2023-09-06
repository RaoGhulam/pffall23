# include <stdio.h>
# include <math.h>

int main() {
           int base = 0;
           int perp = 0;
           int hyp = 0;

           printf("Calculate the hypotenus. \n");
           
           printf("Input base: ");
           scanf("%d", &base);
           printf("Input perpendicular: ");
           scanf("%d", &perp);

           base = base * base;
           perp = perp * perp;

           hyp = sqrt(base + perp);
           printf("Hypotenus is: %d", hyp);
}