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

  // Exported image style: blogs_landing_style.
  $styles['blogs_landing_style'] = array(
    'label' => 'blogs landing style',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_activity_logo.
  $styles['style_activity_logo'] = array(
    'label' => 'activity Logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_event_landing.
  $styles['style_event_landing'] = array(
    'label' => 'event landing',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 350,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_event_thumbnail.
  $styles['style_event_thumbnail'] = array(
    'label' => 'event thumbnail',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_logo_image.
  $styles['style_logo_image'] = array(
    'label' => 'logo image',
    'effects' => array(
      9 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

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

  // Exported image style: style_school_infrastructure.
  $styles['style_school_infrastructure'] = array(
    'label' => 'school infrastructure',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_school_thumbnail.
  $styles['style_school_thumbnail'] = array(
    'label' => 'school thumbnail',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 250,
        ),
        'weight' => 1,
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
