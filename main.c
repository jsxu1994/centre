#include "centre.h"

int main(int argc, const char *argv[]) {
	int n;
	scanf("%d", &n);

	struct coordinate cdt[n];

	for (int i = 0; i < n; i++) {
		scanf("%ld %ld %ld", &cdt[i].x, &cdt[i].y, &cdt[i].z);
	}

	struct coordinate codt = centre(cdt, n);

	printf("%ld %ld %ld\n", codt.x, codt.y, codt.z);

	return 0;
}

