<?php
/**
 * @file
 * sc_f_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sc_f_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_node_page';
  $context->description = '';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ct_events' => 'ct_events',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_events-block_2' => array(
          'module' => 'views',
          'delta' => 'views_events-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  $export['event_node_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer';
  $context->description = '';
  $context->tag = 'sitewide context';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-sc-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-sc-footer-menu',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide context');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page';
  $context->description = '';
  $context->tag = 'home page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_home_page-block' => array(
          'module' => 'views',
          'delta' => 'views_home_page-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-views_home_page-block_1' => array(
          'module' => 'views',
          'delta' => 'views_home_page-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-views_school_blogs-home_blogs' => array(
          'module' => 'views',
          'delta' => 'views_school_blogs-home_blogs',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home page');
  $export['home_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'school_blog_landing_page';
  $context->description = '';
  $context->tag = 'School blogs';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'school-blogs' => 'school-blogs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_school-block_3' => array(
          'module' => 'views',
          'delta' => 'views_school-block_3',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('School blogs');
  $export['school_blog_landing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'school_node_page';
  $context->description = '';
  $context->tag = 'school';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ct_school' => 'ct_school',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_school-block_1' => array(
          'module' => 'views',
          'delta' => 'views_school-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-views_about_us-about_us' => array(
          'module' => 'views',
          'delta' => 'views_about_us-about_us',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-views_school-academics' => array(
          'module' => 'views',
          'delta' => 'views_school-academics',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-views_school-time_table' => array(
          'module' => 'views',
          'delta' => 'views_school-time_table',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-views_school-syllabus' => array(
          'module' => 'views',
          'delta' => 'views_school-syllabus',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-views_school-block_2' => array(
          'module' => 'views',
          'delta' => 'views_school-block_2',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-views_school_blogs-block_1' => array(
          'module' => 'views',
          'delta' => 'views_school_blogs-block_1',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-views_events-block_1' => array(
          'module' => 'views',
          'delta' => 'views_events-block_1',
          'region' => 'content',
          'weight' => '-3',
        ),
        'views-views_school_faculty-block' => array(
          'module' => 'views',
          'delta' => 'views_school_faculty-block',
          'region' => 'content',
          'weight' => '-2',
        ),
        'views-views_students_result-block_1' => array(
          'module' => 'views',
          'delta' => 'views_students_result-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-views_school-chairman' => array(
          'module' => 'views',
          'delta' => 'views_school-chairman',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-views_school-principal' => array(
          'module' => 'views',
          'delta' => 'views_school-principal',
          'region' => 'content',
          'weight' => '3',
        ),
        'views-aa78a9c77fefc3b3bbce9dee76941186' => array(
          'module' => 'views',
          'delta' => 'aa78a9c77fefc3b3bbce9dee76941186',
          'region' => 'content',
          'weight' => '4',
        ),
        'views-18a210c3d408e4f41ded41008c973061' => array(
          'module' => 'views',
          'delta' => '18a210c3d408e4f41ded41008c973061',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('school');
  $export['school_node_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'school_page';
  $context->description = '';
  $context->tag = 'school';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'school' => 'school',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-views_school_blogs-block_2' => array(
          'module' => 'views',
          'delta' => 'views_school_blogs-block_2',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('school');
  $export['school_page'] = $context;

  return $export;
}
