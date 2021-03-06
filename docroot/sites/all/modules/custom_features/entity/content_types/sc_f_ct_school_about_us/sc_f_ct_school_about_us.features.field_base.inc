<?php
/**
 * @file
 * sc_f_ct_school_about_us.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function sc_f_ct_school_about_us_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ct_our_approach'.
  $field_bases['field_ct_our_approach'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ct_our_approach',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
