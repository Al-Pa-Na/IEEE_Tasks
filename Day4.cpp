//1. Armstrong checker
bool isArmstrong(int n) 
{
    int temp = n;
    int sum = 0;
    int digits = 0;
    while (n != 0) 
    {
        digits++;
        n /= 10;
    }
    n = temp;
    while (n != 0) 
    {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return (sum == temp);
}


// 2. Anagram checker
bool isAnagram(string str1, string str2) 
{
    if (str1.length() != str2.length()) 
    {
        return false;
    }
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    return str1 == str2;
}

//3. Sum of even nos. in a list
int SumOfEvenNumbers(int nos[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        if (nos[i] % 2 == 0) {
            sum += nos[i];
        }
    }
    return sum;
}

//4. Calculate the GCD
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}


//5.Convert celsius to Fahrenheit

double CelToFah(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}