#include <stdio.h>

/**
 * main - entry point
 * Description: code that passes Betty checks
 * Return: Always 0
 */

int main(void)
{
	printf("This code passes the Betty checks!\n");
	return (0);
}
<<<<<<< HEAD
=======

/**
 * config_init - initialize member values for config struct
 * @build: input build
 *
 * Description: Accepts structured input commnad, and finds the right
 * configuration to execute from the built-in configurations.
 * Return: build with initialized members
 */
config *config_init(config *build)
{
	build->env = generateLinkedList(environ);
	build->env_list = NULL;
	build->args = NULL;
	build->buffer = NULL;
	build->path = _getenv("PATH", environ);
	build->full_path = NULL;
	build->count_line = 0;
	build->shell_name = NULL;
	build->error_status = 0;
	return (build);
	
}
>>>>>>> f64255c03e45fa59cd0c1a6ddb9ef7d48553f942
