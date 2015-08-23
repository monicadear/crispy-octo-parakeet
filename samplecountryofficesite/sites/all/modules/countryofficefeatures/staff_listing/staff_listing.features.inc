<?php
/**
 * @file
 * staff_listing.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function staff_listing_image_default_styles() {
  $styles = array();

  // Exported image style: member_detail.
  $styles['member_detail'] = array(
    'name' => 'member_detail',
    'label' => 'member_detail',
    'effects' => array(
      29 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 430,
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
function staff_listing_node_info() {
  $items = array(
    'team_member' => array(
      'name' => t('Staff'),
      'base' => 'node_content',
      'description' => t('Use <i>staff</i> to create a member detail of the team'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  return $items;
}
