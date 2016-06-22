<?php
/**
 * @file
 * sc_f_views_about_us.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_views_about_us_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_about_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About us & Our Approach';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ct_description']['id'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['table'] = 'field_data_field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['field'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['label'] = 'About Us';
  $handler->display->display_options['fields']['field_ct_description']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_ct_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ct_description']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_ct_description']['element_label_colon'] = FALSE;
  /* Field: Content: Our Approach */
  $handler->display->display_options['fields']['field_ct_our_approach']['id'] = 'field_ct_our_approach';
  $handler->display->display_options['fields']['field_ct_our_approach']['table'] = 'field_data_field_ct_our_approach';
  $handler->display->display_options['fields']['field_ct_our_approach']['field'] = 'field_ct_our_approach';
  $handler->display->display_options['fields']['field_ct_our_approach']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_ct_our_approach']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ct_our_approach']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_ct_our_approach']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href = "[path]" target="_blank">Read More</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: school (field_ct_school) */
  $handler->display->display_options['arguments']['field_ct_school_target_id']['id'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['field'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_about_us' => 'ct_about_us',
  );

  /* Display: About Us */
  $handler = $view->new_display('block', 'About Us', 'about_us');
  $export['views_about_us'] = $view;

  return $export;
}
