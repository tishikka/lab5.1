#include <vector>

std::vector <int> vctr(int a) {
    std::vector<int> vec1;
    while (a != 0) {
        vec1.push_back(a % 10);
        a = a/10;
    }
    return vec1;
}

std::vector <int> sm(std::vector <int> a1, std::vector <int> a2) {
    int maxi = std::max(a1.size(), a2.size());
    std::vector <int> res(maxi + 1, 0);
    int carry = 0;
    for (int i=0; i < maxi; i++){
        int sum = carry;
        if (i < a1.size()) sum += a1[i];
        if (i < a2.size()) sum += a2[i];
        res[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {
        res[maxi] = carry;
    }
    return res;
}
