<?php
/**
 * @file
 * judges.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function judges_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_homepage_judges';
  $context->description = 'Place the judges block on the homepage';
  $context->tag = 'ukcloudawards';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'homepage' => 'homepage',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-judges-judges_block' => array(
          'module' => 'views',
          'delta' => 'judges-judges_block',
          'region' => 'footer',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place the judges block on the homepage');
  t('ukcloudawards');
  $export['ukcloudawards_homepage_judges'] = $context;

  return $export;
}
