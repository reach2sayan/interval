# Copyright 2018, 2019 Peter Dimov
# Copyright 2025 James E. King III
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

include(BoostTestJamfile OPTIONAL RESULT_VARIABLE HAVE_BOOST_TEST)

if(HAVE_BOOST_TEST)

# The library relies on changing the FPU rounding mode at run time, which the
# compiler is only required to honour under strict FP semantics.  Jamfile.v2 sets
# these per toolset; mirror them here.
set(interval_test_options)
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  set(interval_test_options -frounding-math)
elseif(MSVC)
  set(interval_test_options /fp:strict)
endif()

boost_test_jamfile(FILE Jamfile.v2
  LINK_LIBRARIES Boost::numeric_interval Boost::core Boost::logic
  COMPILE_OPTIONS ${interval_test_options})

endif()
