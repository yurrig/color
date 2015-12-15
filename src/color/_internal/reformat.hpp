#ifndef color__internal_reformat
#define color__internal_reformat

// ::color::_internal::reformat< >(   )
// ::color::_internal::reformat< >(   )

#include "./component.hpp"
#include "./index.hpp"
#include "./diverse.hpp"
#include "./normalize.hpp"

namespace color
 {
  namespace _internal
   {

    template
     <
       typename category_left_name
      ,typename category_right_name 
     >
     struct reformat
      {
       public:
         typedef  category_left_name   category_left_type;
         typedef  category_right_name  category_right_type;


         typedef typename ::color::_internal::component< category_left_name >::return_type          left_component_return_type;
         typedef typename ::color::_internal::index< category_left_name >::input_const_type         left_index_const_input_type;
         typedef typename ::color::_internal::index< category_left_name >::instance_type            left_index_instance_type;

         typedef typename ::color::_internal::component< category_right_name >::input_const_type     right_component_const_input_type;
         typedef typename ::color::_internal::index< category_right_name >::input_const_type         right_index_const_input_type;
         typedef typename ::color::_internal::index< category_right_name >::instance_type            right_index_instance_type;

         static
         left_component_return_type
         process
          (
            left_index_const_input_type        left_index
           ,right_component_const_input_type   right_component
           ,right_index_const_input_type       right_index
          )
          {
           return ::color::_internal::diverse< category_left_type >
            (
             ::color::_internal::normalize< category_right_type >
              (
                right_component
               ,right_index
              )
             , left_index
            );
          }

         template
          <
           left_index_instance_type left_index_size
          >
         static
         left_component_return_type
         process
          (
            right_component_const_input_type   right_component
           ,right_index_const_input_type       right_index
          )
          {
           return ::color::_internal::diverse< category_left_type, left_index_size >
            (
             ::color::_internal::normalize< category_right_type >
              (
                right_component
               ,right_index
              )
            );
          }

         template
          <
            left_index_instance_type  left_index_size
           ,right_index_instance_type right_index_size
          >
         static
         left_component_return_type
         process
          (
            right_component_const_input_type   right_component
          )
          {
           return ::color::_internal::diverse< category_left_type, left_index_size >
            (
             ::color::_internal::normalize< category_right_type, right_index_size >
              (
                right_component
              )
            );
          }
      };

   }
 }
 
#endif
