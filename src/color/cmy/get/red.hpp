#ifndef color_cmy_get_red
#define color_cmy_get_red

// ::color::get::red( c )

#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"


 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace _privateCMY
        {

         template< typename category_name >
          inline
          typename ::color::trait::component< typename ::color::akin::rgb<category_name>::akin_type >::return_type
          red( ::color::_internal::model< category_name > const& color_parameter )
           {
            typedef typename ::color::trait::scalar<category_name>::instance_type   scalar_type;

            typedef typename ::color::akin::rgb<category_name >::akin_type     akin_type;

            typedef  ::color::operation::_internal::invert< category_name > invert_type; 
            typedef  ::color::_internal::reformat< akin_type, category_name, scalar_type > reformat_type;

            return reformat_type::template process<0,0>( invert_type::template component<0>( color_parameter.template get<0>() ) );
           }

        }
      }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_uint8 >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_uint8>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_uint16 >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_uint16>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_uint32 >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_uint32>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_uint64 >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_uint64>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_float >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_float > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_float>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_double >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_double > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_double>( color_parameter );
       }

      inline
      ::color::trait::component< ::color::akin::rgb< ::color::category::cmy_ldouble >::akin_type >::return_type
      red( ::color::_internal::model< ::color::category::cmy_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::_privateCMY::red<::color::category::cmy_ldouble>( color_parameter );
       }


    }
  }

#endif
