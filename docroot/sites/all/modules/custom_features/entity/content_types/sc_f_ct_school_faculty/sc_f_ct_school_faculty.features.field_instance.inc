<?php
/**
 * @file
 * sc_f_ct_school_faculty.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sc_f_ct_school_faculty_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ct_school_faculty-body'.
  $field_instances['node-ct_school_faculty-body'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_designation'.
  $field_instances['node-ct_school_faculty-field_ct_designation'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_designation',
    'label' => 'Designation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_education'.
  $field_instances['node-ct_school_faculty-field_ct_education'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_experience'.
  $field_instances['node-ct_school_faculty-field_ct_experience'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide in years',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_experience',
    'label' => 'Experience',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_images'.
  $field_instances['node-ct_school_faculty-field_ct_images'] = array(
    'bundle' => 'ct_school_faculty',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_images',
    'label' => 'Profile photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_required' => 1,
      'default_image' => 0,
      'file_directory' => 'teacher_profile/thumbnail/[current-date:custom:Y]/[current-date:custom:M]/[current-date:custom:d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '250x250',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_required' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_school'.
  $field_instances['node-ct_school_faculty-field_ct_school'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_school',
    'label' => 'School',
    'required' => 1,
    'settings' => array(
      'nodeaccess_nodereference' => array(
        'all' => array(
          'view' => 0,
        ),
        'all_published' => 0,
        'author' => array(
          'delete' => 0,
          'update' => 0,
          'view' => 0,
        ),
        'author_published' => 0,
        'priority' => 0,
        'referenced' => array(
          'delete' => array(
            'delete' => 0,
            'update' => 0,
            'view' => 0,
          ),
          'published' => 0,
          'update' => array(
            'delete' => 0,
            'update' => 0,
            'view' => 0,
          ),
          'view' => array(
            'delete' => 0,
            'update' => 0,
            'view' => 0,
          ),
        ),
        'unused' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-ct_school_faculty-field_ct_weight'.
  $field_instances['node-ct_school_faculty-field_ct_weight'] = array(
    'bundle' => 'ct_school_faculty',
    'default_value' => array(
      0 => array(
        'value' => 50,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ct_weight',
    'label' => 'Weight',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Designation');
  t('Education');
  t('Experience');
  t('Profile photo');
  t('Provide in years');
  t('School');
  t('Weight');

  return $field_instances;
}
