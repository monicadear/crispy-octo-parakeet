<?php
/**
 * @file
 * changemaker_schools_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function changemaker_schools_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function changemaker_schools_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function changemaker_schools_directory_node_info() {
  $items = array(
    'changemaker_schools' => array(
      'name' => t('Changemaker Schools'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of School'),
      'help' => '',
    ),
  );
  return $items;
}
