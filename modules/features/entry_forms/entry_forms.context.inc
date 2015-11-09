<?php
/**
 * @file
 * entry_forms.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function entry_forms_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ukcloudawards_entry_forms';
  $context->description = 'Places the entry forms on pages around the site';
  $context->tag = 'ukcloudawards';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-entry_forms-block' => array(
          'module' => 'views',
          'delta' => 'entry_forms-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places the entry forms on pages around the site');
  t('ukcloudawards');
  $export['ukcloudawards_entry_forms'] = $context;

  return $export;
}
