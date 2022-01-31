#include <iostream>
/*
int foo(int n, int k =3) {
    //an = an-1 + an-2 + an-3
    int sum = 0;
    if (n > k) {
        for (int i = 1; i <= k; i++)
            sum += foo(n - i, k);
        return sum;
    }
    else if (n >0)
        return 1 << (n-1);
    else
        return -1;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    std::cout << foo(n, k) << std::endl;
}
 */