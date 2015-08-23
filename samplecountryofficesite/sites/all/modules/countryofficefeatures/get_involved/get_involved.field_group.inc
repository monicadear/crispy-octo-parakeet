<?php
/**
 * @file
 * get_involved.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function get_involved_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gi_content|node|getinvolved|default';
  $field_group->group_name = 'group_gi_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'getinvolved';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_project_url',
      1 => 'body',
      2 => 'field_addthis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-gi-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_gi_content|node|getinvolved|default'] = $field_group;

  return $export;
}
