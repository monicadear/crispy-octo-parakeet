<?php
/**
 * @file
 * fellows_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fellows_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fellows_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fellows_directory_node_info() {
  $items = array(
    'fellow' => array(
      'name' => t('Fellow'),
      'base' => 'node_content',
      'description' => t('Ashoka Fellows. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
