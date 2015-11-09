<?php
/**
 * @file
 * stand_alone_boxes.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stand_alone_boxes_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_physical_award_image';
  $context->description = 'Block for the physical award image';
  $context->tag = 'ukcloudawards';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-physical_award_image' => array(
          'module' => 'boxes',
          'delta' => 'physical_award_image',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block for the physical award image');
  t('ukcloudawards');
  $export['ukcloudawards_physical_award_image'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_site_intro';
  $context->description = 'Block for the intro block';
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
        'boxes-site_intro' => array(
          'module' => 'boxes',
          'delta' => 'site_intro',
          'region' => 'header',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block for the intro block');
  t('ukcloudawards');
  $export['ukcloudawards_site_intro'] = $context;

  return $export;
}
