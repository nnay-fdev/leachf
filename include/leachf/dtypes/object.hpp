#ifndef OBJECT
#define OBJECT


#include <c++/16.1.1/memory>
#include <c++/16.1.1/string>

namespace leachf::dtypes {
    class string;

    class object {
    protected:
        virtual std::string to_abs_string() const;

    public:
        using ptr = std::shared_ptr<object>;

        virtual ~object();

        virtual string to_string() const;

        friend
        std::ostream &operator<< (std::ostream &os, const object &obj);
    }; //object
} //namespace leachf::dtypes

#endif //OBJECT