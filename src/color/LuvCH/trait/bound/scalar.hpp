#ifndef color__internal_LuvCH_bound_scalar
#define color__internal_LuvCH_bound_scalar

// ::color::_internal::LuvCH::bound::scalar< index_type, scalar_name >


#include "../../../_internal/utility/type/traitc.hpp"
#include "../../../_internal/utility/type/index.hpp"



namespace color
 {
  namespace _internal
   {
    namespace LuvCH
     {
      namespace bound
       {

        template< typename index_name, typename scalar_name >
         struct scalar
          {
           public:
             typedef scalar_name  scalar_type;
             typedef index_name  index_type;

             typedef ::color::_internal::luv::bound::scalar< index_type, scalar_name > luv_bound_type;

             typedef ::color::_internal::utility::type::traitC< scalar_type >   scalar_trait_type;
             typedef ::color::_internal::utility::type::index< index_type >    index_trait_type;

             typedef typename scalar_trait_type::instance_type          instance_type;
             typedef typename scalar_trait_type::return_image_type      return_image_type;

             typedef typename index_trait_type::instance_type    index_instance_type;
             typedef typename index_trait_type::input_const_type index_input_const_type;

             typedef ::color::_internal::LuvCH::bound::scalar< index_type, scalar_name > this_type;

             static instance_type c_max()
              {
               instance_type a = std::max( fabs( luv_bound_type::template minimum<1>() ), luv_bound_type::template maximum<1>() );
               instance_type b = std::max( fabs( luv_bound_type::template minimum<2>() ), luv_bound_type::template maximum<2>() );
               return sqrt( a*a+b*b );
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   maximum( )
               {
                static instance_type max_list[] = { 100, this_type::c_max(), 360 };
                return max_list[index];
               }

             static /*constexpr*/ return_image_type   maximum( index_input_const_type  index )
              {
                static instance_type max_list[] = { 100, this_type::c_max(), 360 };
                return max_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   minimum( )
               {
                static instance_type min_list[] = { 0, 0, 0 };
                return min_list[index];
               }

             static /*constexpr*/ return_image_type   minimum( index_input_const_type  index )
              {
                static instance_type min_list[] = { 0, 0, 0 };
                return min_list[index];
              }

             template< index_instance_type index >
              static /*constexpr*/ return_image_type   range()
               {
                static instance_type range_list[] = { 100, this_type::c_max(), 360 };
                return range_list[index];
               }

             static /*constexpr*/ return_image_type   range(   index_input_const_type  index )
              {
                static instance_type range_list[] = { 100, this_type::c_max(), 360 };
                return range_list[index];
              }
          };

       }
     }
   }
 }

#endif
