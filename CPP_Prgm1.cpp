/**#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    return 0;

}**/

/** 
#include <iostream>

using namespace std;

int main()
{
    int a = 1009098098;
    char c = 'a';
    float f = 12.435f;
    long double d = 135.234342342434234234;

    cout << "a" << " " << "=" << " " << a << endl;
    cout << "c" << " " << "=" << " " << c << endl;
    cout << "f" << " " << "=" << " " << f << endl;
    cout << "d" << " " << "=" << " " << d << endl;

    return 0;
}**/

/**
 #include <iostream>

using namespace std;

int g = 23;
int main()
{
    int g = 56; 

    cout << "g" << "=" << g << endl;
    cout << "g" << "=" << ::g << endl;

    return 0;
}**/

/**
#include <iostream>

using namespace std;

class A
{
    public:
    static int insta;
};

int A::insta = 10;

int main()
{
    cout << "Static value:" << A::insta;
}**/
/**
#include <iostream>

using namespace std;
namespace N
{
    int a = 10;
}

int main()
{
    cout << "Nmaespace a" << "=" << N::a;
}**/
/**
#include <iostream>
#include "CPP_Prgm1.h"
extern int ext;
using namespace std;

int main()
{
    cout << "ex:" << ext;
}**/
/**
#include <iostream>

using namespace std;

int func()
{
    static int cnt = 0;
    cnt++;
    return cnt;
}

int main()
{
    cout << func() << endl;
    cout << func();
}**/

/**
#include <iostream>

using namespace std;

int main()
{
    register int a = 45;

    cout << a << endl;
    return 0;
}**/

/**
#include <iostream>
using namespace std;

class A
{
    public:
    int x;
    mutable int y;

    A():x(4),y(10){}

};

int main()
{
    const A aa;

  //  aa.x = 67;
    aa.y = 89;

    cout << aa.x << endl << aa.y;

    return 0;
}**/

/**
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

thread_local int val =10;

mutex mtx;

int main()
{
    thread th1([](){
        val += 10;
        lock_guard<mutex> lock(mtx);
        cout << "thread1:" << val << endl;
    });

    thread th2([](){
        val += 4;
        lock_guard<mutex> lock(mtx);
        cout << "thread2:" << val << endl;
    });

    thread th3([](){
        val += 67;
        lock_guard<mutex> lock(mtx);
        cout << "thread3:" << val << endl;

    });

    th1.join();
    th2.join();
    th3.join();

    return 0;
} **/
/**
#include <iostream>
using namespace std;

static int i = 23;

void func()
{
    i++;
    cout << "i:" << i << endl;
}

int main()
{
    for(int j=0; j <= 10; j++)
    {
        func();
    }

    return 0;
} **/

/**
#include <iostream>
using namespace std;

class A
{
public:
    static void printmsg()
    { 
        cout << "Msg from class" << endl; 
    }
};

int main()
{
    A::printmsg();

    return 0;
}**/
/**
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    cout << "Size of int: " << sizeof(int) << INT_MIN << " " << "to" << " " << INT_MAX << endl;
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of char: " << sizeof(char) << CHAR_MIN << " " << "to" << " " << CHAR_MAX << endl;
    cout << "size fo long: " << sizeof(long) << LONG_MIN << " " << "to" << " " << LONG_MAX << endl;
    cout << "size of double: " << sizeof(double) << endl;

    cout << "size of short: " << sizeof(short) << SHRT_MIN << " " << "to" << " " << SHRT_MAX << endl;
    cout << "size of unsigned short: " << sizeof(unsigned short) << endl;

    cout << "size of long long: " << sizeof(long long) << endl;
    cout << "size of long double: " << sizeof(long double) << endl;

    cout << "size of long int: " << sizeof(long int) << endl;
    cout << "size of long long int: " << sizeof(long long int) << endl;

    cout << "size of wchar_t: " << sizeof(wchar_t) << endl;



    return 0;
}**/
/**
#include <iostream>
using namespace std;

int max(int x, int y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main()
{
    cout << max(3,4) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}**/

/**
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &ref = x;

    cout << "x:" << x << endl;
    cout << "ref:" << ref << endl;

    x = 34;
    cout << "ref:" << ref << endl;

    ref = 90;
    cout << "x:" << x << endl;

    return 0;
}**/

