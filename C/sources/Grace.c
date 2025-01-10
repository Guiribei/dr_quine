#include <stdio.h>
/*
    Grace quine
*/
#define S "#include <stdio.h>%c/*%c    Grace quine%c*/%c#define S %c%s%c%c#define F %cGrace_kid.c%c%c#define M int main(){FILE*fp=fopen(F,%cw%c);if(fp){fprintf(fp,S,10,10,10,10,34,S,34,10,34,34,10,34,34,10,10,10);}return 0;}%c%cM%c"
#define F "Grace_kid.c"
#define M int main(){FILE*fp=fopen(F,"w");if(fp){fprintf(fp,S,10,10,10,10,34,S,34,10,34,34,10,34,34,10,10,10);}return 0;}

M
