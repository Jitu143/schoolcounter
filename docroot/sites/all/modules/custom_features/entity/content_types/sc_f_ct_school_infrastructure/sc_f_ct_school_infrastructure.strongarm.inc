<?php
/**
 * @file
 * sc_f_ct_school_infrastructure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sc_f_ct_school_infrastructure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ct_school_infrastructure';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'redirect' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ct_school_infrastructure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ct_school_infrastructure';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ct_school_infrastructure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ct_school_infrastructure';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ct_school_infrastructure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ct_school_infrastructure';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ct_school_infrastructure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ct_school_infrastructure';
  $strongarm->value = '1';
  $export['node_preview_ct_school_infrastructure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ct_school_infrastructure';
  $strongarm->value = 0;
  $export['node_submitted_ct_school_infrastructure'] = $strongarm;

  return $export;
}