/**
#include <iostream>
using namespace std;

class A
{
    public:
       string geek;
       void print()
       {
        cout << "geek:" << geek << endl;
       }
};

int main()
{
    A aa;
    aa.geek = "I am Legend";
    aa.print();

    return 0;
}**/
/**
#include <iostream>
using namespace std;

struct point{
    int x, y;
};

int main()
{
    struct point p;
    p.x = 10;
    p.y = 20;

    cout << p.x << endl << p.y << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

union str
{
    int x, y;
};

int main()
{
    union str s;

    s.x = 12;
    s.y = 45;

    cout << s.x << s.y << endl;

    return 0;

}**/
/**
#include <iostream>
using namespace std;

enum week {mon = 1, tue, wed, thu, fri, sat, sun};

int main()
{
    enum week day;

    day = wed;

    cout << day;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

typedef long double durga;

int main()
{
    durga d = 78;

    cout << "d:" << d << endl;
    cout << "Sizeof durga:" << sizeof(durga) << endl;


    return 0;
}**/
/**
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "Int min value:" << numeric_limits<int>::min() << endl;
    cout << "Int max value:" << numeric_limits<int>::max() << endl;

    cout << "Char min value:" << numeric_limits<char>::min() << endl;
    cout << "Char max value:" << numeric_limits<char>::max() << endl;

    return 0;
}**/
/**
#include <iostream>

using namespace std;

int main()
{
    double x = 67.43345;
    char d = 'a';
    const int i = 56;
    const int* k = &i;
    int u = 98;
    int* y = &u;

    cout << static_cast<int>(x) << endl;
    cout << static_cast<int>(d) << endl;
    int *j = const_cast<int*>(k);
    cout << "k:" << *k << endl;
    *j = 78;
    cout << "j:" << *j << endl;

    char *z = reinterpret_cast<char*>(y);
    cout << "z:" << *z << endl;


    return 0;
}**/
/**
#include <iostream>

using namespace std;

int main()
{
    int a = 8, b = 6;
    cout << "Addition: " << a+b << endl;
    cout << "Subtraction: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << (float)a/(float)b << endl;
    cout << "Modulus: " << a%b << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 4;
    cout << "Greater than: " << (a > b) << endl;
    cout << "Greater than or equal to: " << (a >= b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Less than or equal to: " << (a <= b) << endl;
    cout << "Not equal to: " << (a != b) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 7;
    cout << "Logical AND: " << (a && b) << endl;
    cout << "Logical OR: " << (a || b) << endl;
    cout << "Logical NOT: " << (!b) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 3;
    cout << "Bitwise AND: " << (a & b) << endl;
    cout << "Bitwise OR: " << (a | b) << endl;
    cout << "Bitwise XOR: " << (a ^ b) << endl;
    cout << "Bitwise right shift: " << (b >> 1) << endl;
    cout << "Bitwise left shift: " << (b << 1) << endl;
    cout << "Bitwise One Complement: " << ~(a) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 2;
    cout << "Add Assignment: " << (a += b) << endl;
    cout << "Subtraction Assignment: " << (a -= b) << endl;
    cout << "Multiplication Assignment: " << (a *= b) << endl;
    cout << "Division Assignment: " << (a /= b) << endl;
    cout << "Modulus Assignment: " << (a %= b) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 5;
    cout << "Ternary Operator: " << (a < b? 1 : 0) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
int main()
{
    char str[] = "Durga ";
    cout << str << "Prasad ";

    cin >> str;
    cout << str;

    cerr << "Error occured" << endl;

    clog << "Error still occured " << endl;

    return 0;
}**/

/**
#include <iostream>
#include <iomanip>
#include <istream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    istringstream str ("  Programming");
    string line;
    getline(str >> std::ws, line);
    cout << line << endl;
    int a = 10;
    cout << setw(4) << a << endl;
    cout << setfill('*') << setw(5) << a<< endl;
    float f = 3.45789;
    cout << fixed << setprecision(3) << f << endl;
    int num = 3;
    cout << setbase(2) << num << endl;


    return 0;
}**/

