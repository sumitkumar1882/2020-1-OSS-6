/*
문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

인풋
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다.
둘째 줄부터 N개의 줄에는 숫자가 주어진다.
이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

아웃풋
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i =0; i < N; i ++)
        cin >> arr[i];
    sort(arr,arr+N);
    
    for (int i =0 ; i <N; i++){
        cout << arr[i] << "\n";
    }
}
