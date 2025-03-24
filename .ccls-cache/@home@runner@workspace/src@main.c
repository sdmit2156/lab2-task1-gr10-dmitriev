#include <stdio.h>
#include <string.h>

typedef struct {
		char brand[50];
		int price;
} Car;

Car cars[7] = {
		{"Toyota", 1500000},
		{"BMW", 3500000},
		{"Lada", 800000},
		{"Kia", 1200000},
		{"Mercedes", 4000000},
		{"Honda", 1300000},
		{"Audi", 3200000}
};

void sortCarsByPrice() {
		for (int i = 0; i < 7 - 1; i++) {
				for (int j = 0; j < 7 - i - 1; j++) {
						if (cars[j].price > cars[j + 1].price) {
								Car temp = cars[j];
								cars[j] = cars[j + 1];
								cars[j + 1] = temp;
						}
				}
		}
}

int main() {
		sortCarsByPrice();
		int medianIndex = 7 / 2;
		printf("Марка автомобиля со средней стоимостью: %s (Цена: %d)\n", 
					 cars[medianIndex].brand, cars[medianIndex].price);

		return 0;
}