#include "main.h"

int main(int ac, char **argv)
{
	char *prompt = "(Myshell) $ ";
	char *lineptr;
	size_t n = 0;
	ssize_t nchars_read;

	/* declaring void variables */
	(void)ac; (void)argv;
	
	while(1)
	{
	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);
	/* check if the geline function failed or reached EOF or user pressed ctl D*/
	if (nchars_read == -1)
	{
		printf("Exiting shell ...\n");
		return (-1);
	}
	printf("%s\n", lineptr);
	
	/* free up allocated memery */
	free(lineptr);
	}
	return (0);
}