/**
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    if(a > 4)
    {
        cout << "a is greater than 4" << endl; 
    }
    else
    {
        cout << "a is less than 4" << endl;

    }

    int x = 45, y=5;
    if(x > 5)
    {
        if(y < 10)
        {
            cout << "X is greater than 5 and Y is less than 10" << endl;
        }
        else
        {
            cout << "X is greater than 5 and Y is greater than 10" << endl;
        }
    }
    else
    {
        if(y > 2)
        {
            cout << "X is less than 5 and Y is greater than 2" << endl;
        }
        else
        {
            cout << "X is less than 5 and Y is less than 2" << endl;
        }
    }

    if(x == 5)
    {
        cout << "X is equal to 5" << endl;
    }
    else if(x == 45)
    {
        cout << "X is equal to 45" << endl;
    }

    switch(x)
    {
        case 5: cout << "X is 5" << endl;
        break;
        case 45: cout << "X is 45" << endl;
        break;
        default: cout << "X is not 5" << endl;
    }

    return 0;
}**/
/** 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(int i=0; i<=10; i++)
    {
        cout << setw(5) << i ;
    }
    cout << endl;
    int j = 10;
    while(j >= 0)
    {
        cout << setw(5) << j ;
        j--;
    }
    cout << endl;
    int k = 0;
    do{

        cout << "10 x "<< k << "=" << k*10 << endl;
        k++;

    }while(k<=10);
    cout << endl;
    int arr[5] = {1,2,3,4,5};
    for(auto i : arr)
    {
        cout << setw(5) << i;
    }

    return 0;
} **/
/**
#include <iostream>
using namespace std;
int max(int x, int y)
{
    if( x > y )
    {
        return x;
    }
    else
    return y;
}
int main()
{
    int a = 10, b = 15;
    cout << "Max value: " << max(a,b) << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout << "After Swap:" << a << b << endl;
}

void swapp(int *ap, int *bp)
{
    *ap = 40;
    *bp = 50;
}

void swapr(int& ar, int& br)
{
    ar = 140;
    br = 150;
}

int main()
{
    int x = 1, y = 2;
    cout << "before swap: " << x << y << endl;
    swap(x,y);
    cout << "After swap: " << x << y << endl;
    swapp(&x,&y);
    cout << "After swapp: " << x << y << endl;
    swapr(x,y);
    cout << "After swapr: " << x << y << endl;

    return 0;
} **/
/**
#include <iostream>
using namespace std;

void recursion(int n)
{
    if(n == 0)
    {
        return;
    }
    else
    {
        cout << "N: " << n << endl;
    }
    
    recursion(n-1);    
}

int main()
{
    int a = 10;
    recursion(a);

    return 0;
}**/
/**
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "Addition: " << a+b << endl;
}

int sub(int a, int b)
{
    int c = a - b;
    return c;
}

int mul()
{
    int a = 12, b = 6;
    return a*b;  
}

void div()
{
    int a = 12, b = 6;
    cout << "Division: " << a/b << endl;
}

int main()
{
    int x = 10, y = 5;
    add(x,y);
    cout << "Subtraction: " << sub(x,y) << endl;
    cout << "Multiplication: " << mul() << endl;
    div();

    return 0;
}**/
/**
#include <iostream>
using namespace std;
void add(int a, int b = 10)
{
    cout << "Addition: " << (a+b) << endl; 
}
int main()
{
    int x = 10, y = 20;
    add(x, y);
    add(x);

    return 0;
}**/
/**
#include <iostream>
using namespace std;
inline int cube(int s){return s*s*s; }

int main()
{
    cout << "Cube:" << cube(2) << endl;
    return 0;
}**/
/**

#include <iostream>
using namespace std;

int main()
{
   auto greet = [](){
    cout << "Hellow World" << endl;
   };

   greet();

   auto add = [](int a, int b){
    cout << "Add: " << a+b << endl;
   };

   add(5,6);

   auto sub = [](int a, int b) -> int{
    return a-b;
   };

   cout << "Sub: " << sub(15,4) << endl;

   int i = 12;
   auto display = [i](){
    cout << "display: " << i << endl;
   };
   display();

   int x = 23, y = 45, z = 34;
   auto sum1 = [=]() -> int {
    return x+y+z;
   };

   cout << "Sum1: " << sum1() << endl;

   int x1 = 34, y1 = 45, z1 = 67;
   auto sum2 = [&]() -> int{
    x1 = 22;
    y1 = 33;
    z1 = 44;
    return x1+y1+z1;
   };

   cout << "Sum2: " << sum2() << endl;

   int a1 = 1, b1 = 2;

   auto increment = [a1, b1]() mutable {
    a1++;
    b1++;
    cout << "a:" << a1 << endl << "b:" << b1 << endl;
   };

   increment();

    return 0;
} **/
/**
#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int *ptr = &a;
   // ptr = &a;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "ptr: " << ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    int arr[5] = {1,2,3,4,5};
    int *ptr1= arr;

    for(int i=0; i<5; i++)
    {
        cout << "Array: " << ptr1+i << endl;
        cout << "Array: " << *ptr1+i << endl;
       // ptr1++;
    }

    return 0;
} **/
/**
#include <iostream>
using namespace std;
void vptr(void* data, int size)
{
    if(size == 4)
    {
        int* ptr1 = (int*)data;
        cout << "Integer: " << *ptr1 << endl;
    }
    else
    {
        char* ptr1 = (char*)data;
        cout << "Character: " << *ptr1 << endl;
    }

}
int main()
{
    int i = 10;
    char c = 'h';

    vptr(&i, sizeof(i));
    vptr(&c, sizeof(c));

    return 0;
}**/

