#include <stdio.h>

/**
 * @main - Entry point
 * Description: house the loop
 * Return: returns success
 */
int main(int argc, char **argv)
{
	/*Run command loop*/
	p_loop();

	/*Performs Cleanup*/
	return EXIT_SUCCESS;

}
/**
 * @p_loop - function to loop through the entire program
 * Return: Nothing
 */
void p_loop()
{
char *line;
char **args;
int status;

do{
	printf(">");
	line = p_read_line();
	args = p_split_line(line);
	status = p_execute(args);

	free(line);
	free(args);
}while(status);
}


