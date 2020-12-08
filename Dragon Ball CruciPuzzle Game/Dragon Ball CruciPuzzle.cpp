#include<iostream>
#include<string.h>
#include<windows.h>
#include<cstdlib>
#include<MMSystem.h>
using namespace std;

void punteggio_terrestri(int max, char terr[][9], char s)
{
	string nome,name;
	char tasto;
	int tentativi=15;
	
		while(max!=13&&tentativi!=0)
		{
		system("color 9f");
		name=nome;
		cout<<"Benvenuto sulla TERRA!	         Numero PG Rimasti: "<<max<<"/13"<<"\t\t\t Numero Tentativi Rimasti: "<<tentativi<<"/0"<<endl<<endl<<endl;
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<9; j++)
			{
				cout<<" "<<terr[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Scrivi qui i terrestri che trovi: ";
		cin>>nome;
		if(nome==name)
		{
		   system("cls");
		   tentativi--;
		   cout<<"PG gia' inserito"<<endl<<endl;
		   continue;
		}else if(nome=="BULMA"||nome=="BABA"||nome=="UB"||nome=="UPA"||nome=="OSCAR"||nome=="PUAL"||nome=="MEI"||nome=="RIFF"||nome=="MUTEN"||nome=="SATAN"||nome=="PAN"||nome=="BRA"||nome=="POPO")
		{
			PlaySound(TEXT("Coin.wav"),NULL, SND_SYNC);
			system("cls");
			max++;
		}else if(nome=="ESCI"||nome=="esci")
		{
			system("cls");
			break;	
		}
		else
		{
			
			system("cls");
			tentativi--;
			continue;
		}
					
	}
	if(max==13)
	{
		cout<<"                      COMPLIMENTI HAI SUPERATO IL LIVELLO TERRESTRI"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t##################"<<endl;
		cout<<"\t\t                                # "<<endl;
		cout<<"\t\t                               #  "<<endl;
		cout<<"\t\t                              #   "<<endl;
		cout<<"\t\t                             #    "<<endl;
		cout<<"\t\t                        ######### "<<endl;
		cout<<"\t\t                           #      "<<endl;
		cout<<"\t\t                          #       "<<endl;
		cout<<"\t\t                         #        "<<endl;
		cout<<"\t\t                        #         "<<endl;
		cout<<"\t\t                       #          "<<endl;
		cout<<"\t\t                      #           "<<endl;
		cout<<"\t\t                     #            "<<endl;
		cout<<"\t\t                    ##############";
		
		PlaySound(TEXT("Winner.wav"),NULL, SND_SYNC);
		system("cls");
	}
	if(tentativi==0)
	{
		
		system("color 04");
		cout<<"                      HAI FALLITO IN QUESTO LIVELLO"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t"<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		
		PlaySound(TEXT("Loser.wav"),NULL, SND_SYNC);
		system("cls");
	}
	
}

void punteggio_namecciani(int max, char namek[][7], char s)
{
	string nome,name;
	char tasto;
	int tentativi=6;
	while(max!=4&&tentativi!=0)
	{
		system("color 20");
		name=nome;
		cout<<"Benvenuto su NAMEK!		  Numero PG Rimasti: "<<max<<"/4"<<"\t\t\t Numero Tentativi Rimasti: "<<tentativi<<"/0"<<endl<<endl<<endl;
		for(int i=0; i<7; i++)
		{
			for(int j=0; j<7; j++)
			{
				cout<<" "<<namek[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Scrivi qui i namecciani che trovi: ";
		cin>>nome;
		if(nome==name)
		{
			system("cls");
			tentativi--;
			cout<<"PG gia' inserito"<<endl<<endl;
			continue;
		}else if(nome=="NAIL"||nome=="SUPREMO"||nome=="PICCOLO"||nome=="DENDE")
		{
			PlaySound(TEXT("Coin.wav"),NULL, SND_SYNC);
			system("cls");
			max++;
		}else if(nome=="ESCI"||nome=="esci")
		{
			system("cls");
			break;	
		}else
		{
			system("cls");
			tentativi--;
			continue;
		}
		
	}
	if(max==4)
	{
		cout<<"                      COMPLIMENTI HAI SUPERATO IL LIVELLO NAMECCIANI"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t##################"<<endl;
		cout<<"\t\t                                # "<<endl;
		cout<<"\t\t                               #  "<<endl;
		cout<<"\t\t                              #   "<<endl;
		cout<<"\t\t                             #    "<<endl;
		cout<<"\t\t                        ######### "<<endl;
		cout<<"\t\t                           #      "<<endl;
		cout<<"\t\t                          #       "<<endl;
		cout<<"\t\t                         #        "<<endl;
		cout<<"\t\t                        #         "<<endl;
		cout<<"\t\t                       #          "<<endl;
		cout<<"\t\t                      #           "<<endl;
		cout<<"\t\t                     #            "<<endl;
		cout<<"\t\t                    ##############";
		
		PlaySound(TEXT("Winner.wav"),NULL, SND_SYNC);
		system("cls");
	}
	
	if(tentativi==0)
	{
		system("color 04");
		cout<<"                      HAI FALLITO IN QUESTO LIVELLO"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t"<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		
		PlaySound(TEXT("Loser.wav"),NULL, SND_SYNC);
		system("cls");
	}
	
}
								  
void punteggio_villain(int max, char devil[][7], char s)
{
	string nome,name;
	char tasto;
	const char faccina=2;
	int tentativi=11;
	
	while(max!=9&&tentativi!=0)
	{
		system("color 0f");
		name=nome;
		cout<<"Benvenuto negl'INFERI"<<faccina<<"!             Numero PG Rimasti: "<<max<<"/9"<<"\t\t\t Numero Tentativi Rimasti: "<<tentativi<<"/0"<<endl<<endl<<endl;
		for(int i=0; i<7; i++)
		{
			for(int j=0; j<7; j++)
			{
				cout<<" "<<devil[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Scrivi qui i Villain che trovi: ";
		cin>>nome;
		if(nome==name)
		{
			system("cls");
			tentativi--;
			cout<<"PG gia' inserito"<<endl<<endl;
			continue;
		}else if(nome=="FREEZER"||nome=="CELL"||nome=="MORO"||nome=="KIDBU"||nome=="TURLES"||nome=="REKOOM"||nome=="JEETH"||nome=="BABY"||nome=="NAPPA")
		{
			PlaySound(TEXT("Coin.wav"),NULL, SND_SYNC);
			system("cls");
			max++;
		}else if(nome=="ESCI"||nome=="esci")
		{
			system("cls");
			break;
		}else
		{
			system("cls");
			tentativi--;
			continue;
		}
		
		
	}
	if(max==9)
	{
		cout<<"                      COMPLIMENTI HAI SUPERATO IL LIVELLO VILLAIN"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t##################"<<endl;
		cout<<"\t\t                                # "<<endl;
		cout<<"\t\t                               #  "<<endl;
		cout<<"\t\t                              #   "<<endl;
		cout<<"\t\t                             #    "<<endl;
		cout<<"\t\t                        ######### "<<endl;
		cout<<"\t\t                           #      "<<endl;
		cout<<"\t\t                          #       "<<endl;
		cout<<"\t\t                         #        "<<endl;
		cout<<"\t\t                        #         "<<endl;
		cout<<"\t\t                       #          "<<endl;
		cout<<"\t\t                      #           "<<endl;
		cout<<"\t\t                     #            "<<endl;
		cout<<"\t\t                    ##############";
		
		PlaySound(TEXT("Winner.wav"),NULL, SND_SYNC);
		system("cls");
	}
	
	if(tentativi==0)
	{
		system("color 04");
		cout<<"                      HAI FALLITO IN QUESTO LIVELLO"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t"<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		
		PlaySound(TEXT("Loser.wav"),NULL, SND_SYNC);
		system("cls");
	}
	
}
								
void punteggio_androidi(int max, int cyborg[][3], char s)
{
	string nome,name;
	char tasto;
	int tentativi=12;
	
	while(max!=10&&tentativi!=0)
	{
		system("color 0e");
		name=nome;
		cout<<"Benvenuto nel Laboratorio del Dottor Gelo!            Numero PG Rimasti: "<<max<<"/10"<<"\t\t\t Numero Tentativi Rimasti: "<<tentativi<<"/0"<<endl<<endl<<endl;
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<3; j++)
			{
				cout<<" "<<cyborg[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Scrivi qui gli ANDROIDI che trovi: ";
		cin>>nome;
		if(nome==name)
		{
			system("cls");
			tentativi--;
			cout<<"PG gia' inserito"<<endl<<endl;
			continue;
		}else if(nome=="18"||nome=="17"||nome=="20"||nome=="19"||nome=="16"||nome=="13"||nome=="14"||nome=="15"||nome=="21"||nome=="8")
		{
			PlaySound(TEXT("Coin.wav"),NULL, SND_SYNC);
			system("cls");
			max++;
		}else if(nome=="esci"||nome=="ESCI")
		{
			system("cls");
			break;
		}else
		{
			system("cls");
			tentativi--;
			continue;
		}
				
	}
		if(max==10)
		{
		   
		   cout<<"                      COMPLIMENTI HAI SUPERATO IL LIVELLO ANDROIDI"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t##################"<<endl;
		cout<<"\t\t                                # "<<endl;
		cout<<"\t\t                               #  "<<endl;
		cout<<"\t\t                              #   "<<endl;
		cout<<"\t\t                             #    "<<endl;
		cout<<"\t\t                        ######### "<<endl;
		cout<<"\t\t                           #      "<<endl;
		cout<<"\t\t                          #       "<<endl;
		cout<<"\t\t                         #        "<<endl;
		cout<<"\t\t                        #         "<<endl;
		cout<<"\t\t                       #          "<<endl;
		cout<<"\t\t                      #           "<<endl;
		cout<<"\t\t                     #            "<<endl;
		cout<<"\t\t                    ##############";
		
		PlaySound(TEXT("Winner.wav"),NULL, SND_SYNC);
		system("cls");
		   
		}
		
		if(tentativi==0)
		{
			system("color 04");
		cout<<"                      HAI FALLITO IN QUESTO LIVELLO"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t"<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		
		PlaySound(TEXT("Loser.wav"),NULL, SND_SYNC);
		system("cls");
		}
	
	
}
							  
void punteggio_sayan(int max, char sayanjin[][7], char s)
{
	string nome,name;
	char tasto;
	int tentativi=12;
	
	while(max!=10&&tentativi!=0)
	{
		system("color e0");
		name=nome;
		cout<<"Benvenuto nel Pianeta Vegeta!                Numero PG Rimasti: "<<max<<"/10"<<"\t\t\t Numero Tentativi Rimasti: "<<tentativi<<"/0"<<endl<<endl<<endl;
		for(int i=0; i<9; i++)
		{
			for(int j=0; j<7; j++)
			{
				cout<<" "<<sayanjin[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Scrivi qui i SAYAN che trovi: ";
		cin>>nome;
		if(nome==name)
		{
			system("cls");
			tentativi--;
			cout<<"PG gia' inserito"<<endl;
		    continue;
		    
		}else if(nome=="esci"||nome=="ESCI")
		{
			system("cls");
			break;
			
		}else if(nome=="YAMOSHI"||nome=="GOKU"||nome=="GOTEN"||nome=="GOHAN"||nome=="GINE"||nome=="KALE"||nome=="TRUNKS"||nome=="VEGETA"||nome=="TARBLE"||nome=="RADISH")
		{
			PlaySound(TEXT("Coin.wav"),NULL, SND_SYNC);
			system("cls");
			max++;
		}else
		{
			system("cls");
			tentativi--;
			continue;
		}
		
	}
	
		if(max==10)
		{
		  cout<<"                      COMPLIMENTI HAI SUPERATO IL LIVELLO SAYAN"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t##################"<<endl;
		cout<<"\t\t                                # "<<endl;
		cout<<"\t\t                               #  "<<endl;
		cout<<"\t\t                              #   "<<endl;
		cout<<"\t\t                             #    "<<endl;
		cout<<"\t\t                        ######### "<<endl;
		cout<<"\t\t                           #      "<<endl;
		cout<<"\t\t                          #       "<<endl;
		cout<<"\t\t                         #        "<<endl;
		cout<<"\t\t                        #         "<<endl;
		cout<<"\t\t                       #          "<<endl;
		cout<<"\t\t                      #           "<<endl;
		cout<<"\t\t                     #            "<<endl;
		cout<<"\t\t                    ##############";
		
		PlaySound(TEXT("Winner.wav"),NULL, SND_SYNC);
		system("cls");
		}
		
		if(tentativi==0)
		{
			system("color 04");
		cout<<"                      HAI FALLITO IN QUESTO LIVELLO"<<endl;
		cout<<"\n\n\n\n\n\n\t\t\t\t"<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		cout<<"\t\t                "<<s<<endl;
		
		PlaySound(TEXT("Loser.wav"),NULL, SND_SYNC);
		system("cls");
		}
	
	
}



int main()
{
	
	int a=0;
	int scelta;
	char tasto;
const char simbolo=219;
	  char terrestri[6][9]={{'B','A','B','A','S','A','T','A','N'},{'U','B','P','U','A','L','W','Z','E'},{'L','T','O','U','O','S','C','A','R'},{'M','N','P','Y','P','B','M','E','I'},{'A','I','O','T','A','R','O','L','F'},{'M','U','T','E','N','A','N','U','F'}};
	  char namecciani[7][7]{{'S','U','P','R','E','M','O'},{'N','A','I','L','D','I','X'},{'S','U','C','J','N','O','M'},{'H','X','C','M','E','F','I'},{'I','X','O','P','D','S','V'},{'N','H','L','S','G','S','U'},{'T','F','O','K','Y','L','F'}};
	  char cattivi[7][7]={{'F','R','E','E','Z','E','R'},{'L','E','E','C','Y','J','A'},{'B','K','Z','S','O','E','P'},{'A','O','I','R','R','E','P'},{'B','O','O','D','U','T','A'},{'Y','M','J','K','B','H','N'},{'X','S','E','L','R','U','T'}};
	  int  androidi[4][3]={{18,20,17},{19,16,13},{55,92,14},{15,21,8}};
	  char sayan[9][7]={{'Y','A','M','O','S','H','I'},{'G','O','K','U','S','Q','M'},{'O','G','O','H','A','N','I'},{'T','R','U','N','K','S','A'},{'E','A','K','A','L','E','T'},{'N','D','R','X','Y','N','E'},{'D','I','S','B','F','I','G'},{'T','S','Q','Z','L','G','E'},{'U','H','P','Y','J','E','V'}};
	

	while(1)
	{
	
	
	system("color c0");
	cout<<"BENVENUTI IN DRAGON BALL Z PUZZLE"<<endl<<endl;
	cout<<"Inserite una delle seguenti modalita':"<<endl<<endl;
	cout<<"_____________________________"<<endl;
	cout<<"|1)Terrestre;               |"<<endl;
	cout<<"|2)Namecciano;              |"<<endl;
	cout<<"|3)Villain;                 |"<<endl;
	cout<<"|4)Androidi;                |"<<endl;
	cout<<"|5)Sayan;                   |"<<endl;
	cout<<"|0)Per Uscire dal Software  |"<<endl;
	cout<<"#############################"<<endl;
	cout<<"|"<<endl;
	cout<<"|"<<endl;
	cout<<"--> ";
	cin>>scelta;
	system("cls");
	if(scelta==1)
	{
	punteggio_terrestri(a,terrestri,simbolo);
	
		
	}else if(scelta==2)
	{
		
		punteggio_namecciani(a,namecciani,simbolo);
	
	}else if(scelta==3)
	{
		punteggio_villain(a,cattivi,simbolo);
		
	}else if(scelta==4)
	{
		punteggio_androidi(a,androidi,simbolo);
		
	}else if(scelta==5)
	{
		
		punteggio_sayan(a,sayan,simbolo);
		
	}else if(scelta==0)
	{
		break;
	}else
	{
		cout<<"ERRORE hai inserito un'opzione non valida..."<<endl<<endl<<endl;
		cout<<"Inserisci un tasto e premi invio per riprovare... ";
		cin>>tasto;
		system("cls");
	}
	
	}
	system("color f0");
	cout<<"Creatore: Antonio Izzo"<<endl;
	cout<<"Instagram: antonio_izzo100"<<endl;
	system("start https://www.instagram.com/antonio_izzo100/");
	
	return 0;
}
