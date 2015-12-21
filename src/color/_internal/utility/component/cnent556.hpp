#ifndef color__internal_utility_component_cnent556
#define color__internal_utility_component_cnent556

// ::color::_internal::utility::component::cnent556< index_type >

#include "../type/traitp.hpp"
#include "../type/index.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace component
       {

        template< typename index_name >
         struct cnent556
          {
           public:
             typedef std::uint16_t      unsigned_type;
             typedef index_name         index_type;

             typedef ::color::_internal::utility::type::traitP< unsigned_type >         utility_trait_type;

             typedef typename utility_trait_type::instance_type          instance_type;
             typedef typename utility_trait_type::const_type             const_type;
             typedef typename utility_trait_type::return_const_type      return_const_type;
             typedef typename utility_trait_type::return_type            return_type;
             typedef typename utility_trait_type::input_const_type       input_const_type;
             typedef typename utility_trait_type::input_type             input_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;
          };

       }
     }
   }
 }

#endif 