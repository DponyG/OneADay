// BinaryN.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include <math.h>



std::vector<double> Binary(int n, std::vector<double> temp) {
	int count = 0;
	std::vector<int> v{};
	std::vector<double> temps{};
	for (int i = 0; i < n; i++) {
		if ((n&(1 << i)) != 0) {
			std::cout << 1;
			
		}
		else {
			std::cout << 0;
		}


	}

	for (int i = 0; i < v.size(); i++) {
		//if (v[i] == 1)
		//	//	temps.push_back(temp[i]);
		//	int count = 0;
		std::cout << v[i];
			

	}
	std::cout << std::endl;
	return temps;
}

	

	


	
int main()
{
	std::vector<double> v = { 1.4, 2.6, 1.6, 3 , 6,10};
	std::vector<double> temp{};
	int n = pow(2, v.size());
	std::cout << n;

	for (int i = 0; i < n; i++) {
		auto test = Binary(i, v);
		/*for (int i = 0; i < test.size(); i++) {
			std::cout << test[i];
		}*/
	//	std::cout << std::endl;
	}
}

	
	

	
	


