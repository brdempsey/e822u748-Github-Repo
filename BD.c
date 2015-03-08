#include "Add.h"
//Billy Dempsey Jr
//WSUID: E822U748

void Conversion (int num, int base2);

void main(void)
{
   long int num;
    int base2;
    //User Input
    printf("What is your number in base 10?\n");
    scanf("%d", &num);
    printf("What base would you like to convert to?\n");
    scanf("%i", &base2);
    //checks if the number is less than 0 or greater than 20
    if(num < 0)
    {
        printf("Please enter a value");
    }
    else if (base2 < 2||base2 > 20)
    {
      printf("Please enter a base between 2 and 20");
    }
    else{
          Conversion(num, base2);
    }

}

void Conversion(int num, int base2)
{

    while (num != 0)
   {
	 converted_number[index] = num % base2;
	 num = num / base2;
	 ++index;
   }

   /* now print the result in reverse order */
   --index;  /* back up to last entry in the array */
   printf("\n\nConverted Number = ");
   for(  ; index>=0; index--) /* go backward through array */
   {
	 printf("%c", base_digits[converted_number[index]]);
   }
   printf("\n");
}
