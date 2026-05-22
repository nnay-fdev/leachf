#ifndef STRING
#define STRING


#include <c++/16.1.1/string>
#include "object.hpp"

namespace leachf::dtypes {
    class string : public object {
    private:
        std::string data;

    protected:
        std::string to_abs_string() const override;

    public:
        string(const char *s) : data(s) {}
        string(std::string s) : data(std::move(s)) {}


        string to_string() const override;

    }; //string
} //namespace leachf::dtypes

#endif //STRING