/**
#include <iostream>
using namespace std;

void func(int i)
{
    cout << "i: " << i << endl;
}

void func(char* s)
{
    cout << "s: " << s << endl;
}

int main()
{
    char str = '0';
    int *str1 = nullptr;

    cout << str << str1 << endl;

    nullptr_t np1, np2;

    if(np1 == np2)
    {
        cout << "Np1 is equal to np2" << np1 << " " << np2 << endl;
    }
    else
    {
        cout << "Np1 is not equal to np2" << np1 << " " << np2 << endl;
    }
    int *ptr1;
    ptr1 = NULL;
    cout << "ptr1: " << ptr1 << endl;

    func(nullptr);


    return 0;
} **/
/**
#include <iostream>
using namespace std;
int main()
{
    int a  = 10;
    int& b = a;

    cout << "a: " << a << " " << "b: " << b << endl;

    b = 20;
    cout << "a: " << a << " " << "b: " << b << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
// void func(int arr[10])
void func(int (&arr)[10])
//void func(int (*arr)[10])
{
    cout << "Size in arr: " << sizeof(arr) << endl;
}
int main()
{
    int a[10];
    cout << "Size of a: " << sizeof(a) << endl;
     func(a);
    //func(&a);

    return 0;
} **/
/**
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void printstring(string s)
{
    cout << "String Function: " << s << endl;
    cout << "Size of String function: " << sizeof(s) << endl;
}

int main()
{
    char s1[] = "how are you?";
    char *s2 = "HOW ARE YOU?";
    string str1 = "stringyiyiuiuyiuyiuyijhkjhkjhkjhksjdfkjsdhfksjhdfkjshfkdjshdkfjmzxcmzcbxmznbxmcn";
    string str2("STRING");
    string str3(5,'s');
    string str4, str5, temp;
    stringstream sstr("String Stream");
    cout << "s1:" << s1 << endl;
    cout << "s2:" << s2 << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "Enter the string: " ;
    cin >> str4;
    cout << str4 << endl;
    cout << "Enter the another string: ";
    getline(cin,str5);
    cout << str5 << endl;

    while(sstr >> temp)
    {
        cout << temp << endl;
    }

    printstring(str1);
    cout << "Size of string: " << sizeof(str1) << endl;

    char *p = &str1[0];

    while(*p != '\0')
    {
        cout << *p << endl;
        p++;
    }

    cout << "Length of the string: " << str1.length() << endl;
    cout << "Capacity of the string: " << str1.capacity() << endl;
    cout << "Size of the string: " << str1.size() << endl;
    str1.resize(10);
    cout << "Length of the string: " << str1.length() << endl;
    cout << "Capacity of the string: " << str1.capacity() << endl;
    cout << "Size of the string: " << str1.size() << endl;
    
    return 0;
} **/
/**
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string color[4] = {"Blue","Orange","White","Red"};

    for(int i=0; i<4; i++)
    {
        cout << "Colour: " << color[i] << endl;
    }

    return 0;
}**/
/**
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1("Durga");
    string s2("Prasad");
    char str1[] = "durga";
    char str2[] = "prasad";

    s1 = s1 + s2;
    cout << "Concantenation1: " << s1 << endl;
    s1.append(s2);
    cout << "Append: " << s1 << endl;
  //  cout << "Concantenation2: " << strcat(str1, str2) << endl;
    cout << "Substring: " << s1.substr(5,6) << endl;

    return 0;
}**/
/**
#include <iostream>
#include <string>
using namespace std;
struct geek
{
    int i;
    char c;
    float f;
    string s;
};
int main()
{
    struct geek g;

    g.i = 34;
    g.c = 'a';
    g.f = 45.345;
    g.s = "hello";

    cout << g.i << endl << g.c << endl << g.f << endl << g.s << endl; 


    return 0;
}**/
/**
#include <iostream>
#include <string>
using namespace std;

union unic
{
    int i;
    char c;
    float f;
   // string str;
};

int main()
{
    union unic u;
    u.i = 56;
    cout << u.i << endl;
    u.c = 'd';
    cout <<  u.c << endl;
    u.f = 456.234;
    cout << u.f << endl;
//    u.str = "ijk";

  //  cout << u.i u.str << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;
enum color {Blue, Yellow, Red, White};

int main()
{
    enum color c = Yellow;
    cout << c << endl;

    return 0;
}**/
/**
#include <iostream>
#include <iomanip>
using namespace std;
struct inte
{
    int x,y;

};
void func(struct inte i)
{
    i.x = 90;
    i.y = 91;
    cout << i.x << setw(3) << i.y << endl;

}
int main()
{
    struct inte i1 = {12, 24};
    cout << i1.x << setw(3) << i1.y << endl;

    struct inte arr[10];
    arr[0].x = 34;
    arr[0].y = 45;
    cout << arr[0].x << setw(3) << arr[0].y << endl;

    struct inte *ptr;
    ptr = &i1;

    cout << ptr->x << setw(3) << ptr->y << endl;

    func(i1);


    return 0;
} **/
/**
#include <iostream>
#include <iomanip>
using namespace std;
struct node
{
    int data1;
    int data2;
    struct node *link;
};

int main()
{
    struct node n1, n2, n3;
    n1.link = NULL;
    n1.data1 = 10;
    n1.data2 = 20;

    n2.link = NULL;
    n2.data1 = 30;
    n2.data2 = 40;

    n3.link = NULL;
    n3.data1 = 50;
    n3.data2 = 60;

    n1.link = &n2;
    n2.link = &n3;

    cout << n1.data1 << setw(3) << n1.data2 << endl;
    cout << n1.link->data1 << setw(3) << n1.link->data2 << endl;
    cout << n2.link->data1 << setw(3) << n2.link->data2 << endl;


    return 0;
}**/
/**
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p, *q, *r;

    p = (int*)malloc(5*sizeof(int));

    if(p == NULL)
    {
        cout << "Memory not allocated" << endl;
    }
    else
    {
        cout << "Memory Allocated" << endl;
    }

    for(int i = 0; i < 5; i++)
    {
        p[i] = i*10;

        cout << p[i] << endl;
    }

    q = (int*)calloc(5,sizeof(int));

    if(q == NULL)
    {
        cout << "Memory is not allocated " << endl;
    }
    else
    {
        cout << "Memory is allocated " << endl;
    }

    for(int j=0; j < 5; j++)
    {
        q[j] = j*100;

        cout << q[j] << endl;
    }

    q = (int*)realloc(q,5*sizeof(int));

    if(q == NULL)
    {
        cout << "Memory is not allocated" << endl;
    }
    else
    {
        cout << "Memory is allocated" << endl;
    }

    for(int k=0; k<5; k++)
    {
        q[k] = k*1000;

        cout << q[k] << endl;
    }

    free(p);
    delete[] q;
  //  free(r);

    return 0;
}
**/
/**
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];

    if(p == NULL)
    {
        cout << "Memory not allocated" << endl;
    }
    else
    {
        cout << "Memory allocated" << endl; 
    }

  //  *p = 10;
    
    for(int i=0; i < 5; i++)
    {
        p[i] = i*10;
        cout << p[i] << endl;
    }
  //  delete[] p;
    free (p);
    

    int *q = new int;
    *q = 10;
    cout << *q << endl;
    free (q);
   
    return 0;
}
**/
/**
#include <iostream>
using namespace std;

class A
{
    public: 
        A()
        {
            cout << "Constructor Called" << endl;
        }
        ~A()
        {
            cout << "Destructor Called" << endl;
        }
};
int main()
{
    A* a = new A;
    cout << "Object called" << endl;
    delete (a);

    A* b = (A*)malloc(sizeof(A));
    cout << "Object called" << endl;
    free (b);

}**/
/**
#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "Constructor called" << endl;
    }

    ~A()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    A* a = new A;
    delete a;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class person
{
    public:
    int x;

    person()
    {
        cout << "Default COnstructor" << endl;
    }

    person(int y):x(y)
    {
        //x = y;
        cout << "Parametrized Constructor:" << x << endl;
    }
};

int main()
{
   // person p1;
  //  person p2(450);

  return 0;
}**/
/**
#include <iostream>
#include <string>
using namespace std;

class animal
{
    private:
    int cat;
    public:
    animal();
    void display();
}ani;

animal::animal()
{
    cout << "It's Animal" << endl;
}

void animal::display()
{
    cout << "It's Animal function" << endl;
}

int main()
{
    ani.display();

    return 0;
}**/
/**
#include <iostream>
#include <string>
using namespace std;

class person
{
    private:
    int id;
    public:
    person(int x):id(x)
    {}
    int cal()
    {
        return id*id; 
    }
   
};

int main()
{
    person p1(4);
    cout << p1.cal() << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class person
{
    protected:
    int idd;
};

class child: public person
{
    public:
    void set(int y)
    {
        idd = y;
    }

    void display()
    {
        cout << idd << endl;
    }

};

int main()
{
    child c;
    c.set(5);
    c.display();

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class gfg
{
    private:
    int private_var;
    public:
    int public_var;
    gfg()
    {
 //      private_var = 10;
  //      public_var = 20;
    }

    friend class fgg;
};

class fgg
{
    public:
    void display(gfg &t)
    {
        t.private_var = 45;
        t.public_var = 55;
        cout << t.private_var << endl << t.public_var << endl;
    }

};

int main()
{
    gfg g;
    fgg f;

    f.display(g);
    return 0;
} **/
/**
#include <iostream>
#include <string>
using namespace std;
class base;
class anotherclass
{
    public:
    void memberfunction(base &obj);

};

class base
{
    private:
    string pri_var;

    protected:
    string pro_var;

    public:
    base()
    {
        pri_var = "hi";
        pro_var = "ih";
    }

    friend void anotherclass::memberfunction(base&);

};

void anotherclass::memberfunction(base &obj)
{
    cout << obj.pri_var << endl << obj.pro_var << endl;

}

int main()
{
    base obj1;
    anotherclass obj2;
    obj2.memberfunction(obj1);

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base1
{
    public:
    int x;

    base1(){x=20;};

    base1(base1 &t)
    {
      //  t.x = 30;
        x = t.x;
       
        cout << "Calling copy contructor" << endl;
    }
};

int main()
{
    base1 b1;
  //  b1.x = 10;
    cout << "Default constructor: " << b1.x << endl;

    base1 b2(b1);
    cout << "Copy constructor: " << b2.x << endl;


    return 0;
}**/

