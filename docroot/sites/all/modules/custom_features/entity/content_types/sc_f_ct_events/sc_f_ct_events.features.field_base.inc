<?php
/**
 * @file
 * sc_f_ct_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function sc_f_ct_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ct_school'.
  $field_bases['field_ct_school'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ct_school',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'ct_school' => 'ct_school',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
