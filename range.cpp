#include <boost/detail/workaround.hpp>

#include <boost/range/sub_range.hpp>
#include <boost/range/as_literal.hpp> 
#include <boost/foreach.hpp> 
#include <iostream>
#include <string>
#include <vector>

using namespace boost;
using namespace std;


#define _ boost::format
#define slice(x, i, j) make_iterator_range(x, i, j - x.size())


int main() {
    string str = "hello world";
    cout << str << endl;

    typedef sub_range<string>       srange;
    srange s = slice(str, 3, 5);

    cout << s.size() << endl;
    cout << s << endl;

    return 0;
}
