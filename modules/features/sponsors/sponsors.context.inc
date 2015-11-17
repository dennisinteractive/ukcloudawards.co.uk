<?php
/**
 * @file
 * sponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_homepage_sponsors';
  $context->description = 'Place the sponsors block on the homepage';
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
        'views-sponsors-sponsor_block' => array(
          'module' => 'views',
          'delta' => 'sponsors-sponsor_block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place the sponsors block on the homepage');
  t('ukcloudawards');
  $export['ukcloudawards_homepage_sponsors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_ros_sponsors';
  $context->description = 'Place the sponsors block on the RoS';
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
        'views-sponsors-sponsor_block' => array(
          'module' => 'views',
          'delta' => 'sponsors-sponsor_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place the sponsors block on the RoS');
  t('ukcloudawards');
  $export['ukcloudawards_ros_sponsors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_sitewide_partners';
  $context->description = 'Place the partners block on the homepage';
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
        'views-sponsors-partner_block' => array(
          'module' => 'views',
          'delta' => 'sponsors-partner_block',
          'region' => 'header',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place the partners block on the homepage');
  t('ukcloudawards');
  $export['ukcloudawards_sitewide_partners'] = $context;

  return $export;
}
