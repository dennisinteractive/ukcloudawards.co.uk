<?php
/**
 * @file
 * sitewide_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sitewide_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_mainmenu';
  $context->description = 'Sitewide main menu';
  $context->tag = 'ukcloudawards';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'sitewide' => 'sitewide',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide main menu');
  t('ukcloudawards');
  $export['ukcloudawards_mainmenu'] = $context;

  return $export;
}
