<?php
/**
 * @file
 * media_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function media_content_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Media'),
      'base' => 'node_content',
      'description' => t('Media such as video from YouTube or Vimeo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
