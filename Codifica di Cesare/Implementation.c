//Implementation:

void Codifica(unsigned short K_encoder,char f_da_codificare[])
{
	unsigned short i;
	unsigned short lunghezza=strlen(f_da_codificare); //Indica la lunghezza della parola da codificare
	
	if(K_encoder>5)
	{
		
	  system("cls");
	  system("color 04");
	  printf("\aERROR..the key must vary from 1 to 5...ATTEND 8 seconds");
	  sleep(5);
	  system("cls");
	
	}else
	{
	printf("\n\n");
	for(i=0; i<lunghezza; i++)
	{
		printf("%c",f_da_codificare[i]+K_encoder);
	}
	
	printf("\n\n\nWait 8 seconds....");
	sleep(8);
	system("cls");
	}
	
}



void Decodifica(unsigned short K_decoder,char f_da_decodificare[])
{
	unsigned short i;
	unsigned short lunghezza=strlen(f_da_decodificare); //Indica la lunghezza della parola da decodificare
	
	if(K_decoder>5)
	{
		
	  system("cls");
	  system("color 04");
	  printf("\aERROR..the key must vary from 1 to 5...ATTEND 8 seconds");
	  sleep(5);
	  system("cls");
	
	}else
	{
	printf("\n\n");
	for(i=0; i<lunghezza; i++)
	{
		printf("%c",f_da_decodificare[i]-K_decoder);
	}
	
		printf("\n\n\nWait 8 seconds....");
		sleep(8);
		system("cls");
	
	}
	
	
}
