/*
 *             Copyright Andrey Semashev 2018.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */
/*!
 * \file   access_rights_abi.cpp
 * \author Andrey Semashev
 * \date   09.03.2018
 *
 * \brief  This file contains ABI test for access_rights.hpp
 */

#include <boost/winapi/access_rights.hpp>
#include <windows.h>
#include "abi_test_tools.hpp"

int main()
{
    BOOST_WINAPI_TEST_CONSTANT(DELETE);
    BOOST_WINAPI_TEST_CONSTANT(READ_CONTROL);
    BOOST_WINAPI_TEST_CONSTANT(WRITE_DAC);
    BOOST_WINAPI_TEST_CONSTANT(WRITE_OWNER);
    BOOST_WINAPI_TEST_CONSTANT(SYNCHRONIZE);

    BOOST_WINAPI_TEST_CONSTANT(STANDARD_RIGHTS_ALL);
    BOOST_WINAPI_TEST_CONSTANT(STANDARD_RIGHTS_EXECUTE);
    BOOST_WINAPI_TEST_CONSTANT(STANDARD_RIGHTS_READ);
    BOOST_WINAPI_TEST_CONSTANT(STANDARD_RIGHTS_REQUIRED);
    BOOST_WINAPI_TEST_CONSTANT(STANDARD_RIGHTS_WRITE);

    BOOST_WINAPI_TEST_CONSTANT(SPECIFIC_RIGHTS_ALL);

    BOOST_WINAPI_TEST_CONSTANT(ACCESS_SYSTEM_SECURITY);

    BOOST_WINAPI_TEST_CONSTANT(MAXIMUM_ALLOWED);

    BOOST_WINAPI_TEST_CONSTANT(GENERIC_ALL);
    BOOST_WINAPI_TEST_CONSTANT(GENERIC_EXECUTE);
    BOOST_WINAPI_TEST_CONSTANT(GENERIC_WRITE);
    BOOST_WINAPI_TEST_CONSTANT(GENERIC_READ);

    BOOST_WINAPI_TEST_TYPE_SAME(ACCESS_MASK);
    BOOST_WINAPI_TEST_TYPE_SAME(PACCESS_MASK);

    return boost::report_errors();
}
