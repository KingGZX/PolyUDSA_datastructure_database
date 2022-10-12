/*
 * @author: Zhexuan Gu
 * @Date: 2022-10-12 12:53:26
 * @LastEditTime: 2022-10-12 13:40:05
 * @FilePath: /CPPprojects/PolyU_DSA_datastructure_database/Search/test.cpp
 * @Description: Please implement
 */
#include "BinarySearch.h"
#include "BinarySearch.cpp"
#include "../Sortings/DifferentSortAlgorithms.h"
#include "../Sortings/DifferentSortAlgorithms.cpp"

/*因为二分查找要求有序，所以如果拿到了无序数组的话就调用SortAlgorithms里的算法排序一下即可*/

using namespace std;
using namespace gzx_simple_search;
void test_bsearch()
{
    vector<int> arr{1, 2, 3, 4, 5, 23, 30, 90, 100, 888, 1011, 2333, 6666};
    size_t location;
    bool ans;
    ans = BinarySearch(arr, 23, 0, arr.size() - 1, location);
    cout << boolalpha << ans << "   location is:" << location << endl;
}

int main()
{
    cout << "---------- testing Binary Search ----------" << endl;
    test_bsearch();
    cout << "---------- testing Hash Table ----------" << endl;
    return 0;
}