/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Default constructor" << endl;
    }

    base(const base &b)
    {
        cout << "Calling Copy Constructor" << endl;
    }

};

base func1() // RVO
{
    return base();
}
base func2() // NRVO
{
    base b3;
    return b3;
}

int main()
{

    base b1 = func1();
    base b2 = func2();

    return 0;
} **/
/**
#include <iostream>
using namespace std;
static int count = 0;
class base
{
    public:
    base()
    {
        count++;
        cout << "Constructor called" << count << endl;
    }
    
    ~base()
    {
       
        cout << "Destructor called" << count <<endl;
        count--;
    }
};

int main()
{
    base b1, b2, b3, b4;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Constructor called" << endl;
    }

    void fun()
    {
        delete this;
    }

    private:
    ~base()
    {
        cout << "Destructor called" << endl;
    }

};

int main()
{

   // base *b = new base;
   base *b = (base*)malloc(sizeof(base));
    b->fun();
    //delete b;
    
    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    int length;
    int *breadth;
    int height;

    base()
    {
        breadth = new int;
    }

    void setvalues(int len, int bred, int hei)
    {
        length = len;
        //int bb = bred;
        //breadth = &bb;
        *breadth = bred;
        height = hei;
    }

    void show()
    {
        cout << "Length:" << length << endl;
        cout << "Breadth:" << *breadth << endl;
        cout << "Height:" << height << endl;
    }

    base(base &b)
    {
        length = b.length;
        breadth = new int;
        *breadth = *(b.breadth);
        height = b.height;
    }

    ~base()
    {
        delete breadth;
    }

};

int main()
{

    base b1;
    b1.setvalues(11,12,13);
    b1.show();

   // base b2 = b1;
    base b2(b1);
 //  base b2;
 //  b2 = b1;
    b2.setvalues(14,15,16);
    b2.show();


    return 0;
} **/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    static int x;
    static inline int y = 15; //C++17

};

