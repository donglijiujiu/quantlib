
/*
 Copyright (C) 2003 Ferdinando Ametrano
 Copyright (C) 2003 Neil Firth 

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it under the
 terms of the QuantLib license.  You should have received a copy of the
 license along with this program; if not, please email quantlib-dev@lists.sf.net
 The license is also available online at http://quantlib.org/html/license.html

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#ifndef quantlib_test_digital_option_hpp
#define quantlib_test_digital_option_hpp

#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>

class DigitalOptionTest : public CppUnit::TestFixture {
  public:
    void testValues();    
    void testAmericanValues();    
    void testSelfConsistency();
    void testEngineConsistency();
    static CppUnit::Test* suite();
};


#endif
