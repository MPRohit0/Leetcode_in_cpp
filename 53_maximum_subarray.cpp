#include <iostream>
#include <climits>
#include <vector>

// Optimal : Kadane's algorithm
int main(){
    std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = INT_MIN;
    int cur_sum = 0;
    for(int i = 0;vec.size()>i;i++){
        cur_sum += vec[i];
        if (max_sum < cur_sum){
            max_sum = cur_sum;
        }
        if (cur_sum < 0){
            cur_sum = 0;
        }
    } 
    std::cout<<max_sum<<std::endl;

}



// Brute force:
/*
int main(){
    std::vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = INT_MIN;

    for (int i = 0; vec.size()>i;i++){
        int cur_sum = 0;
        for(int j=i;vec.size()>j;j++){
            cur_sum += vec[j];
            if (cur_sum > max_sum){
                max_sum = cur_sum;
            }
        }
    }
    std::cout<<max_sum<<std::endl;
    return 0;
}
*/