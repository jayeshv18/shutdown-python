#include <stdio.h>
#include <string.h>

int main() {
FILE *file = fopen("filename.txt", "r");
if (file == NULL) {
printf("Error opening file\n");
return 1;
}
int wordcount=0;
int maxlength=0;
char longestWord[100];
char currentWord[100];
while (fscanf(file, "%s",currentWord) ==1) {
wordcount++;
if (strlen(currentWord) > maxlength) {
maxlength = strlen(currentWord);
strcpy(longestWord, currentWord);
}
}

fclose(file);

printf("Word count: %d\n", wordcount);
printf("Longest word: %s\n", longestWord);

return 0;
} 