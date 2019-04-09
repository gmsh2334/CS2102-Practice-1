void merge(int *test, int iz, int mid, int der)
{
    int temp[der + 1];
    int i = iz;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= der)
    {
        if (test[i] <= test[j])
            temp[k++] = test[i++];
        else
            temp[k++] = test[j++];
    }
    while (i <= mid)
        temp[k++] = test[i++];
    while (j <= der)
        temp[k++] = test[j++];
    k--;
    while (k >= 0)
    {
        test[k + iz] = temp[k];
        k--;
    }
}

void mergeSort(int *test, int iz, int der)
{
    int mid;

    if (iz < der)
    {
        mid = (iz + der) / 2;
        mergeSort(test, iz, mid);
        mergeSort(test, mid + 1, der);
        merge(test, iz, mid, der);
    }
}
	
