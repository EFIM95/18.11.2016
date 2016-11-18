#include<iostream>
using namespace std;
class vector
{
	int i, f, l, count;
	
	int *a;
public:
	vector(int size)
	{
		count = size;
		a = new int[size];
	};
	~vector()
	{
		cout << "deleted the data has been arisen" << endl;
		int *n = new int[count + 1];
		a = n;
		delete[] a;

	}
	void showsize() { cout << "size is:" << count << endl; };
	void get()
	{
		for (i = 0; i < count; i++) { cin >> a[i]; }
	};
	void show()
	{
		for (i = 0; i < count; i++) { cout << a[i] << " "; }
	};
	void remove(int t) {
		for (i = t - 1; i<count - 1; i++)
		{
			a[i] = a[i + 1];
		}
		count -= 1;
	}
	void add(int t, int b) {
		count += 1;
		for (i = count - 1; i>t - 1; i--)
		{
			a[i] = a[i - 1];
		}
		a[t - 1] = b;
	}
	void first()
	{
		cout << a[0];
	}
	void last()
	{
		cout << a[count - 1];
	}
	int& operator[](int&)
	{
		return(a[i]);
	}

	ostream& operator<<(iostream& os, vector&c);
	istream& operator>>(iostream& is, vector&c);
};
int main()
{

	vector v1(5);
	v1.get();
	v1.show();
	v1.showsize();
	v1.remove(3);
	v1.show();
	cout << endl;
	v1.add(3, 3);
	v1.show();
	cout << endl;
	v1.add(6, 3);
	v1.show();
	v1.add(6, 3);
	v1.show();
	v1.add(6, 3);
	v1.show();
	cout << "      " << v1[3] << endl;
	cout << endl;
	v1.last();
	system("pause");
	return(0);

}

