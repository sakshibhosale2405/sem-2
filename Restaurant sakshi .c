#include <stdio.h>

int main() {
    char choice;
    int total_bill = 0;
    
   
    int panner_tika_price = 120;
    int tandor_roti_price = 240;
    int noodles_price = 250;
    int friedrice_price = 350;
    
    
    printf("Please select choice between a and b: \n");
    printf("Veg items: Panner Tika, Tandoor Roti\n");
    printf("Chinese items: Noodles, Fried Rice\n");
     printf("Price of Veg items: Panner Tika = 120rs, Tandoor Roti = 240rs\n");
    printf("Price of Chinese items: Noodles = 250rs, Fried Rice = 350rs\n");
    
    printf("Enter 'a' for Veg, 'b' for Chinese: ");
    scanf(" %c", &choice);
    
    
    
 
    
  

   
    if (choice == 'a') 
    {
        printf("You selected Veg items.\n Enter 1- Panner Tika, 2- Tandoor Roti: ");
        int items;
        scanf("%d", &items);
        
        switch(items) {
            case 1:
                printf("You selected Panner Tika. Price: %d\n", panner_tika_price);
                total_bill = panner_tika_price;
                break;
            case 2:
                printf("You selected Tandoor Roti. Price: %d\n", tandor_roti_price);
                total_bill = tandor_roti_price;
                break;
            default:
                printf("Invalid choice for Veg items.\n");
                return 0;
        }
    }
    else if (choice == 'b') 
    {
        printf("You selected Chinese. Enter 1 for Noodles, 2 for Fried Rice: ");
        int items;
        scanf("%d", &items); 
        
        switch(items) {
            case 1:
                printf("You selected Noodles. Price: %d\n", noodles_price);
                total_bill = noodles_price;
                break;
            case 2:
                printf("You selected Fried Rice. Price: %d\n", friedrice_price);
                total_bill = friedrice_price;
                break;
            default:
                printf("Invalid choice for Chinese items.\n");
                return 0;
        }
    }
    else 
    {
        printf("Invalid  choice. Please select 'a' for Veg or 'b' for Chinese");
        return 0;
    }
    
  
    printf("Total bill: %d\n", total_bill);
    
    return 0;
}
