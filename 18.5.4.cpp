#include <iostream>

void foo(long long number, int &ans) {
    ans = 0;
    if (number >= 10)
        if (number % 10 % 2 == 0) {
            foo(number / 10, ans);
            ans += 1;
        }
        else
            foo(number / 10, ans);
    else
        if (number % 2 == 0)
            ans += 1;

}

int main() {
    int ans;
    foo (2'222'222'222'222'222'222, ans);
    std::cout << ans << std::endl;
}