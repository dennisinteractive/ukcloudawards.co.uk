<?php
/**
 * @file
 * entry_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function entry_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function entry_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function entry_forms_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: entry_form_ordering
  $nodequeues['entry_form_ordering'] = array(
    'name' => 'entry_form_ordering',
    'title' => 'Entry Form Ordering',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'webform',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function entry_forms_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
