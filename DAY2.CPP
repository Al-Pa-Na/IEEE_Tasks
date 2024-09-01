//1
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;  
    }
    return true;
}

//2
bool isStrong(int n) {
    int TEMP = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    return (sum == TEMP);
}

//3
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;       
    }
    return sum;
}

//4
int findMax(int arr[], int n) {
    int maxNum = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i]; 
        }
    }
    return maxNum;
}


//5
void FIBON(int fibo[], int n) {

    if (n >= 1) fibo[0] = 0;
    if (n >= 2) fibo[1] = 1;
    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}