#include <stdio.h>
#include <list>
#include <iostream>

using namespace std;

int main(void) {
	// 初めは1970年の駅名リスト
	list<const char*> eki_list{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
		"Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro",
		"Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku",
		"Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi",
		"Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970年
	printf("1970年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		std::cout << *it_f << endl;
	}

	// 2019年（西日暮里追加）
	printf("\n2019年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		if (std::string(*it_f) == "Nippori") {
			it_f = eki_list.insert(it_f, "Nishi-Nippori"); 
			std::cout << *it_f << endl;
			++it_f; 
		}
		std::cout << *it_f << endl;
	}

	// 2022年（高輪ゲートウェイ追加）
	printf("\n2022年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); ++it_f) {
		if (std::string(*it_f) == "Sinagawa") {
			it_f = eki_list.insert(it_f, "Takanawa Gateway");
			std::cout << *it_f << endl;
			++it_f;
		}
		std::cout << *it_f << endl;
	}

	return 0;
}

