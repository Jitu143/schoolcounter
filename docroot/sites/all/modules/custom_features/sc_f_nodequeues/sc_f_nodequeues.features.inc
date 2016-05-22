<?php
/**
 * @file
 * sc_f_nodequeues.features.inc
 */

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function sc_f_nodequeues_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: queue_our_latest_schools
  $nodequeues['queue_our_latest_schools'] = array(
    'name' => 'queue_our_latest_schools',
    'title' => 'Our latest schools',
    'subqueue_title' => '',
    'size' => 4,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ct_school',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: sc_queue_home_page
  $nodequeues['sc_queue_home_page'] = array(
    'name' => 'sc_queue_home_page',
    'title' => 'Home page',
    'subqueue_title' => '',
    'size' => 5,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'ct_home_page',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}
