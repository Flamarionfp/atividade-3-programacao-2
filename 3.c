#include <stdio.h>

int main() {
  const int CURRENT_YEAR = 2023;
  char name[50];
  int bornYear;

  printf("Digite seu nome: \n ");
  scanf("%s", name);
  printf("Digite o seu ano de nascimento: \n ");
  scanf("%d", &bornYear);
  printf("Olá, %s, você possui %d anos! ", name, CURRENT_YEAR - bornYear);

  return 0;
}
