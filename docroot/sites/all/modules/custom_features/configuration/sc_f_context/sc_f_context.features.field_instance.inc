<?php
/**
 * @file
 * sc_f_context.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sc_f_context_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ct_school-field_ct_share_this'.
  $field_instances['node-ct_school-field_ct_share_this'] = array(
    'bundle' => 'ct_school',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addthis_displays',
        'settings' => array(
          'buttons_size' => 'addthis_32x32_style',
          'counter_orientation' => 'horizontal',
          'extra_css' => '',
          'share_services' => 'facebook,twitter,googleplus,telegram,wechat,whatsapp,email,compact',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_share_this',
    'label' => 'Share this',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 54,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Share this');

  return $field_instances;
}
