#include <stdio.h>
//Creat by Tuan Linh 00569, date: 2/9/2017.
int main(){
    int a;
    int b;
    int c;
    printf("Please enter number A = ");
    scanf("%i", &a);
    printf("Please enter number B = ");
    scanf("%i", &b);
    printf("Please choice the calculation <1:+, 2:-, 3:x, 4:/> = ");
    scanf("%i", &c);
	while(c== 1,2,3,4){
		if(c == 1){
			printf("The result: %d + %d = %d \n", a, b, a + b);
   			printf("Thank you so much. \n");
   			break;
		}else if(c == 2){
   			printf("The result: %d - %d = %d \n", a, b, a - b);
   			printf("Thank you so much. \n");
   			break;
		}else if(c == 3){
   			printf("The result: %d * %d = %d \n", a, b, a * b);
   			printf("Thank you so much. \n");
   			break;
   		}else if(c == 4){
   			printf("The result: %d / %d = %d \n", a, b, a / b);
   			printf("Thank you so much. \n");
   			break;
		}else{
   			printf("You must enter number to choice your calculation <1:+, 2:-, 3:x, 4:/>: ");
   			scanf("%i", &c);	
		}
	}
    return 0;
}

