<?php
/**
 * @file
 * homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function homepage_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_ordering
  $nodequeues['homepage_ordering'] = array(
    'name' => 'homepage_ordering',
    'title' => 'Homepage Ordering',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'http://ukcloudawards.co.uk/t-systems-sup',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
