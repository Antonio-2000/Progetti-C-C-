#include "Cesare.h"
int main(void)
{

	unsigned short select;
	unsigned short key;
	char frase[1000];
    
	while(1)
	{
	system("color 0f");
	printf("(for Microsoft Windows)Italy Naples CESARE Release Candidate (compiled December 23 2020 18:24:47)\n\n");
	printf("Cesare>> Enter the phrase to Encode or Decode: ");
	scanf("%s",&frase);
	printf("\n\n-1 Coding");
	printf("\n-2 Decoding");
	printf("\n-0 Exit");
	printf("\n\n--> ");
	scanf("%d",&select);
	system("cls");
	if(select==1)
	{
	  
	  printf("(for Microsoft Windows)Italy Naples CESARE Release Candidate (compiled December 23 2020 18:24:47)");
	  printf("\n\nCesare>> Enter the Encryption key: ");
	  scanf("%d",&key);
	  
	  Codifica(key,frase);
	  
	}else if(select==2)
	{
	  printf("(for Microsoft Windows)Italy Naples CESARE Release Candidate (compiled December 23 2020 18:24:47)");
	  printf("\n\nCesare>> Enter the decryption key: ");
	  scanf("%d",&key);
	  
	  Decodifica(key,frase);
	  
	}else if(select==0)
	{

		break;
		
	}else
	{
		system("color 04");
		printf("Error, wait 5 seconds");
		sleep(5);
		system("cls");
	}
	}
	printf("Creator: Antonio Izzo\n");
	printf("Email: izzoa1499@gmail.com\n\n");
	system("pause");
	return 0;	
}
