#include <stdio.h>

void bubbleSortPoint(int *tab) {
  for (int *p = tab; p < tab + 5; p++) {
    for (int *q = tab; q < tab + 5 - (p - tab); q++) {
      if (*q > *(q + 1)) {
        int temp = *q;
        *q = *(q + 1);
        *(q + 1) = temp;
      }
    }
  }

  for (int *p = tab; p < tab + 6; p++) {
    printf("%d ", *p);
  }
}

int main() {
  int liczba = 10;
  int *p;
  p = &liczba;

  printf("Liczba: %d\n", liczba);
  printf("Adres liczby: %p\n", &liczba);
  printf("Wartosc wskaznika: %p\n", p);
  printf("Wartosc pod wskaznikiem: %d\n", *p);

  // INFO: Deklaracja tablicy
  int tablica[] = {10, 20, 30, 40, 50, 60};
  int *p_tab = tablica;

  printf("\nOperacje arytmetyczne:\n");

  /*
   * INFO: DODAWANIE:
   * dodawnaie przesuwa wskaznik na nastepna pozycje w tablicy
   * (wartosci wskaznikow mozna normanie dodawac)
   */
  int *dodawanie = p_tab + 2;
  printf("%p\n", dodawanie);  // WARNING: adres 3 elementu tablicy
  printf("%d\n", *dodawanie); // WARNING: wartosc 3 elementu tablicy

  /*
   * INFO: ODEJMOWANIE:
   * odejmowanie przesuwa wskaznik na nastepna pozycje w tablicy
   * (wartosci wskaznikow mozna normanie odejmowac)
   */
  int *odejmowanie = (p_tab + 5) - 2;
  printf("%p\n", odejmowanie);  // WARNING: adres 3 elementu tablicy
  printf("%d\n", *odejmowanie); // WARNING: wartosc 3 elementu tablicy

  // INFO: miejsce w pamieci
  printf("%p\n", p_tab);

  // INFO: wartosc pod wskaznikiem (pierwszy element tablicy)
  printf("%d\n", *p_tab);

  // INFO: wyswietlanie elementow tablicy za pomoca wskaznika
  for (p_tab = tablica; p_tab < tablica + 6; p_tab++) {
    printf("%d: ", *p_tab);

    if (*p_tab == *p) {
      printf("True\n");
    } else {
      printf("False\n");
    }
  }

  int tab_b[] = {33, 20, 10, 45, 12, 60};
  bubbleSortPoint(tab_b);

  return 0;
}
