#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

#define L 10
void gP(char*p){const char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";for(int i=0;i<L;++i)p[i]=c[rand()%(sizeof(c)-1)];p[L]='\0';}
int cV(const char*p){int c=0;for(int i=0;i<L;++i)c+=p[i];return c;}
int main(){char p[L+1],u[L+1];srand(time(NULL));printf("Generazione password in corso ...\n");fflush(stdout);gP(p);sleep(3);printf("Done!\n");int v=cV(p);while(1){printf("Inserisci la password composta da %d lettere MAIUSCOLE:\n",L);scanf("%10s",u);if(strcmp(p,u)==0)break;else printf("Password non corretta, riprova per favore.\n\n");}printf("\nComplimenti!\nConsegna su classroom un file di testo contenente il seguente codice: %s-%08d\n\n",p,v);return 0;}
