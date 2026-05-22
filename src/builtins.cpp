#include "../include/leachf/dtypes/object.hpp"
#include "../include/leachf/dtypes/string.hpp"

#pragma region object
std::string leachf::dtypes::object::to_abs_string() const { return "<leachf::object>"; }

leachf::dtypes::object::~object() = default;

leachf::dtypes::string leachf::dtypes::object::to_string() const { return this->to_abs_string(); }

namespace leachf::dtypes {
    std::ostream &operator<< (std::ostream &os, const object &obj) { return os << obj.to_abs_string(); }
} //namespace leachf::dtypes
#pragma endregion

#pragma region string

std::string leachf::dtypes::string::to_abs_string() const { return this->data; }
leachf::dtypes::string leachf::dtypes::string::to_string() const { return this->data; }

#pragma endregion
