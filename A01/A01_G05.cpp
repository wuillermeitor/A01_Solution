#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <map>
#include <set>


//VECTOR
void first_it_v(std::vector<int>v1) {
	for (int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl;
}

void second_it_v(std::vector<int>v1) {
	for (std::vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_v(std::vector<int>v1) {
	for (auto e : v1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_v(std::vector<int>v1) {
	for (std::vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//DEQUE
void first_it_d(std::deque<int>d1) {
	for (int i = 0; i < d1.size(); i++) {
		std::cout << d1[i] << " ";
	}
	std::cout << std::endl;
}

void second_it_d(std::deque<int>d1) {
	for (std::deque<int>::iterator it = d1.begin(); it != d1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_d(std::deque<int>d1) {
	for (auto e : d1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_d(std::deque<int>d1) {
	for (std::deque<int>::reverse_iterator it = d1.rbegin(); it != d1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//LIST
void second_it_l(std::list<int>l1) {
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_l(std::list<int>l1) {
	for (auto e : l1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_l(std::list<int>l1) {
	for (std::list<int>::reverse_iterator it = l1.rbegin(); it != l1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

//FORWARD LIST
void second_it_l(std::forward_list<int>fl1) {
	for (std::forward_list<int>::iterator it = fl1.begin(); it != fl1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_l(std::forward_list<int>fl1) {
	for (auto e : fl1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

//MAP
void second_it_l(std::map<int, int>m1) {
	for (auto it = m1.begin(); it != m1.end(); ++it) {
		std::cout << it->first << " => " << it->second << "\n";
	}
	std::cout << std::endl;
}

void fourth_it_l(std::map<int, int>m1) {
	for (auto it = m1.rbegin(); it != m1.rend(); ++it) {
		std::cout << it->first << " => " << it->second << "\n";
	}
	std::cout << std::endl;
}

//SET
void second_it_l(std::set<int>s1) {
	for (std::set<int>::iterator it = s1.begin(); it != s1.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void third_it_l(std::set<int>s1) {
	for (auto e : s1) {
		std::cout << e << " ";
	}
	std::cout << std::endl;
}

void fourth_it_l(std::set<int>s1) {
	for (std::set<int>::reverse_iterator it = s1.rbegin(); it != s1.rend(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


int main() {

	//VECTOR
	std::vector<int>v1;//Constructor sin argumentos
	std::vector<int>v2({ 5,4,6,7,2});//constructor con lista de inicialización
	std::vector<int>v3(v2);//constructor por copia
	std::vector<int>v4(5);//constructor con 5 elementos inicializados en 0
	std::vector<int>v5(5, 6);//copnstructor con 5 elementos inicializados en 6
	std::vector<int>v6(v2.begin(),v2.end());//constructor con interadores copiando v2
	v1.push_back(9);
	v1.push_back(8);
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(6);
	v5.pop_back();
	v5.push_back(3);

	first_it_v(v1);
	second_it_v(v2);
	third_it_v(v5);
	fourth_it_v(v6);

	std::cout << std::endl;

	//DEQUE
	std::deque<int>d1 = { 1, 2, 5, 8, 6 };
	std::deque<int>d2 = d1;
	std::deque<int>d3(d2.begin(), d2.end());
	std::deque<int>d4(d2.rbegin(), d2.rend());

	first_it_d(d1);
	second_it_d(d2);
	third_it_d(d3);
	fourth_it_d(d4);

	std::cout << std::endl;

	//list

	return 0;
}