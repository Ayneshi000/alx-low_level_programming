#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{

   char str[] = "_putchar";
   int count_str;

   for (count_str = 0; count_str<8; count_str ++)
   {
                 _putchar(str[count_str]);
   
   }	 
		 _putchar("\n")  
  return (0);
}
