#include "../include/StringUtils.h"

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    // Replace code here
    // get the length of str
    int length = str.length();
    if(start < 0 || start >= length)
    {
        return "";
    }
    if(end < 0 || end >= length)
    {
        return "";
    }

    int sublen;
    // python end == 0 means to include end of string
    if(end == 0)
    {
        sublen = length - start;
    }
    else
    {
        sublen = end - start;
    }
    std::string substr = str.substr(start, sublen);
    return substr;
}

std::string Capitalize(const std::string &str) noexcept{
    // Replace code here
    std::string ret_str = str;
    // if the first char is lower case
    int length = str.length();
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        ret_str[0] = str[0] - ('a' - 'A');
    }
    for(int i = 1; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ret_str[i] = str[i] + ('a' - 'A');
        }
    }
    return ret_str;
}

std::string Upper(const std::string &str) noexcept{
    // Replace code here
    std::string ret_str = str;
    int length = str.length();
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            ret_str[i] = str[i] - 'a' + 'A';
        }
    }
    return ret_str;
}

std::string Lower(const std::string &str) noexcept{
    // Replace code here
    std::string ret_str = str;
    int length = str.length();
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ret_str[i] = str[i] -'A' + 'a';
        }
    }
    return ret_str;
}

std::string LStrip(const std::string &str) noexcept{
    // Replace code here
    std::string ret_str = str;
    int length = str.length();
    
    // delete left blank spaces
    for(int i = 0; i < length; i++)
    {
        if(str[i] != ' ')
            break;
        ret_str.erase(0, 1);
    }
    return ret_str;
}

std::string RStrip(const std::string &str) noexcept{
    // Replace code here
    std::string ret_str = str;
    int length = str.length();
    // "  ab cd ef  "
    for(int i = length - 1; i >= 0; i--)
    {
        if(str[i] != ' ')
            break;
        // delete the last charactor of ret_str
        ret_str.erase(int(ret_str.length() - 1), 1);
    }
    return ret_str;
}

std::string Strip(const std::string &str) noexcept{
    // Replace code here
    // str = '  ab cd ef  '
    std::string ret_str = StringUtils::LStrip(str);
    // str = '  ab cd ef  '
    // ret_str = 'ab cd ef  '
    ret_str = StringUtils::RStrip(ret_str);
    // str = '  ab cd ef  '
    // ret_str = 'ab cd ef'
    return ret_str;
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    int length = str.length();
    if(width <= length)
        return str;
    
    // "123"
    // width = 10, fill = ','
    int fill_num = width - length;          // 7
    int left_num = fill_num / 2;            // 3
    int right_num = fill_num - left_num;    // 4

    std::string ret_str = "";
    for(int i = 0; i < left_num; i++)
    {
        ret_str.push_back(fill);
    }
    // ret_str = ",,,"
    ret_str.append(str);
    // ret_str = ",,,123"
    for(int i = 0; i < right_num; i++)
    {
        ret_str.push_back(fill);
    }
    // ret_str = ",,,123,,,,"
    return ret_str;
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};