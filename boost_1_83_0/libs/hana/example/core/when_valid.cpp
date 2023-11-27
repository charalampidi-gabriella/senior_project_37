// Copyright Louis Dionne 2013-2022
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

#include <boost/hana/core/when.hpp>

#include <type_traits>
namespace hana = boost::hana;


template <typename T, typename = hana::when<true>>
struct base_template;

template <typename T>
struct base_template<T, hana::when_valid<typename T::value_type>> {
    // something useful...
};

int main() { }
