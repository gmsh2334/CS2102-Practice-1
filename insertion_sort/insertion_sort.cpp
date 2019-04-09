void insertionSort(int a[], int n){

int x, key;

for (int i = 1; i < n; i++) {
       	key = a[i];
        x = i - 1;

       	while (x >= 0 && a[x] > key) {
		a[x + 1] = a[x];
		x = x - 1;
	}

a[x + 1] = key;
}
}
