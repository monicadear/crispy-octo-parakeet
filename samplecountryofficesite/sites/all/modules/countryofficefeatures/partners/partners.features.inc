<?php
/**
 * @file
 * partners.features.inc
 */

/**
 * Implements hook_views_api().
 */
function partners_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function partners_image_default_styles() {
  $styles = array();

  // Exported image style: partner_logo.
  $styles['partner_logo'] = array(
    'name' => 'partner_logo',
    'label' => 'Partner_logo',
    'effects' => array(
      47 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function partners_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Many thanks to our partners'),
      'has_title' => '1',
      'title_label' => t('Name of Organization'),
      'help' => '',
    ),
    'specific_program_names' => array(
      'name' => t('Specific Program Names'),
      'base' => 'node_content',
      'description' => t('Specific program names for funding purposes'),
      'has_title' => '1',
      'title_label' => t('Official Program Name'),
      'help' => '',
    ),
  );
  return $items;
}
