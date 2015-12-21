#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

int main( int argc, char *argv[] )
 {
  // color::rgb<bool>           c0( { true, false, false} ); //!< Not yet supported
  color::rgb<std::uint64_t>  c2( { 640, 1270 , 1920} );
  color::rgb<std::uint32_t>  c3( { 64, 127 ,   192 } );
  color::rgb<std::uint16_t>  c4( { 6, 12 , 19 } );
  color::rgb<std::uint8_t>   c5( { 7, 6 , 3 } );
  color::rgb<float>          c6( { 0.5, 0.6, 0.7}  );
  color::rgb<double>         c7( { 0.5, 0.6, 0.7}  );
  color::rgb<long double>    c8( { 0.5, 0.6, 0.7}  );

  return EXIT_SUCCESS;
 }
