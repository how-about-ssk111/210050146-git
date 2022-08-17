#include "hashing.hpp"

using namespace std;

int hash_string(string s){
	int h=0, i=0;
	while(s[i] != '\0'){
		h += int(s[i])%47;
		i++;
	}
	return h%47;
}
