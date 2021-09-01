#include <gtest/gtest.h>

#include <myproject/myclass.hpp>

TEST(test_my_class, get_age)
{
    my_class myClass("Joel", 21);
    ASSERT_TRUE(myClass.get_age() == 16) << "age is not 16";
}

TEST(test_my_class, get_name)
{
    my_class myClass("Joel", 21);
    ASSERT_EQ(myClass.get_name(), "Joel") << "name is not Joel";
}
