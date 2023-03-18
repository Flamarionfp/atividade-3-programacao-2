#include <stdio.h>

int main() {
  const int CURRENT_YEAR = 2023; 
  int bornYear;

  printf("Digite o seu ano de nascimento: \n");
  scanf("%d", &bornYear);
  printf("Você possui %d anos: \n ", CURRENT_YEAR - bornYear);

  return 0;
}