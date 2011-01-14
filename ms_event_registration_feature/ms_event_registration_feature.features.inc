<?php

/**
 * Implementation of hook_node_info().
 */
function ms_event_registration_feature_node_info() {
  $items = array(
    'event_form' => array(
      'name' => t('Event Registration Webform'),
      'module' => 'features',
      'description' => t('A webform used to collect information for paid event registrations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ms_event_registration_feature_views_api() {
  return array(
    'api' => '2',
  );
}
