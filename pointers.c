#include <stdio.h>


void wtf(int *v) {
  printf("\nAye: %d", *v);
  printf("\nAye: %x", v);
  *v = *v + 23;
  printf("\nAye: %d", *v);
  printf("\nAye: %x", v);
}

int main() {
  int a = 10;
  wtf(&a);
  printf( "\nYou entered: %d ", a);

}
