#include <iostream>
#include "../02LinkedList/LinkedList/LinkedList.cpp"
using namespace std;


//**************************************
void input(int * set , int length)
{
	for(int i = 0; i < length; i++)
	{
		cin >> set[i];
	}
}

int main()
{
	int set_1[10];
	int set_2[10];
	cout << "输入集合1中的内容" << endl;
	input(set_1 , sizeof(set_1)/sizeof(int));
	cout << "输入集合2中的内容" << endl;
	input(set_2 , sizeof(set_2)/sizeof(int));
	//请完成接下来的代码，在控制台输出两个集合的交集和并集
	int len1 = sizeof(set_1)/sizeof(int);
	int len2 = sizeof(set_2)/sizeof(int);
	LinkedList<int> un;
	LinkedList<int> in;
	for(int i = 0; i < len1; i++){
		int s1 = set_1[i];
		un.insert(un.length(), s1);
		for(int j = 0; j < len2; j++){
			int s2 = set_2[j];
			if(s1 == s2){
				in.insert(in.length(), s1);
			}
		}
	}
	for(int i = 0; i < len2; i++){
		int s2 = set_2[i];
		un.insert(un.length(), s2);
	}
	for(int i = 0; i < in.length(); i++){
		int x;
		in.getData(i, x);
		un.remove(un.search(x), x);
	}
	cout << "Intersection: ";
	in.output();
	cout << "Union: ";
	un.output();
	return 0;
}