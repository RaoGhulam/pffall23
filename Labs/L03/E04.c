# include <stdio.h>

int main() {
            int original_price = 1500;
            int discount_percentage = 0.20;
            int sale_price = 0;

            printf("Calculate the sale price \n");

            sale_price = ((original_price * (1 - discount_percentage)));
            printf("Sale price is: %d", sale_price);
}
            
