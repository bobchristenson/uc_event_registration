<?php

/**
 * Implementation of hook_strongarm().
 */
function ms_event_registration_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_paidevent';
  $strongarm->value = 'form-55bf7489b0037be4b2fbd3c1b6a135c6';

  $export['form_build_id_paidevent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_paidevent';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_paidevent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_paidevent';
  $strongarm->value = '';

  $export['uc_image_paidevent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_paidevent';
  $strongarm->value = 0;

  $export['uc_product_shippable_paidevent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ucatc_class_def_paidevent';
  $strongarm->value = 'a:2:{s:10:"cart_empty";i:0;s:8:"redirect";s:6:"global";}';

  $export['ucatc_class_def_paidevent'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_types';
  $strongarm->value = array(
    1 => 'paidevent',
    2 => 'webform',
  );

  $export['webform_node_types'] = $strongarm;
  return $export;
}
