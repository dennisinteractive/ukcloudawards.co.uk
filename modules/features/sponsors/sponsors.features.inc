<?php
/**
 * @file
 * sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function sponsors_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sponsors_node_info() {
  $items = array(
    'sponsors' => array(
      'name' => t('Sponsors'),
      'base' => 'node_content',
      'description' => t('Use to add sponsor logos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
