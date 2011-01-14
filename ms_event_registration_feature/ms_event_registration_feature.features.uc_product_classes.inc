<?php

/**
 * Implementation of hook_node_info().
 */
function ms_event_registration_feature_node_info() {
  $items = array(
    'paidevent' => array(
      'name' => t('Paid Event'),
      'module' => 'uc_product',
      'description' => t('An event which will have a registration fee.  This should be created and then you should create an event registration form to collect registrations.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
