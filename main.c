#include <stdio.h>
#include <string.h>
#include <stdio.h>

// Compares if 2 strings are equal.
int is_equals(const char *s1, const char *s2)
{
	if (strcmp(s1, s2) == 0) return 1;
	else return 0;
}

// Show content of the file
void show_file_content(const char* file_name)
{
	// Open file
	FILE *f = fopen(file_name, "r");

	// Check if the file exists
	if (f == NULL) {
		printf("Error: Couldn't find '%s'", file_name);
		return;
	}

	// Read file
	int c;
	while (1) { 
		c = getc(f);
		if (c == EOF) break;
		printf("%c", c);
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	// Options
	if (argc >= 1) {
		// Print help
		printf("Arithmetic operators:\n");
		printf("--lui Load Upper Immediate\n");
	}
	else if (is_equals(argv[1], "--lui") == 1) {
		show_file_content("lui.txt");
	}

	return 0;
}
