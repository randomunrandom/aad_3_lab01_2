/*
 * created by Danil Kireev, PFUR NFI-201, 6.09.18, 09:00
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    int n, *A, u=0;
    cout << "Введите N: ";
    cin >> n;
    A = new int[n];
    for(int i=0; i<n; i++) {
        A[i]=rand()%100;
        //cout << "A[" << i << "]=" << A[i] << " ";
        printf("A[%2i]=%2i ", i, A[i]);
    }
    bool down = A[0] < A[1];
    cout << endl;
    for(int i=0; i<n; i++) {
        if(A[i] == A[i+1]) cout << "----=----";
        if(A[i] > A[i+1]) cout << "----/----";
        if(A[i] < A[i+1]) cout << "----\\----";
    }
    cout << endl;
    for(int i=0; i<n-1; i++) {
        if((A[i]<A[i+1]) && !down) {
            u++;
            down=true;
        }
        else down=false;
    }
    cout << "Количество участков где массив убывает - " << u << endl;
    return 0;
}
