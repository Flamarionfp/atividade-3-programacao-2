#include <stdio.h>

int main() {
  char letter;

  printf("Digite uma letra: \n");
  letter = getchar();
  printf("%c \n", letter);

  switch (letter) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      printf("%c é uma vogal. \n", letter);
      break;
    default:
      printf("%c é uma consoante. \n", letter);
      break;
  }

  return 0;
}