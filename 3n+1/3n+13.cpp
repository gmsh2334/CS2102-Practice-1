
#include <iostream>

using namespace std;

int counter(int n){
int max=1;

	do{
        	if(n%2 == 0)
			n=n/2;
	        else
			n=n*3+1;
	max++;
	}while(n!=1);
return max;
}

int main()
{
	int x, y, n;

	cout << "Escoja el total de intervalos: ";
	cin >> n;

	n=n*2;
	int a[n];

	for (int i=0; i < n; i++){
		if (i%2==0){
			cout << "Escoja el valor minimo del intervalo " << i/2+1 << ": ";
			cin >>a[i];
		}else {
			cout << "Escoja el valor maximo del intervalo " << i/2+1 << ": ";
			cin >>a[i];
		}
	}


for (int i=0; i<n; i=i+2){

	int Max=0;
	x=a[i];
	y=a[i+1];

	while(x <= y){

		if(Max < counter(x)){
			Max = counter(x);
		}else if (Max < counter(x+1)){
			Max = counter(x+1);
		}

	x++;


	}
	cout <<a[i] << " " <<a[i+1] << " "<<  Max << "\n\n";

}

cout <<"\n\n";
return 0;
}
