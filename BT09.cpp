#include <iostream>
#include <cstring>
using namespace std;

//BaiA1
/*char* concat(const char* a, const char* b) {
	char* concatenate = new char[strlen(a) + strlen(b)];
	strcpy(concatenate, a);
	strcat(concatenate, b);
	return concatenate;
}

int main() {
	const char* a = "Hello";
	const char* b = " world!";
	char* c = concat(a, b);
	cout << c;
	delete[] c;
}*/

//BaiA2
/*int main() {
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p;
	*p2 = 100;// lỗi ghi vào vùng bộ nhớ đã trả cho hệ thống 
	cout << *p2;
	delete p2;// xóa vùng bộ nhớ đã trả cho hệ thống 
}*/

//BaiA3
/*int main() {
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a';
	a[9] = '\0';
	cerr << "a: " << "-" << a << "-" << endl;
	cerr << "c: " << "-" << c << "-" << endl;
	delete c; //không thể xóa bộ nhớ động bằng biến khác biến dùng để tạo bộ nhớ động 
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
}*/

//BaiA4
/*int* getAddress() {
	int a = 32;
	int* b = &a;
	return b;
}

int main() {
	int* a = getAddress();
	delete a; // lỗi trigger a breakpoint trên Visual Studio
}*/

//BaiB1
/*int strlength(const char* a) {
	int count = 0;
	for (int i = 0; *(a + i) != NULL ; i++) {
		count++;
	}
	return count;
}

char* reverse(const char* a) {
	int n = strlength(a);
	char* rev = new char[n + 1];
	rev[n] = NULL;
	for (int i = 0; i < n; i++) {
		rev[i] = a[n - 1 - i];
	}
	return rev;
}

char* delete_char(const char* a, const char c) {
	int n = strlength(a);
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == c) {
			count++;
		}
	}
	int deletedlen = n - count + 1;
	char* deleted = new char[deletedlen];
	deleted[deletedlen - 1] = NULL;
	count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != c) {
			deleted[i - count] = a[i];
		}
		else {
			count++;
		}
	}
	return deleted;
}

char* pad_right(const char* a, int n) {
	int padlen = strlength(a) + n + 1;
	char* padded = new char[padlen];
	padded[padlen - 1] = NULL;
	for (int i = 0; i < padlen - 1; i++) {
		if (i < strlength(a)) {
			padded[i] = a[i];
		}
		else {
			padded[i] = ' ';
		}
	}
	return padded;
}

char* pad_left(const char* a, int n) {
	int padlen = strlength(a) + n + 1;
	char* padded = new char[padlen];
	padded[padlen - 1] = NULL;
	for (int i = 0; i < padlen - 1; i++) {
		if (i < strlength(a)) {
			padded[padlen - 2 - i] = a[strlength(a) - 1 - i];
		}
		else {
			padded[padlen - 2 - i] = ' ';
		}
	}
	return padded;
}

char* truncate(const char* a, int n) {
	n++;
	char* truncated = new char[n];
	truncated[n - 1] = NULL;
	for (int i = 0; i < n - 1; i++) {
		truncated[i] = a[i];
	}
	return truncated;
}

char* trim_left(const char* a) {
	int count = 0;
	int n = strlength(a);
	while (a[count] == ' ') {
		count++;
	}
	int trimlen = strlength(a) - count + 1;
	char* trimmed = new char[trimlen];
	trimmed[trimlen - 1] = NULL;
	for (int i = 0; i < trimlen - 1; i++) {
		trimmed[i] = a[i + count];
	}
	return trimmed;
}

char* trim_right(const char* a) {
	int count = 0;
	int n = strlength(a);
	while (a[count] == ' ') {
		count++;
	}
	int trimlen = strlength(a) - count + 1;
	char* trimmed = new char[trimlen];
	trimmed[trimlen - 1] = NULL;
	for (int i = 0; i < trimlen - 1; i++) {
		trimmed[i] = a[i];
	}
	return trimmed;
}

int main() {
	const char* a = "Hello";
	cout << a << endl;
	cout << strlength(a) << endl;
	const char* b = reverse(a);
	cout << b << endl;
	delete[] b;
	b = delete_char(a, 'l');
	cout << b << endl;
	delete[] b;
	b = pad_left(a, 5);
	cout << b;
	delete[] b;
	b = pad_right(a, 5);
	cout << b << endl;
	delete[] b;
	const char* c = "  Hello  ";
	b = trim_left(c);
	cout << b;
	delete[] b;
	b = trim_right(c);
	cout << b;
	delete[] b;
	b = truncate(a, 4);
	cout << b << endl;
	delete[] b;
}*/