int base::x = 13;

int main()
{

    base b1;
   // b1.x = 12;
   // cout << "static:" << b1.x << endl;
    cout << base::x << endl;
    cout << base::y << endl;
    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    private:
   static inline int x = 15;
   static inline int y = 16;
   static inline int z = 18;
    
    public:
   
    
    static void func()
    {
        cout << "x:" << x << endl;
        cout << "y:" << y << endl;
        cout << "z:" << z << endl;
    }
};

//int base::x = 12;
//int base::y = 13;
//int base::z = 14;

int main()
{
    base::func();
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    int x;

    base(int x)
    {
        this->x  = x;
    }
    void print()
    {
        cout << "x:" << this->x << endl;
    }
};

int main()
{
    base b(10);
    b.print();

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    int x,y;
    base()
    {
        cout << "Constructor called" << endl;
    }
    base &setx(int x)
    {
        this->x = x;
        return *this;
    }

    base &sety(int y)
    {
        this->y = y;
        return *this;
    }

    void print()
    {
        cout << this->x << endl << this->y << endl;
    }
};

int main()
{
    base b;
    b.setx(10);
    b.sety(20);

    b.print();

    return 0;
}**/
/**
#include <iostream>
using namespace std;
int a = 10;
void func()
{
    static int z;
    class test
    {

        public:
        int x;
        
        test(int y)
        {
            x = y;
            z = y;
        }
        static void func2()
        {
            cout << "static function" << endl;
        }

        void print()
        {
            cout << "x: " << x << "z:" << z << "a:" << a << endl;
        }
    };

    test t(10);
    test::func2();
    t.print();
}

int main()
{
    func();
}**/
/**
#include <iostream>
using namespace std;

class base1
{
    public:
    int x;

    class base2
    {

        public:
        void getdata(int y)
        {
            x = y;
        }

        void putdata()
        {
            cout << "x: " << x << endl; 
        }


    };

};

int main()
{
    base1::base2 b1;
   
    b1.func(b1);

    return 0;
}**/
/**
#include <iostream>
using namespace std;

enum color{
    a = 70,
    b = 71,
    c = 72
};

int main()
{
    enum color c;
    c = a;
    cout << "c:" << c << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

int main()
{
    enum class color{red, green, purple, yellow};
    enum class people {ram, ramesh, rocky};

    int green = 10;

    color x = color::red;
    if(x == color::red)
    {
        cout << "Yes it's red" << endl;
    }

    people p = people::ram;
    if(p == people::ram)
    {
        cout << "it's ram" << endl;
    }

    cout << "green:" << green << endl;

    return 0;
}**/
/**
#include <iostream>
#include <string>
using namespace std;

struct test
{
    int x;
    string str;

    void getdata1()
    {
        x = 20;
        str = "pdr";
    }

    void print1()
    {
        cout << x << endl << str << endl;
    }

    void getdata2(int a, string b)
    {
        x = a;
        str = b;
    }

  
};

int main()
{
    test t;
    t.x = 100;
    t.str = "RDP";

    cout << t.x << endl << t.str << endl;

    t.getdata1();
    t.print1();

    t.getdata2(200,"sis");
    t.print1();

    return 0;
}**/
/**
#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << "a+b: " << a+b << endl; 
}

void add1(int a=7, int b = 9)
{
    cout << "a+b: " << a+b << endl;
  
}

void add(char const *c)
{
    cout << "Char: " << c << endl;
}

void add(char *c)
{
    cout << "Char: " << c << endl;
}

void add(int a)
{
    cout << "a: " << a << endl; 
}

void add(char a)
{
    cout << "const a: " << a << endl; 
}
int main()
{

    add(2,3);
    add1();
    add("RDP");
    add("PDR");
    add(4);
    add(3);
  

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imag;

    public:
    complex ()
    {
        real = 0;
        imag = 0;
    }
    complex (int a, int b)
    {
        real = a;
        imag = b;
    }
    complex operator +(complex const &c2)
    {
      //  complex res;
       // res.real = real + c2.real;
        //res.imag = imag + c2.imag;

        //return res;
        return complex(real + c2.real, imag + c2.imag);
    }

    void print()
    {
        cout << real << endl << imag << endl;
    }
};

int main()
{
    complex c1(100,200), c2(300,400);
    complex c3 = c1 + c2;

    
    c3.print();

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class test
{

    int count;
    public:
    test(int i):count(i){}

    test operator++()
    {
        cout << "Pre Increment" << endl;
        return ++count;
    }

    test operator++(int)
    {
        cout << "Post Increment" << endl;
        return count++;
    }

    void display()
    {
        cout << "Count:" << count << endl;
    }
};

int main()
{
    test t(5);

    test pre = ++t;
    pre.display();

    test post = t++;
    post.display();



    return 0;
}**/
/** 
#include <iostream>
using namespace std;

class base
{
    private:
    int x;
    protected:
    int y;
    public:
    int z;

    base()
    {
        cout << "Base Constructor called" << endl;
    }

    int getter(){return x;}
    void setter(int val){x = val;}
    
};

class derived1 : public base
{
    public:
    derived1()
    {
        cout << "Dervied 1 Constructor called" << endl;
    }

    void display1(int val)
    {
      //  x = val;
        y = val;
        z = val;
     //   cout << "x: " << base::x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
        setter(val);
        cout << "x:" << getter() << endl;
    }

};

class derived2 : protected base
{
    public:
    derived2()
    {
        cout << "Derived2 Constructor called" << endl;
    }

    void display2(int val)
    {
      //  x = val;
        y = val;
        z = val;
      //  cout << "x: " << base::x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }
};

class derived3 : private base
{
    public:
    derived3()
    {
        cout << "Derived3 Constructor called" << endl;
    }

    void display3(int val)
    {
      //  x = val;
        y = val;
        z = val;
     //   cout << "x: " << base::x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }

};

int main()
{
    derived1 d1;
    d1.display1(5);
    derived2 d2;
    d2.display2(6);
    derived3 d3;
    d3.display3(7);
    //cout << d1.y << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Base Constructor called" << endl;
    }
};

class derived : public base
{
    public:
    derived()
    {
        cout << "Derived COnstructor called" << endl;
    }
};

int main()
{
    derived d;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base1
{
    public:
    base1()
    {
        cout << "Base1 Constructor called" << endl;
    }
};

class base2
{
    public:
    base2()
    {
        cout << "Base2 Constructor called" << endl;
    }
};

class base3
{
    public:
    base3()
    {
        cout << "Base3 Constructor called" << endl;
    }
};

class derived : public base1, virtual base2, virtual base3
{
    public:
    derived():base2(),base3(),base1()
    {
        cout << "Derived Constructor called" << endl;
    }

};

int main()
{
    derived d;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Base Constructor called" << endl;
    }
};

class derived1 : public base
{
    public:
    derived1()
    {
        cout << "Derived1 Constructor called" << endl;
    }
};

class derived2 : public derived1
{
    public:
    derived2()
    {
        cout << "Derived2 COnstructor called" << endl;
    }

};

int main()
{
    derived2 d2;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Base COnstructor called" << endl;
    }
};

class derived1 : public base
{
    public:
    derived1()
    {
        cout << "Derived1 Constructor called" << endl;

    }
};

class derived2 : public base
{
    public:
    derived2()
    {
        cout << "Derived2 Constructor called" << endl;
    }
};

int main()
{
    derived1 d1;
    derived2 d2;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    private:
    int x = 1;
    protected:
    int y = 2;
    public:
    int z = 3;
    int getter(){return x;}

};

class derived1 : public base
{
    public:
    int display1(){ return y;}
    int display2() {return getter();}

};

class derived2 : protected base
{
    public:
    int display1(){ return y;}
    int display2() {return getter();}
    int display3(){ return base::z;}

};

class derived3 : private base
{
    public:
    int display1(){ return y;}
    int display2() {return getter();}
    int display3(){ return base::z;}

};

int main()
{
    derived1 d1;

    cout << "d1.x: " << d1.display2() << endl;
    cout << "d1.y: " << d1.display1()<< endl;
    cout << "d1.z: " << d1.z << endl;

    derived2 d2;

    cout << "d2.x: " << d2.display2() << endl;
    cout << "d2.y: " << d2.display1()<< endl;
    cout << "d2.z: " << d2.display3()<< endl;

    derived3 d3;

    cout << "d3.x: " << d3.display2() << endl;
    cout << "d3.y: " << d3.display1()<< endl;
    cout << "d3.z: " << d3.display3()<< endl;


    return 0;
}**/

