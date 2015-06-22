<?php
/**
 * @file
 * event_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function event_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|event|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '3',
    'children' => array(
      0 => 'field_file_asset',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_attachments|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_content|node|event|form';
  $field_group->group_name = 'group_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_date_time',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_event_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagery|node|event|form';
  $field_group->group_name = 'group_imagery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagery',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Imagery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_imagery|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '2',
    'children' => array(
      0 => 'field_address',
      1 => 'field_geolocation',
      2 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|event|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '100',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|event|form'] = $field_group;

  return $export;
}
