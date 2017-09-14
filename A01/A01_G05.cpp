#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <forward_list>
#include <map>
#include <set>

void first_it_v(std::vector<int>v1){
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i];
		if (i < v1.size() - 1) {
			std::cout << ", ";
		}
	}
}

int main() {
	std::vector<int>v1;//Constructor sin argumentos
	std::vector<int>v2({ 5,4,6,7,2 });//constructor con lista de inicialización
	std::vector<int>v3(v2);//constructor por copia
	std::vector<int>v4(5);//constructor con 5 elementos inicializados en 0
	std::vector<int>v5(5, 6);//copnstructor con 5 elementos inicializados en 6
	std::vector<int>v6(v2.begin(),v2.end());//constructor con interadores copiando v2
	v1.push_back(9);
	v1.push_back(8);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(6);

	first_it_v(v1);



	return 0;
}