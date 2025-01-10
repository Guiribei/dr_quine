/*
    Bem vindo ao Quine XD
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *build_string(const char *src){
    char *dest = malloc(strlen(src)+1);
    if(!dest)return NULL;
    strcpy(dest, src);
    return dest;
}

int main(void){
    /*
        Comentario dentro da main
    */
    char *quine = build_string("/*%c    Bem vindo ao Quine XD%c*/%c%c#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cchar *build_string(const char *src){%c    char *dest = malloc(strlen(src)+1);%c    if(!dest)return NULL;%c    strcpy(dest, src);%c    return dest;%c}%c%cint main(void){%c    /*%c        Comentario dentro da main%c    */%c    char *quine = build_string(%c%s%c);%c    printf(quine,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,34,quine,34,10,10,10,10,10,10);%c    free(quine);%c    return 0;%c}%c");
    printf(quine,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,34,quine,34,10,10,10,10,10,10);
    free(quine);
    return 0;
}
