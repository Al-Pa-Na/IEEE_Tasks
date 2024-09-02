//IEEE - DAY3 
//1.perfect no.
bool isPerfect(int n)
{
    int sum;
    if(n <= 1)
        return false;
    for(int i = 0; i < n/2; i++)
    {
        if(n % i == 0)
        sum += i;
    }
    return sum == n;
}

//2. Palindrome no.
bool isPalindrome(int n)
{
    int rev = 0, temp = n;
    while( n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return temp == n;
}

//3. count vowels
int CountVowels(string str)
{
    int count = 0;
    for(int i = 0; i < str.length(); i++)
    {
        char c = toupper(str[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            count++;
    }
    return count;
}

//4. Reverse List
void ReverseList(int arr[], int n) 
{
    for (int i = 0; i < n / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

//5.Factorial of a no.
int Factorial(int n) 
{
    if (n <= 1) 
    return 1; 
     else 
    return n * Factorial(n - 1); 
}
