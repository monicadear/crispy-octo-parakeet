<?php
/**
 * @file
 * contact_office.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function contact_office_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact';
  $context->description = 'Layout of "Contact" page';
  $context->tag = 'pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-29' => array(
          'module' => 'block',
          'delta' => '29',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'full_width',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'contact',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout of "Contact" page');
  t('pages');
  $export['contact'] = $context;

  return $export;
}
