#pragma once
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <list>
#include <type_traits>
#include <sstream>

using namespace std;


// 模板函数 - string类型
inline std::string formatStl(const std::string& value) {
    return value;
}

// 模板函数 - POD类型
template <typename T>
typename std::enable_if<std::is_pod<T>::value, std::string>::type formatStl(T value) {
    return std::to_string(value);
}

// 模板函数 - 一般类型
template <typename T>
typename std::enable_if<!std::is_pod<typename T::value_type>::value, std::string>::type formatStl(const T& container) {
    std::stringstream ss;
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it != container.begin()) {
            ss << "|";
        }
        ss << formatStl(*it);  // Recursively call format_container
    }
    return ss.str();
}

// 模板函数 - POD类型容器
template <typename T>
typename std::enable_if<std::is_pod<typename T::value_type>::value, std::string>::type formatStl(const T& container) {
    std::stringstream ss;
    for (auto it = container.begin(); it != container.end(); ++it) {
        if (it != container.begin()) {
            ss << "|";
        }
        ss << formatStl(*it);  // Recursively call formatStl
    }
    return ss.str();
}

// 模板函数 - pair类型(key-value对)
template <typename T1, typename T2>
std::string formatStl(const std::pair<T1, T2>& pair) {
    return formatStl(pair.first) + ":" + formatStl(pair.second);
}
