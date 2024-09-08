#include <bits/stdc++.h>
#include <iostream>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Ki?m tra xem s? d?i x?ng d� xem x�t tru?c d� chua
        auto it = numMap.find(complement);
        if (it != numMap.end()) {
            // N?u c�, tr? v? ch? s? c?a c?p s? d� t�m th?y
            return {it->second, i};
        }

        // N?u kh�ng, luu gi? s? hi?n t?i v� ch? s? c?a n� v�o b?n d?
        numMap[nums[i]] = i;
    }

    // N?u kh�ng t�m th?y c?p s? n�o, tr? v? m?t vector tr?ng
    return {};
}

int main() {
    // Example
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << "Ch? s? c?a hai s? sao cho t?ng b?ng " << target << ": " << result[0] << " va " << result[1] << std::endl;
    } else {
        std::cout << "Kh�ng t�m th?y c?p s? n�o c� t?ng b?ng " << target << std::endl;
    }

    return 0;
}

