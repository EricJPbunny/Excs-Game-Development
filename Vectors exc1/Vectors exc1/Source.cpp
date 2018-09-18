#include <iostream>
#include "Header.h"


int main() 


{
	vec3 <float> v1, v2;
	v1 = { 3,5,1 };
	v2 = { 3,5,1 };
	
	std::cout << v1.DistanceTo(v2) << std::endl;

	system("pause");
	return 0;
}