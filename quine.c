#include <stdio.h>

int main(void) {
	//Welcome to the Quine program XD
	char *format = "#include <stdio.h>%c%cint main(void) {%c%c//Welcome to the Quine program XD%c%cchar *format = %c%s%c;%c%cprintf(format, 10, 10, 10, 9, 10, 9, 34, format, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c%c/*And it did work pretty well!%c%cJust as we wanted*/%c%creturn (0);%c}%c";
	printf(format, 10, 10, 10, 9, 10, 9, 34, format, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
	/*And it did work pretty well!
	Just as we wanted*/
	return (0);
}
