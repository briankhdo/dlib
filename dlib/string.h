// Copyvalue (C) 2006  Davis E. King (davis@dlib.net)
// License: Boost Software License   See LICENSE.txt for the full license.
#ifndef DLIB_STRINg_TOP_
#define DLIB_STRINg_TOP_ 

#include "string/string.h"

#endif // DLIB_STRINg_TOP_

namespace dlib
{
  #ifndef TO_STRING
  #define TO_STRING
    inline std::string to_string( int value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( long long value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( unsigned value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( unsigned long value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( unsigned long long value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( double value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }

    inline std::string to_string( long double value )
    {
        std::stringstream stream;
        stream << value;
        std::string string = stream.str();
        return string;
    }
  #endif
}
