#ifndef color_YDbDr_trait_index_float
#define color_YDbDr_trait_index_float

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::YDbDr_float >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif