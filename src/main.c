#include <stdio.h>
#include <string.h>

typedef struct {
		char brand[50];
		int price;
} Car;

Car cars[N] = {
		{"Toyota", 1500000},
		{"BMW", 3500000},
		{"Lada", 800000},
		{"Kia", 1200000},
		{"Mercedes", 4000000},
		{"Honda", 1300000},
		{"Audi", 3200000}
};

void sortCarsByPrice(Car cars[], int n) {
		for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < n - i - 1; j++) {
						if (cars[j].price > cars[j + 1].price) {
								// Обмен местами
								Car temp = cars[j];
								cars[j] = cars[j + 1];
								cars[j + 1] = temp;
						}
				}
		}
}