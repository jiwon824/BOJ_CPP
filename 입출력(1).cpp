#include <iostream>
#include <string>
using namespace std;

int main() {
//2558 A+B -2
    /*
    int A, B, sum;
    cin >> A >> B;
    sum = A+B;
    cout << sum;
    return 0;
*/
//10950 A+B - 3
//cin.tie(NULL); cout.tie(NULL);가 핵심인 문제
    /*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t, A, B, sum;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> A >> B;
        sum = A+B;
        cout << sum <<'\n';
    }
    return 0;
*/
//10951 A+B - 4
//EOF입력
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, sum;
    while (!cin.eof ()){
        cin >> A >> B;
        //처음 eof문제 틀렸을 때 실수했던 부분 똑같이 실수함.(if문 안 써서 마지막 sum 값 한 번 더 출력됨)
        //eof입력이 들어오면 반복문을 바로 빠져 나가도록 만들 것.
        if (cin.eof()) break; 
        sum = A + B;
        cout << sum << '\n';
    }
    return 0;
*/
//10952 A+B - 5
// 0 0이 입력될 때까지 입력 & sum 출력
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B, sum;
    while (1){
        cin >> A >> B;
        if ((A==0)&&(B==0)) break; 
        sum = A + B;
        cout << sum << '\n';
    }
    return 0;
*/
//10953 A+B - 6
//콤마로 구분된 입력 받기
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, A, B, sum;
    char comma;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> A >> comma >> B;
        sum = A+B;
        cout << sum <<'\n';
    }
    return 0;
*/
//11021 A+B - 7
//케이스 번호를 sum 앞에 같이 출력하기
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, A, B, sum;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> A >> B;
        sum = A+B;
        cout << "Case #" << i+1 <<": " << sum <<'\n';
    }
    return 0;
*/
//11022 A+B - 8
//"Case #x: A + B = C" 형식으로 출력
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, A, B, sum;
    cin >> t;
    for (int i=0; i<t; i++){
        cin >> A >> B;
        sum = A+B;
        cout << "Case #" << i+1 <<": " << A << " + " << B << " = " << sum <<'\n';
    }
    return 0;
*/
//11718 입력 받은 대로 출력
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string sentence;
    for (int i=0; i<100; i++){
        getline(cin, sentence);
        cout << sentence << '\n';
    }
    return 0;
*/
//11719 그대로 출력2
//이번에는 빈 줄, 앞 뒤 공백포함
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string sentence;
    for (int i=0; i<100; i++){
        getline(cin, sentence);
        cout << sentence << '\n';
    }
    return 0;
*/
//11720 숫자의 합
/*
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, sum;
    string inputNum;
    sum = 0;
    cin >>n;
    cin >>inputNum;
    for(int i=0;i<n;i++){
        char iNum = inputNum[i];
        sum=sum+(int(iNum)-'0');
    }
    cout << sum <<'\n';
    return 0;
*/
//11721 열 개씩 끊어 출력하기
/*
    string sentence;
    cin >> sentence;
    for (int i=0; i<sentence.length(); i++){
        cout << sentence[i];
        //i는 인덱스니까 i+1%10이라는 건 10번째일 때 실행하라는 것
        if ((i+1)%10 == 0) cout << '\n';
    }
    return 0;
*/
//2741 N 찍기
/*
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        cout << i << '\n';
    }
    return 0;
*/
//2742 기찍N
/*
    int n;
    cin >> n;
    for (int i=n; i>=1; i--){
        cout << i << '\n';
    }
    return 0;
*/
//2739 구구단
/*
    int n;
    cin >> n;
    for (int i =1; i<=9; i++){
        cout << n << " * " << i << " = " << n*i << '\n';
    }
    return 0;
*/
//1924 2007년
/*
    int week;//week%7==(0:MON, 1:TUE, 2:WED, 3:THU, 4:FRI, 5:SAT, 6:SUN)
    int daysInMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x, y;

    cin >> x >>y;

    week=y;
    //daysInMonth[i]의 인덱스는 0부터 시작하니까 i도 0부터 시작해서 x-1보다 작을 때까지로 해야 함.
    for (int i=0; i<x-1; i++){
        week+=daysInMonth[i];
    }

    switch (week%7)
    {
    case 0:
        cout << "SUN" << '\n';
        break;
    case 1:
        cout << "MON" << '\n';
        break;
    case 2:
        cout << "TUE" << '\n';
        break;
    case 3:
        cout << "WED" << '\n';
        break;
    case 4:
        cout << "THU" << '\n';
        break;
    case 5:
        cout << "FRI" << '\n';
        break;
    case 6:
        cout << "SAT" << '\n';
        break;            
    default:
        break;
    }
    return 0;
*/
}