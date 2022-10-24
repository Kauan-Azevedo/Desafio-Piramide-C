#include <stdio.h>

void piramide() {
  int x, y, mx, my;
  int max;

  printf("Tamanho da piramide: ");
  scanf("%i", &max);

  for (y = 0; y <= max + 1; y++) {
    printf("\n");
    for (x = 0; x < y; x++) {
      printf("%i", x);
    };
  };
  for (my = max; my >= 0; my--) {
    printf("\n");
    for (mx = 0; mx < my; mx++) {
      printf("%i", mx);
    }
  }
};

int main(void) {
  piramide();

  return 0;
}