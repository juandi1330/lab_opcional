#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Person
typedef struct {
    char name[50];
    int age;
    double height;
} Person;

// Funciones de comparación para qsort
int compare_by_name(const void *a, const void *b) {
    Person *person_a = (Person *)a;
    Person *person_b = (Person *)b;
    return strcmp(person_a->name, person_b->name);
}

int compare_by_age(const void *a, const void *b) {
    Person *person_a = (Person *)a;
    Person *person_b = (Person *)b;
    return person_a->age - person_b->age;
}

int compare_by_height(const void *a, const void *b) {
    Person *person_a = (Person *)a;
    Person *person_b = (Person *)b;
    if (person_a->height < person_b->height) return -1;
    if (person_a->height > person_b->height) return 1;
    return 0;
}
// Función para imprimir el arreglo de personas
void print_people(Person people[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Height: %.2f cm\n", people[i].name, people[i].age, people[i].height);
    }
}
