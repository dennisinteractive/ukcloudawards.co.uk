<?php
/**
 * @file
 * sitewide_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sitewide_menus_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
