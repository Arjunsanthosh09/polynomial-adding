#include<iostream>
#include<conio.h>

using namespace std;

class polynomial
{

  int a[10], b[10], c[10], i, j, k, n, m, x;
public:

  void getdata ()
  {
    cout << "\n enter the highest exponential of the first expression: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
      {
	cout << "\n enter the coefficent  of 1st expression  " << i +
	  1 << " : ";
	cin >> a[i];

      }
    cout << "\n enter the highest exponential of the second expression: ";
    cin >> m;

    for (int i = 0; i <= m; i++)
      {
	cout << "\n enter the coefficent  of 2st expression  " << i +
	  1 << " : ";
	cin >> b[i];

      }
  }

  void add ()
  {
    if (m == n)
      {
	for (int i = 0; i <= n; i++)
	  {
	    c[i] = a[i] + b[i];

	  }
      }
    else if (m > n)
      {
	for (int i = 0; i <= n; i++)
	  {
	    if (i <= n)
	      {
		c[i] = a[i] + b[i];
	      }
	    else
	      {
		c[i] = b[i];
	      }
	  }
      }
    else if (n > m)
      {
	for (int i = 0; i <= n; i++)
	  {
	    if (i <= m)
	      {
		c[i] = a[i] + b[i];
	      }
	    else
	      {
		c[i] = a[i];
	      }
	  }
      }
  }

  void display ()
  {
    for (int i = max (n, m); i >= 0; i--)
      {
	if (i == 0)
	  {
	    cout << c[i];
	  }
	else if (i == 1)
	  {
	    cout << c[i] << "x";
	  }
	else
	  {
	    cout << c[i] << "x^" << i;
	  }

	if (i > 0)
	  {
	    cout << " + ";
	  }
      }
    cout << endl;
  }

};

int
main ()
{
  polynomial obj;
  obj.getdata ();
  obj.add ();
  obj.display ();


}
