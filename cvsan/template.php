<?php

/**
 * @file
 * template.php
 */
 
function cvsan_preprocess_page(&$vars) {

  if (isset($variables['node']->type)) {
       $nodetype = $variables['node']->type;
       $variables['theme_hook_suggestions'][] = 'page__' . $nodetype;
  }
}

function cvsan_preprocess_node(&$vars) {
  
  // Add css class "node--NODETYPE--VIEWMODE" to nodes
  $vars['classes_array'][] = 'node--' . $vars['type'] . '--' . $vars['view_mode'];
  
  // Make "node--NODETYPE--VIEWMODE.tpl.php" templates available for nodes 
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
}

/**
 * Implements hook_admin_paths().
 *
 * Add IMCE to admin paths.
 */
function cvsan_admin_paths() {
    $paths = array(
        'imce' => TRUE,
    );
    return $paths;
}