/**
#include <iostream>          
using namespace std;

class superbase
{
    public:
    int x;
    superbase()
    {
        cout << "Superbase Constructor called" << endl;
    }
};

class base1 : virtual public superbase
{
    public:
    base1()
    {
        cout << "Base1 Constructor called" << endl;
    }
};

class base2 : virtual public superbase
{
    public:
    base2()
    {
        cout << "Base2 Constructor called" << endl;
    }
};

class derived: public base1, public base2
{
    public:
    derived()
    {
        cout << "Derived COnstructor called" << endl;
    }

};

int main()
{
    derived d;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    virtual void func(int x = 0)
    {
        cout << "Base function called" << x << endl;
    }
};

class derived1 : public base
{
    public:
    void func(int x = 10)
    {
        cout << "Derived1 function called" << x << endl;
    }

};

class derived2 : public derived1
{
    public:
    void func(int x = 20)
    {
        cout << "Derived2 function called" << x << endl;
    }
};

int main()
{
    
    base *b;
    derived1 d;
    derived1 *d1;
    derived2 d2;

    d1 = &d2;
    d1->func();

    b = &d;
    b->func();

    return 0;
} **/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout << "Base Constructor called" << endl;
    }

    virtual ~base()
    {
        cout << "Base Destructor called" << endl;
    }
};

class derived : public base
{
    public:
    derived()
    {
        cout << "Derived Constructor called" << endl;
    }

    ~derived()
    {
        cout << "Derived Destructor called" << endl;
    }

};

