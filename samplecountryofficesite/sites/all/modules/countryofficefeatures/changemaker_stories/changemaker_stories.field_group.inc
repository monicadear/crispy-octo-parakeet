<?php
/**
 * @file
 * changemaker_stories.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function changemaker_stories_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_the|node|client|default';
  $field_group->group_name = 'group_the';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'client';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Changemaker Story',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_portfolio_images',
      2 => 'field_addthis',
      3 => 'field_work_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Changemaker Story',
      'instance_settings' => array(
        'classes' => 'group-the field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_the|node|client|default'] = $field_group;

  return $export;
}
