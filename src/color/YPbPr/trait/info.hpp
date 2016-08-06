#ifndef color_YPbPr_trait_info
#define color_YPbPr_trait_info


#include "../../generic/trait/info.hpp"

#include "../category.hpp"

namespace color
 {
  namespace trait
   {

    template <> struct info< ::color::category::YPbPr_uint8 >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_uint16 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_uint32 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_uint64 >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_float >    {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_double >   {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };
    template <> struct info< ::color::category::YPbPr_ldouble >  {  public: enum { implemented_enum = true }; enum {  meaningful_enum = true }; };

   }
 }

#endif