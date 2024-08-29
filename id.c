#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct nombre
{
    int one;
    int two;
    int three;
    int four;
}nombre;

char enter();
void test (nombre nbr,int val);

int main()
{

    nombre nbr;
    int val;

    char *get=getenv("QUERY_STRING");
    val=strlen(get);
   
   
    printf("content-type:text/html\n\n");
    sscanf(get,"adresse=%d.%d.%d.%d",&nbr.one,&nbr.two,&nbr.three,&nbr.four);

  
    printf("<HTML>\n");
    printf("    <HEAD>\n");
    printf("        <meta charset='UTF-8'>");
    printf("        <meta name='viewport' content='width=device-width, initial-scale=1.0'>");
    printf("        <TITLE>\n");
    printf("            adresse\n");
    printf("        </TITLE>\n");
    printf("        <style type='text/css'>");
    printf("            @keyframes animation{");
    printf("                from");
    printf("                {");
    printf("                    top:100px;");
     printf("                   left:1250px;");
    printf("                }");
    printf("                to{");
    printf("                    top:0px;");
    printf("                   left:0px;");
    printf("                }");
    printf("           }");
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
    printf("                margin:250px 100px 0 0;");
    printf("                background-color: crimson;");
    printf("                animation-name:paused;");
    printf("                animation-duration:4s;");
    printf("                animation-play-state:paused;");
    printf("            }");
    printf("            .lien{");
    printf("                animation-name:animation;");
    printf("                animation-duration:6s;");
    printf("                position:relative;");    
    printf("                width:100px;");
    printf("                height:25;");
    printf("                background-color:pink;");
    printf("            }");
    printf("</style >");
    printf("    </HEAD>\n");
    printf("    <BODY  style'background-color:black'>\n");
     test(nbr,val);
   
    printf("    </BODY>\n");
    printf("</HTML>");
 
    return 0;
}


void test (nombre nbr,int val)
{
     if(nbr.one>255||nbr.two>255||nbr.three>255||nbr.four>255 ||val!=23)
    {   
        printf("    <center>");
        printf("\n<div class='corps'>ce n'est pas un adresse IP</div>");
        printf("</center>");
        printf("\n<div class='lien'> <a href='adresse.html'>réessayer</a><div>");
    }

    else
    {
        printf("    <center>");
        if(nbr.one<128)
        {   
            printf("\n<div class='corps'> c'est de type A</div>");
        }

        else if(nbr.one>=128||nbr.one<192)
        {
            printf("\n <div class='corps'>c'est de type B</div>");
        }
        else if(nbr.one>=192||nbr.one<224)
        {
            printf("\n <div class='corps'>c'est de type C</div>");
        }

        else if(nbr.one>=224||nbr.one<240)
        {
            printf("\n<div class='corps'> c'est de type D</div>");
        }
        else{
            printf("\n <div class='corps'>c'est de type E</div>");
        }
        printf("</center>");
        printf("\n<div class='lien'> <a href='index.html'>suivant</a><div>");
    }
}
/*
<>
*/