#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

int main() {
	int a, b;
	while (0 < scanf("%d%d", &a, &b)) {
		printf("%d\n", b / (a + 1));
	}

	return 0;
}