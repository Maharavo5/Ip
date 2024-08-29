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

int main (){
    //FILE *fic=NULL;
    //fic=fopen("save.txt","r");

    printf("content-type:text/html\n\n");
    printf("<HTML>\n");
    printf("    <HEAD>\n");
    printf("        <meta charset='UTF-8'>");
    printf("        <meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("        <TITLE>\n");
    printf("            se connecter\n");
    printf("        </TITLE>\n");
    printf("        <style type='text/css'>");
     
    printf("            body");
    printf("            {");
    printf("                background-color:black;");
    printf("            }");
    printf("            .corps");
      printf("            {");
    printf("                border:solid;");
    printf("                width:500px;  ");
    printf("                height:auto;");
    printf("                padding:30px 30px 30px 30px;");
    printf("                margin:0px 0px 0px 0px;");
    printf("                background-color: crimson;");
    printf("                animation-name:paused;");
    printf("                animation-duration:4s;");
    printf("                animation-play-state:paused;");
    printf("            }");
    printf("  .formulaire");
    printf(    "{"   );
    printf(      " font-size: 50px;");
    printf("        font-style: italic;");
    printf(        "font-weight: 300;");
             printf("width: 60%%;");
            printf( "height: auto;");
             printf("border: 2px solid;");
             printf("padding:0px  0px 10px 10px;");
             printf("margin:50px 250px 250px 250px  ;");
             printf("text-shadow: 100px chocolate;");
             printf("border-radius: 15px 15px 15px 15px ;");
             printf("border-color: brown;");
             printf("background-color: crimson;");
         printf("}");
     printf(".enter{");
            printf(" font-size: 40px;");
            printf(" border-color: blueviolet;");
            printf(" background-color: rgba(224, 65, 144, 0.301);");
             printf("border-radius: 20px 20px 20px 20px;");
        printf(" }");

         printf("input.sorti{");
            printf(" font-size: medium;");
            printf(" border-color: palevioletred;");
             printf("background-color: rgba(237, 104, 130, 0.541);");
         printf("}");
          printf(".debut{");
             printf("width: 90%%;");
             printf("color: blueviolet;");
             
             printf("background-color: rgb(234, 159, 209);");
            printf(" padding: 30px 30px 30px 30px;");
             printf("margin:0px 0px 0px 0px;");
             printf("border-radius: 15px 15px 0px 0px;");
        printf(" }");
       
  
    
    printf("</style >");
    printf("    </HEAD>\n");
    printf("<body>");
         printf("<div class='formulaire'>");
            printf( "<div class='debut' >");
            printf( "<center>entrer votre nom et mots de passe</center>");
            printf( "</div>");
            printf( "<form action='adresse.cgi' method='get'>");
                printf( "name:<input class='enter' type='text' name='name'  /><br>");
              printf(   "password:<input class='enter' type='password' name='mdp' /><br>");
               printf(  "<center><p><input class='sorti' type='submit' value='créer'/></p></center>");
            printf( "</form>");
        printf( "</div>" );     
        printf( "</body>" );
    printf( "</html>");  

    return 0;

}   