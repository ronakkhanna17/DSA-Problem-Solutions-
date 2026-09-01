class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int min_index ;
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            min_index = i ; 
            for(int j = i + 1 ; j < arr.size()  ; j++){
                if(arr[min_index] > arr[j]){
                    min_index = j;
                }
            }
            swap(arr[i],arr[min_index]);
        }
        
    }
};