#include <stdio.h>

int viej = 100;
int attaquej = 40;

int viem = 100;
int attaquem = 10;

int choix = 0;

int main (void) {
	printf("Vos points de vie s'elevent a %d ! \n", viej);
	printf("Dark Vador sort d'un buisson et vous attaque avec son celebre sabre bleu ! \n");
	printf("Vous perdez %d point de vie !\n", attaquem);
	
	viej = viej - attaquem;
	
	printf("Vous tombez a %d point de vie ! \n", viej);
	
	while (viem > 0 && viej >0) {
		
		printf("Que faites-vous ? \n" "[1] Attaquer \n" "[2] Défendre \n" );
		
		scanf("%d \n", choix);
		
			if (choix == 1) {
				
			printf("vous attaquez ! \n");
		
			viem = viem - attaquej;
			
			printf("Dark vador a maintenant %d point de vie ! \n",viem);
			
		printf("Dark Vador attaque aussi ! \n");
		
			viej = viej - attaquem;
		
			printf("Vous tombez a %d point de vie ! \n", viej);
			
		}
			
			if (choix == 2) {
			
			printf ("Vous vous défendez ! \n");
			printf ("L'attaque de Dark Vador échoue ! \n");
	
		}
	
	if (viej <= 0){
 printf("Vous êtes mort\n");
}
 
 
if (viem <= 0){
    printf("Dark Vador est mort\n");
}
	
	return 0;
	
}}