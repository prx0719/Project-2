#include <stdio.h>

int main() {
    int n1, n2,n3 ,n6=0, discount=0 , prize=0, n5=0,final, total;
    
    printf("                      Welcome to our shop EVERYDAY DRIP.\n\n");
    
    printf("Enter amount of your bill:");
    scanf("%d", &n1);
    if(n1>=5000)
    { 
        printf("You will get discount of 5% \n\n");
        discount=discount+5;
       prize=prize++;
    }
   
    else
    { 
        printf("Sorry, you will not get discount \n\n");
        
    }
     printf("---------------------------------------\n");
    printf("How many times you have shopped from our shop?:");
    scanf("%d", &n2);
    if(n2>=2){ 
        printf("You are eligible for Discount of 3% \n\n");
      discount=discount+3;
        
    }
  
    else { printf("Sorry you will not get discount of this criteria.\n");
        
    }
    printf("---------------------------------------\n");
    printf("Do you follow us on instagram?\n if yes press 1\n if no press 0\n");
    scanf("%d", &n3);
    if(n3==1){ 
        printf("You recieved 100 credits\ncredits can we withdrawn on next Bill\n Each credit is equal to 1rs \n");
        
    }
    else { printf("You will not recieve any credits.\ncredits can we withdrawn on next Bill\nEach credit is equal to 1rs \n\n");
   } 
   
   
   printf( "------------------------------------\n");
  printf("Your total discount is %d%\n", discount);
  if(n1>=5000){
      n5=5;
  }
  if (n2>=2){
      n6=3;
  }
    final= n5+n6;
    


total= n1 - (n1*final/100);
  printf("Your total amount to pay is %d\n", total);
   printf( "------------------------------------\n");
   printf("Pay via card or cash\n");
  printf("Visit us again !!");
    return 0;
}
