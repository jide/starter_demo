<?php
/**
 * @file
 * starter_demo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function starter_demo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_main_menu';
  $context->description = '';
  $context->tag = 'starter';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-main-menu' => array(
          'module' => 'bean',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
          'title' => '',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('starter');
  $export['sitewide_main_menu'] = $context;

  return $export;
}
