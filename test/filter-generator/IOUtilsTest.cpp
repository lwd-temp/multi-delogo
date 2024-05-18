/*
 * Copyright (C) 2018-2024 Werner Turing <werner.turing@protonmail.com>
 *
 * This file is part of multi-delogo.
 *
 * multi-delogo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * multi-delogo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with multi-delogo.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <string>
#include <sstream>

#include "IOUtils.hpp"


#define BOOST_TEST_MODULE IOUtils
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(getline_works_for_unix_line_ending)
{
  std::istringstream in("first line\nsecond line\n");

  std::string line;
  fg::getline(in, line);
  BOOST_TEST(line == "first line");
}


BOOST_AUTO_TEST_CASE(getline_works_for_windows_line_ending)
{
  std::istringstream in("first line\r\nsecond line\r\n");

  std::string line;
  fg::getline(in, line);
  BOOST_TEST(line == "first line");
}
