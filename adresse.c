#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compteur_ligne (FILE *f);

int main()
{
    char nom[20];
    char mdps[20];
    FILE* fic=NULL;
    int ligne;
    int a;
    char buffer[20];
   char take[5];
    char chaine[201];
      char tak[20];
   // char take[5]="name";
    char *get=getenv("QUERY_STRING");
   sscanf(get,"%[^=]=%[^&]&mdp=%s",take,nom,mdps);
    printf("content-type:text/html\n\n");
    //printf("take:%s",take);
   // printf("\n%d",strcmp(take,"name"));
   if(strcmp(take,"name")==0)
    {   
       
        //sscanf(get,"name=%[^&]&mdp=%s",nom,mdps);
        fic=fopen("save.txt","a");
        if(fic==NULL){
           // printf("erreur d'ouverture");
            exit(EXIT_FAILURE);
        }
        fprintf(fic,"%s|%s\n",nom,mdps); 
        printf("<!DOCTYPE html>");
        printf( "<html lang='en'>");
        printf(  "<head>");
        printf("<meta charset='UTF-8'>");
        printf( "<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
        printf( "<title>fiche</title>");
        printf( "<style type='text/css'>");
        printf(  "body{");
        printf( "background-color:black;");
        printf(  "}");
        printf( ".formulaire");
        printf( " {   ");
        printf( "     font-size: 50px;");
        printf(       "font-style: italic;");
        printf(  " font-weight: 300;");
        printf(     "width: 60%%;");
        printf( " height: auto;");
        printf(   "border: 2px solid;");
        printf(  "padding: 50px;");
        printf("margin:100px 250px 250px 250px  ;");
        printf(  "text-shadow: 100px chocolate;");
        printf( "border-radius: 15px 15px 15px 15px ;");
        printf( "border-color: brown;");
        printf("background-color: crimson;");
        printf( "}");
        printf( "p{");
        printf( "padding: 0px 100px 0 600px ;");
        printf( "font-size: 50px;");
        printf("}");
        printf("input{");
        printf( "font-size: 40px;");
        printf( "border-color: blueviolet;");
        printf( "background-color: rgba(224, 65, 144, 0.301);");
        printf( "border-radius: 20px 20px 20px 20px;");
        printf(  "}");
        printf( "@keyframes animation{");
        printf( "from{");
        printf(  "   font-size: 15px;");
        printf(      "color: aqua;");
        printf(  "}");
        printf( "to{");
        printf(   "font-size: 40px;");
        printf(  "color: rgb(237, 63, 135);");
        printf(  " }");
        printf( "}");
        printf(  ".debut{");
        printf(     "animation-name: animation;");
        printf(  "animation-duration: 3s;");
        printf(  "animation-fill-mode: both;");
        printf(  "font-style: oblique;");
        printf(  "}");
        printf( "ion-icon{");
        printf(  "position: absolute;");
        printf(  "left: 300px;");
        printf(  "}");
        printf(  "</style>"  );  
        printf( "</head>");
        printf( "<body>");
        printf(  " <div class='debut'> <center>entrer votre adresse</center></div><br>");
        printf(  "<div class='formulaire'>");
        printf(  " <FORM ACTION='id.cgi' method='get'>" );
        printf(    "adresse:<input type='text' name='adresse' /><br>");
        printf(  "<ion-icon name='accessibility-outline'></ion-icon>");
        printf( "<p><input type='submit' value='envoyer'/>☏</p>");
        printf(  " </FORM>    ");
        printf( "</div>"  );   
        printf( "</html>");
       

    }

   else{
        fic=fopen("save.txt","r");
        if(fic==NULL){
            printf("erreur d'ouverture");
            exit(EXIT_FAILURE);
        }
        ligne=compteur_ligne(fic);

    rewind(fic);
        while(feof(fic)!=1)
        {
            fgets(chaine,200,fic);
            sscanf(chaine,"%[^|]|%s",buffer,tak);
            if(strcmp(buffer,nom)==0 && strcmp(mdps,tak)==0){
                printf("content-type:text/html\n\n");
                printf("<!DOCTYPE html>");
                printf( "<html lang='en'>");
                printf(  "<head>");
                printf("<meta charset='UTF-8'>");
                printf( "<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
                printf( "<title>fiche</title>");
                printf( "<style type='text/css'>");
                printf(  "body{");
                printf( "background-color:black;");
                printf(  "}");
                printf( ".formulaire");
                printf( " {   ");
                printf( "     font-size: 50px;");
                printf(       "font-style: italic;");
                printf(  " font-weight: 300;");
                printf(     "width: 60%%;");
                printf( " height: auto;");
                printf(   "border: 2px solid;");
                printf(  "padding: 50px;");
                printf("margin:100px 250px 250px 250px  ;");
                printf(  "text-shadow: 100px chocolate;");
                printf( "border-radius: 15px 15px 15px 15px ;");
                printf( "border-color: brown;");
                printf("background-color: crimson;");
                printf( "}");
                printf( "p{");
                printf( "padding: 0px 100px 0 600px ;");
                printf( "font-size: 50px;");
                printf("}");
                printf("input{");
                printf( "font-size: 40px;");
                printf( "border-color: blueviolet;");
                printf( "background-color: rgba(224, 65, 144, 0.301);");
                printf( "border-radius: 20px 20px 20px 20px;");
                printf(  "}");
                printf( "@keyframes animation{");
                printf( "from{");
                printf(  "   font-size: 15px;");
                printf(      "color: aqua;");
                printf(  "}");
                printf( "to{");
                printf(   "font-size: 40px;");
                printf(  "color: rgb(237, 63, 135);");
                printf(  " }");
                printf( "}");
                printf(  ".debut{");
                printf(     "animation-name: animation;");
                printf(  "animation-duration: 3s;");
                printf(  "animation-fill-mode: both;");
                printf(  "font-style: oblique;");
                printf(  "}");
                printf( "ion-icon{");
                printf(  "position: absolute;");
                printf(  "left: 300px;");
                printf(  "}");
                printf(  "</style>"  );  
                printf( "</head>");
                printf( "<body>");
                printf(  " <div class='debut'> <center>entrer votre adresse</center></div><br>");
                printf(  "<div class='formulaire'>");
                printf(  " <FORM ACTION='id.cgi' method='get'>" );
                printf(    "adresse:<input type='text' name='adresse' /><br>");
                printf(  "<ion-icon name='accessibility-outline'></ion-icon>");
                printf( "<p><input type='submit' value='envoyer'/>☏</p>");
                printf(  " </FORM>    ");
                printf( "</div>" );  
                printf("<a href='exit.cgi'>déconnecter</a>");  
                printf( "</html>");             
                        
            }
            else
            {
                printf("content-type:text/html\n\n");
                printf("<!DOCTYPE html>");
                printf( "<html lang='en'>");
                printf(  "<head>");
                printf("<meta charset='UTF-8'>");
                printf( "<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
                printf( "<title>fiche</title>");
                printf( "<style type='text/css'>");
                printf(  "body{");
                printf( "background-color:black;");
                printf(  "}");
                printf( ".formulaire");
                printf( " {   ");
                printf( "     font-size: 50px;");
                printf(       "font-style: italic;");
                printf(  " font-weight: 300;");
                printf(     "width: 60%%;");
                printf( " height: auto;");
                printf(   "border: 2px solid;");
                printf(  "padding: 50px;");
                printf("margin:100px 250px 250px 250px  ;");
                printf(  "text-shadow: 100px chocolate;");
                printf( "border-radius: 15px 15px 15px 15px ;");
                printf( "border-color: brown;");
                printf("background-color: crimson;");
                printf( "}");
                printf( "p{");
                printf( "padding: 0px 100px 0 600px ;");
                printf( "font-size: 50px;");
                printf("}");
                printf("input{");
                printf( "font-size: 40px;");
                printf( "border-color: blueviolet;");
                printf( "background-color: rgba(224, 65, 144, 0.301);");
                printf( "border-radius: 20px 20px 20px 20px;");
                printf(  "}");
                printf(  ".debut{");
                printf(     "animation-name: animation;");
                printf(  "animation-duration: 3s;");
                printf(  "animation-fill-mode: both;");
                printf(  "font-style: oblique;");
                printf(  "}");
                printf( "ion-icon{");
                printf(  "position: absolute;");
                printf(  "left: 300px;");
                printf(  "}");
                printf(  "</style>"  );  
                printf( "</head>");
                printf( "<body>");
                printf(  "<div class='formulaire'>");
                printf("mot de passe incorrecte%s|%s\n",buffer,tak);
                printf("<a href='index.html'>reessayer</a>");
                printf( "</div>" );    
                printf( "</html>");             
                        
            }
        }

      
    
  
    

    }
  
    //fclose(fic);  
    return 0;

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

