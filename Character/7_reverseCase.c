/*Accept character from user. If character is small display its corresponding capital character,
 and if it small then display its corresponding capital. In other cases display as it is. 
Input :  Q 
Output : q 
Input :  m 
Output : M 
Input :  4 
Output : 4   
Input :  % 
Output : %  
*/

#include<stdio.h>

char reverseCase(char ch)
{
	if((ch >='a')&&(ch<='z'))
		ch-=32;
	else if((ch >='A')&&(ch <='Z'))
		ch+=32;

	return ch;
}

int main()
{
	char ch='\0';

	printf("Enter character:");
	scanf("%c",&ch);

	ch=reverseCase(ch);

	printf("Output:%c",ch);

	return 0;
}