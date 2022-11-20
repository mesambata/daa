
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	int tot_item,cap;
	int ans=0;
	cout<<"enter total items and capicity: ";
	cin>>tot_item>>cap;
	int arr_item[tot_item];
	int arr_wei[tot_item];
	for(int i=0;i<tot_item;i++){
		cout<<"enter val and wei of"<<i+1<<":-";
		cin>>arr_item[i]>>arr_wei[i];
	}
	vector<pair<double,int> >rat;
	for(int i=0;i<tot_item;i++){
		double tem=arr_item[i]/arr_wei[i];
		rat.push_back(make_pair(tem,i));
	}
	sort(rat.begin(),rat.end(),greater<pair<double,int> >());
	for(int i=0;i<tot_item;i++){
		if(cap>arr_wei[rat[i].second]){
			cap-=arr_wei[rat[i].second];
			ans+=arr_item[rat[i].second];
		}
		else{
			ans+=rat[i].first*cap;
			break;
		}
	}
	cout<<"max profit:-";
	cout<<ans;
	
}


