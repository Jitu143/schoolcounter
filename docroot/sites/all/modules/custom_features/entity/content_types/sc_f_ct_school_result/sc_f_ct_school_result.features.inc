<?php
/**
 * @file
 * sc_f_ct_school_result.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sc_f_ct_school_result_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sc_f_ct_school_result_node_info() {
  $items = array(
    'ct_school_results' => array(
      'name' => t('school results'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
