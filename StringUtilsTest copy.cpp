// #include <gtest/gtest.h>
#include "../include/StringUtils.h"


#include <iostream>
using namespace std;
int main()
{
    std::string str = "   a  ";
    // std::string substr = StringUtils::Slice(str, 1, 0);
    // std::string capstr = StringUtils::Capitalize(str);
    std::string lstr = StringUtils::LStrip(str);
    std::string rstr = StringUtils::RStrip(str);
    std::string bstr = StringUtils::Strip(str);
    cout << lstr << "123" << endl;
    cout << rstr << "123" << endl;
    cout << bstr << "123" << endl;
}


// TEST(StringUtilsTest, SliceTest){
//     EXPECT_EQ("bcDeF", StringUtils::Slice("abcDeF", 1, 0));
//     EXPECT_EQ("b13", StringUtils::Slice("ab1312cDeF", 1, 4));
//     EXPECT_EQ("bc", StringUtils::Slice("abcdef", 1, 3));
// }

// TEST(StringUtilsTest, Capitalize){
    
// }

// TEST(StringUtilsTest, Upper){
    
// }

// TEST(StringUtilsTest, Lower){
    
// }

// TEST(StringUtilsTest, LStrip){
//     EXPECT_EQ("a  ", StringUtils::LStrip("   a  "));
// }

// TEST(StringUtilsTest, RStrip){
//     EXPECT_EQ("   a", StringUtils::RStrip("   a  "));
// }

// TEST(StringUtilsTest, Strip){
//     EXPECT_EQ("a", StringUtils::Strip("   a  "));
// }

// TEST(StringUtilsTest, Center){
    
// }

// TEST(StringUtilsTest, LJust){
    
// }

// TEST(StringUtilsTest, RJust){
    
// }

// TEST(StringUtilsTest, Replace){
    
// }

// TEST(StringUtilsTest, Split){
    
// }

// TEST(StringUtilsTest, Join){
    
// }

// TEST(StringUtilsTest, ExpandTabs){
    
// }

// TEST(StringUtilsTest, EditDistance){
    
// }
