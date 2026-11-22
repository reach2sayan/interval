/* Boost interval/detail/requires_cxx11.hpp file
 *
 * Copyright 2026 Sayan Samanta
 *
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or
 * copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_NUMERIC_INTERVAL_DETAIL_REQUIRES_CXX11_HPP
#define BOOST_NUMERIC_INTERVAL_DETAIL_REQUIRES_CXX11_HPP

#include <boost/config.hpp>
#include <boost/config/pragma_message.hpp>

#if defined(BOOST_NO_CXX11_STATIC_ASSERT) || \
    defined(BOOST_NO_CXX11_NOEXCEPT) || \
    defined(BOOST_NO_CXX11_CONSTEXPR) || \
    defined(BOOST_NO_CXX11_DECLTYPE) || \
    defined(BOOST_NO_CXX11_HDR_TYPE_TRAITS)

BOOST_PRAGMA_MESSAGE("C++03 support was deprecated in Boost.Interval 1.94 and will be removed in Boost.Interval 1.95.")

#endif

#endif // BOOST_NUMERIC_INTERVAL_DETAIL_REQUIRES_CXX11_HPP
