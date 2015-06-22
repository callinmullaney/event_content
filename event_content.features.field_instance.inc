<?php
/**
 * @file
 * event_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function event_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-event-body'
  $field_instances['node-event-body'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_date_time'
  $field_instances['node-event-field_date_time'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date_time',
    'label' => 'Date/Time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 1,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_featured_image'
  $field_instances['node-event-field_featured_image'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'instance_default_creation' => 0,
          'label_plural' => 'Featured Images',
          'label_singular' => 'Featured Image',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_file_asset'
  $field_instances['node-event-field_file_asset'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_file_asset',
    'label' => 'File',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'instance_default_creation' => 0,
          'label_plural' => 'Files',
          'label_singular' => 'File',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_location'
  $field_instances['node-event-field_location'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'delete_references' => 0,
          'instance_default_creation' => 0,
          'label_plural' => 'Locations',
          'label_singular' => 'Location',
          'match_operator' => 'CONTAINS',
          'override_labels' => 1,
        ),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_meta_description'
  $field_instances['node-event-field_meta_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_description',
    'label' => 'Meta Description',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_meta_keywords'
  $field_instances['node-event-field_meta_keywords'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'metatags_quick',
        'settings' => array(),
        'type' => 'metatags_quick_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_keywords',
    'label' => 'Meta Keywords',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'metatags_quick',
      'settings' => array(),
      'type' => 'metatags_quick_textfield',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Date/Time');
  t('Featured Image');
  t('File');
  t('Location');
  t('Meta Description');
  t('Meta Keywords');

  return $field_instances;
}
