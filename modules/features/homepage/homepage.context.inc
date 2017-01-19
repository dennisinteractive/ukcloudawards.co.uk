<?php
/**
 * @file
 * homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_homepage_featured';
  $context->description = 'Place the featured block on the homepage';
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
        'views-homepage-homepage_featured' => array(
          'module' => 'views',
          'delta' => 'homepage-homepage_featured',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place the featured block on the homepage');
  t('ukcloudawards');
  $export['ukcloudawards_homepage_featured'] = $context;

  return $export;
}
