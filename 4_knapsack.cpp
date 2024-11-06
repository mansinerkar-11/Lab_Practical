// //0-1 knapsack using dynamic programming
// //1) memoization
// #include<iostream>
// using namespace std;

// int dp[101][1001];

// int knapsack(int capacity, int weight[], int profit[], int n){
//     if(n==0 ||  capacity==0)
//         return 0;

//     if(dp[n][capacity]!=-1)
//         return dp[n][capacity];

//     if(weight[n-1]<=capacity)
//     {
//         int num1=profit[n-1]+knapsack(capacity-weight[n-1],weight,profit,n-1);
//         int num2=knapsack(capacity,weight,profit,n-1);
//         return dp[n][capacity]=max(num1,num2);
//     }
//     else{
//         return dp[n][capacity]=knapsack(capacity,weight,profit,n-1);
//     }
// } 

// int main()
// {
//     int n, capacity;
//     memset(dp,-1,sizeof(dp));
//         cout<<"Enter total no. of objects:- ";
//         cin >> n;
//         cout<<"Enter the capacity:-";
//         cin>>capacity;

//         int weight[n];
//         int profit[n];
//         for (int i = 0; i < n; i++) {
//             cout<<"Enter profit and its weight:-";
//             cin >> profit[i]>>weight[i];
//         }
        
//         cout << "Max profit:- "<<knapsack(capacity,weight,profit,n)<<endl;
// }





#include<iostream>
using namespace std;
int dp[101][1001];


int knapsack(int capacity, int weight[], int profit[], int n){

    if (capacity == 0 || weight ==0){
        return  0 ;
    }

    if (dp[n][capacity] != -1){
        return dp[n][capacity];
    }

    if (weight[n-1] <= capacity){

        int num1 =
        int num2 = 
        dp[n][capacity] = max(num1, num2);
        return dp[n][capacity]
    }

}

int main(){
    int n, capacity;

    memset(dp,-1,sizeof(dp));
    cout<<"Enter number of objects: ";
    cin>>n;

    cout<<"Enter capacity of sack: ";
    cin>>capacity;

    int weight[n], profit[n];

    for(int i=0;i<n;i++){
        cout<<"Enter profit and weight of object "<<i+1<<" : " ;
        cin>>profit[i]>>weight[i]   ;

        
        }


    cout<<"Max profit is : "<< knapsack(capacity, weight, profit, n)


}