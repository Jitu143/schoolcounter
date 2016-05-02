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
        'views-views_events-block_1' => array(
          'module' => 'views',
          'delta' => 'views_events-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-views_students_result-block_1' => array(
          'module' => 'views',
          'delta' => 'views_students_result-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-views_school_faculty-block' => array(
          'module' => 'views',
          'delta' => 'views_school_faculty-block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('school');
  $export['school_node_page'] = $context;

  return $export;
}
