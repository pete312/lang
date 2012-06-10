#include <map>
#include <vector>
#include <iostream>
#include <sstream>
#include <boost/algorithm/string/replace.hpp>

using namespace std;


static std::string dress(string s)
{
    boost::replace_all(s , string("'"), string("''")); 
}


int main(int argc,char *argv[])
{

    string sample = "sample's";
    boost::replace_all(sample , string("'"), string("''")); 

    stringstream ss ;
    ss << "sampl" << "e's" ;
    //sample = dress(sample);
    string target = ss.str();
    
    boost::replace_all(target , string("'"), string("''")); 
    cout << sample << endl;
    cout << target << endl;
 
}
