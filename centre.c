#include "centre.h"

struct coordinate centre(const struct coordinate cdt[], int num) {
	struct coordinate c_cdt = {cdt[0].x, cdt[0].y, cdt[0].z};

	if (num > 1) {
		struct coordinate *storage = (struct coordinate *)malloc(num * sizeof(struct coordinate));
		struct coordinate *t_cdt = sort(cdt, num, storage);
		for (int i = num - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				t_cdt[j].x = (t_cdt[j].x + t_cdt[j + 1].x) / 2;
				t_cdt[j].y = (t_cdt[j].y + t_cdt[j + 1].y) / 2;
				t_cdt[j].z = (t_cdt[j].z + t_cdt[j + 1].z) / 2;
			}
		}
		c_cdt.x = t_cdt[0].x;
		c_cdt.y = t_cdt[0].y;
		c_cdt.z = t_cdt[0].z;
		free(storage);
	}

	return c_cdt;
}

