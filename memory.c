#include <stdio.h>

int main() {
   FILE *file;
   int num1, num2;

   // Open file for reading
   file = fopen("data.txt", "r");
   if (file == NULL) {
       printf("Error opening file!\n");
       return 1;
   }

   // Read two integers from the file
   if (fscanf(file, "%d %d", &num1, &num2) == 2) {
       printf("First number: %d\n", num1);
       printf("Second number: %d\n", num2);
   } else {
       printf("Failed to read two integers from the file.\n");
   }

   // Close the file
   fclose(file);

   return 0;
}
