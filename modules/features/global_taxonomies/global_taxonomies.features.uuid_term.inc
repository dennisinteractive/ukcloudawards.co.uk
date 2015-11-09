<?php
/**
 * @file
 * global_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function global_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sponsor',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '71fe2677-967f-417c-a793-0f01455c7064',
    'vocabulary_machine_name' => 'affiliation',
  );
  $terms[] = array(
    'name' => 'Partner',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd07a12b2-84cf-4747-b993-175d5728bd33',
    'vocabulary_machine_name' => 'affiliation',
  );
  return $terms;
}
