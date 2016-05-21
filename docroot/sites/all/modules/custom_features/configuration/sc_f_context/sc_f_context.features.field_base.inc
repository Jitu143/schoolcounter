<?php
/**
 * @file
 * sc_f_context.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function sc_f_context_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ct_share_this'.
  $field_bases['field_ct_share_this'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ct_share_this',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addthis',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'addthis',
  );

  return $field_bases;
}
