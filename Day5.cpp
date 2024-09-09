
//1. Given a string s, find the length of the longest substring without repeating characters.

int LengthOfLongestSubstring(string &s) {
    unordered_map<char, int> charIndexMap;
    int start = 0, maxLength = 0;
    
    for (int end = 0; end < s.length(); ++end) {
        if (charIndexMap.find(s[end]) != charIndexMap.end()) {
            start = max(start, charIndexMap[s[end]] + 1);
        }
        charIndexMap[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;
}

//2.There is a staircase with n steps. You need to reach the top and you can either climb 1 step or 2 steps at a time. In how many distinct ways can you reach the top of the staircase.
int DistinctWays(int n) {
    if (n == 0) return 1; // Only one way to stay at the ground
    if (n == 1) return 1; // Only one way to climb one step

    int oneStepBack = 1; // Ways to reach step (n-1)
    int twoStepsBack = 1; // Ways to reach step (n-2)
    int currentWays = 0;

    for (int i = 2; i <= n; ++i) {
        currentWays = oneStepBack + twoStepsBack;
        twoStepsBack = oneStepBack;
        oneStepBack = currentWays;
    }

    return currentWays;
}

//3. Given a range L to R, the task is to find the highest occurring digit in prime numbers which lie between L and R (both inclusive). If multiple digits have same highest frequency return the largest of them. If no prime number occurs between L and R, return -1.


int highestDigitInPrimes(int L, int R) {
    auto isPrime = [](int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    };
    
    vector<int> cnt(10, 0);
    for (int i = L; i <= R; ++i) {
        if (isPrime(i)) {
            int t = i;
            while (t > 0) {
                cnt[t % 10]++;
                t /= 10;
            }
        }
    }
    
    int maxCnt = 0, maxD = -1;
    for (int d = 0; d < 10; ++d) {
        if (cnt[d] > maxCnt || (cnt[d] == maxCnt && d > maxD)) {
            maxCnt = cnt[d];
            maxD = d;
        }
    }
    
    return maxD;
}
