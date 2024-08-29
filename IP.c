#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nombres
{
    int one;
    int two;
    int three;
    int four;
}nombres;

typedef struct personne
{
    char nom[15];
    int mdps;
}personne;


void test (nombres nbr);
void ajout(FILE *fic);
int compteur_ligne (FILE *f);

int main()
{   
    
    char login[15];
    char nom[15];
    int mdps;
    char mdp[15];
    personne *perso=NULL;
    FILE *fic=NULL;
    char chaine[1000];
    int choix;
    char adresse[30];
    int nombre;
    int i;
    nombres nbr;
    int ligne;
    char password[100];
    fic=fopen ("save.txt","r+");
    if(fic==NULL){
        printf("erreur d'ouverture");
        exit(EXIT_FAILURE);
    }
    ligne=compteur_ligne(fic);
   // nbrs=(nombres*)malloc(ligne*sizeof(nombres));
    rewind(fic);
   fgets(chaine,200,fic);

    if (strlen(chaine)==0)
    {   
        do{
            printf("voulez-vous inscrire?(1:oui-2:non):");
            scanf("%d",&choix);
        }while(choix!=1 && choix!=2);
        if(choix==2){
            exit(1);
        }
        if(choix==1){ 

            ajout(fic);
            printf("entrer l'adresse que vous voulez testez:");
            scanf("%s",adresse);
            nombre=strlen(adresse);
            sscanf(adresse,"%d.%d.%d.%d",&nbr.one,&nbr.two,&nbr.three,&nbr.four);
            test(nbr);
        }
    }
    else
    {   


        printf("voulez vous connectez à votre compte ou créez un nouveau compte\n");
        printf("1:connectez à mon compte\n2:créez un noveau compte\n");
        scanf("%d",&choix);
        if(choix==1)
        {   
            rewind(fic);
             perso=(personne*)malloc(ligne*sizeof(personne));
              int a=0;
                while(a==0)
                {  
                   //printf("a=%d",a);
                    rewind(fic);
                    printf("entrer votre nom et votre mot de passe:\n ");
                    printf("login:");
                    scanf("%s",login);
                    printf("mot de passe:");
                    scanf("%s",mdp);
                    char* buffer;
                    while(fgets(chaine,200,fic)!=NULL)
                   {
                        buffer=strtok(chaine,"|");
                        //printf("%s", buffer);
                        if(strcmp(buffer,login)==0)
                        {
                         //   printf("marina le %s",buffer);
                            buffer=strtok(NULL,"|");
                            if(strstr(buffer,mdp)!=NULL)
                            {
                           //     printf("eto");
                                a=1;
                                goto exit;
                            }
                            
                        }
                       
                   }
                  
                   printf("mot de passe incorect\n");
                 
                }
               
                exit:
                printf("daccord\n");
                 test(nbr);
         
        }
        else
        {
            ajout(fic);
            test(nbr);
        }
    }

    return 0;
}

void test (nombres nbr)
{   
    char adresse[30];
    int nombre;
    printf("entrer l'adresse que vous voulez testez:");
    scanf("%s",adresse);
    nombre=strlen(adresse);
    sscanf(adresse,"%d.%d.%d.%d",&nbr.one,&nbr.two,&nbr.three,&nbr.four);
    if(nbr.one>255||nbr.two>255||nbr.three>255||nbr.four>255 ||nombre!=15)
    {   
        printf("\nce n'est pas un adresse IP");
       
    }

    else
    {
        printf("%d.%d.%d.%d",nbr.one,nbr.two,nbr.three,nbr.four);

        if(nbr.one<128)
        {   
            printf("\n c'est de type A");
        }

        else if(nbr.one>=128 && nbr.one<192)
        {
            printf("\nc'est de type B");
        }
        else if(nbr.one>=192 && nbr.one<224)
        {
            printf("\nc'est de type C");
        }

        else if(nbr.one>=224||nbr.one<240)
        {
            printf("\n c'est de type D");
        }
        else{
            printf("\n c'est de type E");
        }
        
    }
}

void ajout(FILE *fic)
{   
    char login[15];
    int mdp;
    printf("entrer votre nom et votre mot de passe de 6 chiffres\n");
    printf("login:");
    scanf("%s",login);
    printf("mot de passe:");
    scanf("%d",&mdp);
    fprintf(fic,"%s|",login);
    fprintf(fic,"%d\n",mdp);
}

int compteur_ligne (FILE *f)
{
	int ligne=0;
	char chaine[100];
	rewind(f);
	while (feof(f)!=1){
		fgets (chaine,100,f);
		ligne++;
	}
	return ligne-1;
}





