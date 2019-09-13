#include "Header.h"

int* plusM(int** B, int** C, int n1, int m1) {
	int ** D;
	for (int i = 0; i < n1; i++) {
		D[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			D[i][k] = C[i][k] + B[i][k];
		}
	}

	return *D;
}

int* minusM(int** B, int**C, int n1, int m1) {
	int ** D;
	for (int i = 0; i < n1; i++) {
		D[i] = (int*)malloc(m1 * sizeof(int));
		for (int k = 0; k < m1; k++) {
			D[i][k] = C[i][k] - B[i][k];
		}
	}

	return *D;
}