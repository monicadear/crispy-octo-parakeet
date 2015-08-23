<?php
/**
 * @file
 * get_involved.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function get_involved_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function get_involved_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function get_involved_node_info() {
  $items = array(
    'getinvolved' => array(
      'name' => t('Get Involved'),
      'base' => 'node_content',
      'description' => t('Use <i>Get Involved</i> to showcase the different areas of our work. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
