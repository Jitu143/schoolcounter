<?php
/**
 * @file
 * sc_image_style.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function sc_image_style_image_default_styles() {
  $styles = array();

  // Exported image style: style_school_banner.
  $styles['style_school_banner'] = array(
    'label' => 'school banner',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1500,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_school_thumbnail.
  $styles['style_school_thumbnail'] = array(
    'label' => 'school thumbnail',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: style_teacher_profile.
  $styles['style_teacher_profile'] = array(
    'label' => 'Teacher profile',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
