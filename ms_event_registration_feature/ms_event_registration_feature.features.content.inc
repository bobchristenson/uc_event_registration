<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ms_event_registration_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_event_ref
  $fields['event_form-field_event_ref'] = array(
    'field_name' => 'field_event_ref',
    'type_name' => 'event_form',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'paidevent' => 'paidevent',
      'event_form' => 0,
      'page' => 0,
      'product' => 0,
      'story' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add Registration Form',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'select',
      'edit_fallback' => 1,
      'label' => 'Event Reference',
      'weight' => '-4',
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Event Reference');

  return $fields;
}
