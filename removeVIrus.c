#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int main(){
    printf("\t>>> REMOVEDOR DE ATALHOS\n\n\n");

    char a[1], buf[60];

    printf("Digite a letra do pendrive: ");
    scanf("%s", &a);

    strcpy(buf, "del");
    strncat(buf, " ", 1);
    strncat(buf, a, 1);
    strncat(buf, "\:*.lnk", 6);
    printf("%s\n", buf);
    system(buf);


    strcpy(buf, "attrib -a -r -s -h /s /d");
    strncat(buf, " ", 1);
    strncat(buf, a, 1);
    strncat(buf, "\:*.*", 5);
    printf("%s\n", buf);
    system(buf);

    strcpy(buf, "robocopy");
    strncat(buf, " ", 1);
    strncat(buf, a, 1);
    strncat(buf, ":\\drive\\", 10);
    strncat(buf, " ", 1);
    strncat(buf, a, 1);
    strncat(buf, ":\\", 3);
    strncat(buf, " /e /move", 9);
    printf("%s\n", buf);
    system(buf);

    printf("\nProcesso Finalizado\n"
           "Digite qualquer tecla par sair\n");
    getch();
    return 0;
}
