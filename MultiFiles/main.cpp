#include <iostream>
#include "prefix2.h"
#include "prefix10.h"

using namespace std;

int main()
{
cout << " 1 Kilogramm is " << metric::kilo(1) << " gramms"<<endl;//1000
cout << " 1 Kilobyte is " << binary::kilo(1) << " bytes"<<endl;//1024

}