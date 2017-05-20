#include "centre.h"

struct coordinate *sort(const struct coordinate cdt[], int num, struct coordinate *storage) {
	for (int i = 0; i < num; i++) {
		storage[i].x = cdt[i].x;
		storage[i].y = cdt[i].y;
		storage[i].z = cdt[i].z;
	}

	long t;

	for (int i = 0; i < num - 1; i++) {
		for (int j = i + 1; j < num; j++) {
			if (storage[j].x < storage[i].x) {
			    t = storage[i].x;
			    storage[i].x = storage[j].x;
			    storage[j].x = t;
			}
			if (storage[j].y < storage[i].y) {
			    t = storage[i].y;
			    storage[i].y = storage[j].y;
			    storage[j].y = t;
			}
			if (storage[j].z < storage[i].z) {
			    t = storage[i].z;
			    storage[i].z = storage[j].z;
			    storage[j].z = t;
			}
		}
	}

	return storage;
}
