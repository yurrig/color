#ifndef color__internal_utility_bound_yuv
#define color__internal_utility_bound_yuv

// ::color::_internal::utility::bound::yuv_float< index_type, scalar_name >


#include "../type/traitp.hpp"
#include "../type/index.hpp"

namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace bound
       {

        template< typename index_name, typename scalar_name >
         struct yuv_float
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename trait_type::instance_type          instance_type;
             typedef typename trait_type::return_const_type      return_const_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   maximum( )
               {
                static instance_type max_list[] = { 1, 0.436, 0.615 };
                return max_list[index];
               }

             static /*constexpr*/ return_const_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 1, 0.436, 0.615 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   minimum( )
               {
                static instance_type min_list[] = { 0, -0.436, -0.615 };
                return min_list[index];
               }

             static /*constexpr*/ return_const_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, -0.436, -0.615 };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_const_type   range()
               {
                static instance_type range_list[] = { 1, 2*0.436, 2 * 0.615 };
                return range_list[index];
               }

             static /*constexpr*/ return_const_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 1, 2*0.436, 2*0.615 };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif