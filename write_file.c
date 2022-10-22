#include <stdio.h>
#include <stdlib.h>

/*
 * writing a file in c (create, edit, save)
 * syntax:-
 * int main()
 * {
 *   FILE * fpointer = fopen("file name", file mode);
 *   fprintf(fpointer, "file content");
 *   fclose(fpointer);
 *   return 0;
 * }
 * running the program automatically creates a new file.
 * changing the file content when in write mode would override the initial content when you run the program.
 * basic file modes includes:-
 * "w" - write (creating and saving a file)
 * "a" - append (adding more content to the file)
 * "r" - read (reading a file).
 *
 * syntax for reading a file:-
 * int main()
 * {
 *   char line[255];
 *   FILE * fpointer = fopen("file name", file mode);
 *   fgets(line, 255, fpointer);
 *   adding more fgets reads the next line in the file.
 *   printf("%s", line);
 *   fclose(fpointer);
 *   return 0;
 * }
 */
 
int main()
{
  FILE * fpointer = fopen("text.txt", "w");
  fprintf(fpointer, "this is about c");
  fclose(fpointer);
  return 0;
}