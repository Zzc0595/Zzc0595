#include <iostream>
#include <vector>

void change_two(int &a, int &b) { // 使用引用传递
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }
}

int check_v(const std::vector<int> &vi) { // 使用常量引用避免拷贝
    for (size_t m = 0; m + 1 < vi.size(); ++m) {
        if (vi[m] > vi[m + 1])
            return 1; // 发现逆序对
    }
    return 0; // 向量有序
}

void sort_v(std::vector<int> &v) { // 使用引用传递以修改原始向量
    bool swapped;
    do {
        swapped = false;
        for (size_t n = 0; n < v.size() - 1; ++n) {
            if (v[n] > v[n + 1]) {
                change_two(v[n], v[n + 1]);
                swapped = true; // 标记发生交换
            }
        }
    } while (swapped); // 若本轮无交换则排序完成
}

