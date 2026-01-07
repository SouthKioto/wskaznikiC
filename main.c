#include <stdio.h>

// NOTE: adding example
int add_pointiers(int *a, int *b) { return *a + *b; }

// NOTE: substract example
int sub_pointiers(int *a, int *b) { return *a - *b; }

// NOTE: multi example
int mulit_pointiers(int *a, int *b) { return *a * *b; }

// NOTE: div example
int div_example(int *a, int *b) { return *a / *b; };

// NOTE: example bubble sort wih pointiers
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

  printf("\n");

  // INFO: funkcje odejmowania wartosci wskaznikow
  printf("Funkcje dodawania i odejmowania\n");
  int wynik = 0;

  wynik = add_pointiers(
      p_tab, p_tab + 1); // INFO: dodanie pierwszego i dugiego elem. tablicy
  printf("%d\n", wynik);

  wynik = sub_pointiers(p_tab, p_tab + 3);
  printf("%d\n", wynik);

  wynik = mulit_pointiers(p_tab, p_tab + 2);
  printf("%d\n", wynik);

  wynik = div_example(p_tab, p_tab + 2);
  printf("%d\n", wynik);

  printf("\n");

  // INFO: dekrementacja i ikrementacja wskaznikow

  printf("Dekrementacja i ikremenracja wskaznikow");

  int example[] = {10, 20, 30, 40};
  p = example;

  printf("%d\n", *p);
  p++;
  printf("%d\n", *p);
  p--;
  printf("%d\n", *p);
  p += 2;
  printf("%d\n", *p);

  printf("\n");

  // INFO: miejsce w pamieci
  printf("Miejsce w pamieci: \n");
  printf("%p\n", p_tab);

  // INFO: wartosc pod wskaznikiem (pierwszy element tablicy)

  printf("Wartosc pod wskaznikiem (index:1): \n");
  printf("%d\n", *p_tab);

  // INFO: wyswietlanie elementow tablicy za pomoca wskaznika
  printf("Wyświetlenie elementów tablicy za pomocą wskaznika\n");
  printf("i sprawdzanie czy liczba znajduje sie w tablicy: \n");

  for (p_tab = tablica; p_tab < tablica + 6; p_tab++) {
    printf("%d: ", *p_tab);

    if (*p_tab == *p) {
      printf("True\n");
    } else {
      printf("False\n");
    }
  }

  printf("\n");
  printf("\nSortowanie bąbelkowe za pomocą wskaźników:\n");

  int tab_b[] = {33, 20, 10, 45, 12, 60};
  bubbleSortPoint(tab_b);

  return 0;
}
