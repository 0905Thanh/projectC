#include <bits/stdc++.h>
#include <iostream>
#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        // Ki?m tra xem s? d?i x?ng dã xem xét tru?c dó chua
        auto it = numMap.find(complement);
        if (it != numMap.end()) {
            // N?u có, tr? v? ch? s? c?a c?p s? dã tìm th?y
            return {it->second, i};
        }

        // N?u không, luu gi? s? hi?n t?i và ch? s? c?a nó vào b?n d?
        numMap[nums[i]] = i;
    }

    // N?u không tìm th?y c?p s? nào, tr? v? m?t vector tr?ng
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
        std::cout << "Không tìm th?y c?p s? nào có t?ng b?ng " << target << std::endl;
    }

    return 0;
}

