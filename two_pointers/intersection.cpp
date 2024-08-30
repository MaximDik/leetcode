#include <iostream>
#include <vector>

std::vector<int> intersect(const std::vector<int>& a, const std::vector<int>& b){
    std::vector<int> rsl;
    int length_a = a.size();
    int length_b = b.size();

    int l_a = 0, l_b = 0;
    
    while(l_a < length_a || l_b < length_b){
        if(a[l_a] == b[l_b]){
            rsl.push_back(a[l_a]);
            l_a++;
            l_b++;
        }
        if(a[l_a] < b[l_b]){
            l_a++;
        } else {
            l_b++;
        }
    }
    return rsl;
}

void print(const std::vector<int>& nums){
    for(const auto& num : nums){
        std::cout << num << ' ';
    }
    std::cout << '\n';
}

int main(){

    std::vector<int> a{2,2,5,8,14,19,29,30};
    std::vector<int> b{-3, 0, 1, 2, 2, 2, 8, 19};

    auto  nums = intersect(a, b);
    print(nums);
    return 0;
}