int main()
{
    derived *d = new derived;
    base *b = d;

    delete b;

    return 0;
} **/
/**
#include <iostream>
using namespace std;

class base
{
    public:

    virtual void show() = 0;

    base()
    {
        cout << "Base Constructor called" << endl;
    }
};

class derived : public base
{
    public:
    void show()
    {
        cout << "Derived function" << endl;
    }
    
};

int main()
{
    base *b = new derived();
    b->show();
   

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    virtual ~base() = 0;
   
};
base::~base()
{
    cout << "Base Destructor called" << endl;
}

class derived : public base
{
    public:
    ~derived()
    {
        cout << "Derived Destructor called" << endl;
    }

};

int main()
{
    base *b = new derived();

    delete b;

    return 0;
}**/

/**
#include <iostream>
using namespace std;

class base
{
    public:
    virtual void func()
    {

    }
};

class derived : public base
{

};

int main()
{

    base *b = new derived;
    derived *d = dynamic_cast<derived*>(b);

    if(d != NULL)
    cout << "Works" << endl;
    else
    cout << "cannot cast b* to d*" << endl;

    return 0;
}**/
/**
#include <iostream>
using namespace std;

class base
{
    public:
    base(){}
    virtual ~base(){}
    void show(){print();}
    private:
    virtual void print()
    {
        cout << "Base function called" << endl;
    }
};

class derived : public base
{
    public:
    derived(){}
    virtual ~derived(){}

    private:
    virtual void print()
    {
        cout << "Derived function called" << endl;
    }

};

int main()
{
    derived d;
    d.show();
    
    return 0;
}**/

#include <iostream>
//#include <string>
//using namespace std;
/**class product
{
    public:
    virtual ~product();
    virtual string operation() const  = 0;
};

class concreteproduct1 : public product
{
    public:
    string operation() const override
    {
        return "Result of the concreteproduct1";
    }

};

class concreteproduct2 : public product
{
    public:
    string operation() const override
    {
        return "Result of the concreteproduct2";
    };
};

class creator
{
    public:
    virtual ~creator();
    virtual product* factorymethod() const = 0;

    string someopertions() const
    {
        product* product = this->factorymethod();
        string result = "Creator some creator class just worked with" + product->operation();
        delete product;
        return result;

    }

};

class concretecreator1 : public creator
{
    public:
    product* factorymethod() const override
    {
        return new concreteproduct1();
    }

};

class concretecreator2 : public creator
{
    public:
    product* factorymethod() const override
    {
        return new concreteproduct2();
    }

};

void clientcode(creator& creator1)
{
    cout << "Clientcode:" << creator1.someopertions() << endl;
}

int main()
{
  
    creator* creator1 = new concretecreator1();
    clientcode(*creator1);
    delete creator1;
    

    return 0;
}
**/

class Product {
    public:
     virtual ~Product() {}
     virtual std::string Operation() const = 0;
   };
   
   /**
    * Concrete Products provide various implementations of the Product interface.
    */
   class ConcreteProduct1 : public Product {
    public:
     std::string Operation() const override {
       return "{Result of the ConcreteProduct1}";
     }
   };
   class ConcreteProduct2 : public Product {
    public:
     std::string Operation() const override {
       return "{Result of the ConcreteProduct2}";
     }
   };
   
   /**
    * The Creator class declares the factory method that is supposed to return an
    * object of a Product class. The Creator's subclasses usually provide the
    * implementation of this method.
    */
   
   class Creator {
     /**
      * Note that the Creator may also provide some default implementation of the
      * factory method.
      */
    public:
     virtual ~Creator(){};
     virtual Product* FactoryMethod() const = 0;
     /**
      * Also note that, despite its name, the Creator's primary responsibility is
      * not creating products. Usually, it contains some core business logic that
      * relies on Product objects, returned by the factory method. Subclasses can
      * indirectly change that business logic by overriding the factory method and
      * returning a different type of product from it.
      */
   
     std::string SomeOperation() const {
       // Call the factory method to create a Product object.
       Product* product = this->FactoryMethod();
       // Now, use the product.
       std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
       delete product;
       return result;
     }
   };
   
   /**
    * Concrete Creators override the factory method in order to change the
    * resulting product's type.
    */
   class ConcreteCreator1 : public Creator {
     /**
      * Note that the signature of the method still uses the abstract product type,
      * even though the concrete product is actually returned from the method. This
      * way the Creator can stay independent of concrete product classes.
      */
    public:
     Product* FactoryMethod() const override {
       return new ConcreteProduct1();
     }
   };
   
   class ConcreteCreator2 : public Creator {
    public:
     Product* FactoryMethod() const override {
       return new ConcreteProduct2();
     }
   };
   
   /**
    * The client code works with an instance of a concrete creator, albeit through
    * its base interface. As long as the client keeps working with the creator via
    * the base interface, you can pass it any creator's subclass.
    */
   void ClientCode(const Creator& creator) {
     // ...
     std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
               << creator.SomeOperation() << std::endl;
     // ...
   }
   
   /**
    * The Application picks a creator's type depending on the configuration or
    * environment.
    */
   
   int main() {
     std::cout << "App: Launched with the ConcreteCreator1.\n";
     Creator* creator = new ConcreteCreator1();
     ClientCode(*creator);
     std::cout << std::endl;
     std::cout << "App: Launched with the ConcreteCreator2.\n";
     Creator* creator2 = new ConcreteCreator2();
     ClientCode(*creator2);
   
     delete creator;
     delete creator2;
     return 0;
   }