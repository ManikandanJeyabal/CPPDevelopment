/*
- Consider an N-element array, a, 



Reference: http://www.cplusplus.com/reference/vector/vector/

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N, Q, k;
	int **data;
	scanf("%d %d", &N, &Q);
	data = new int*[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &k);
		data[i] = new int[k];
		for (int j = 0; j < k; j++) {
			scanf("%d", &data[i][j]);
		}
	}

	int a, b;
	for (int i = 0; i < Q; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", data[a][b]);
	}
	return 0;
}