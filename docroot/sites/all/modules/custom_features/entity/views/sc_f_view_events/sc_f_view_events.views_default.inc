<?php
/**
 * @file
 * sc_f_view_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_view_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'row';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ct_events' => 'ct_events',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_ct_date']['id'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['field'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: school (field_ct_school) */
  $handler->display->display_options['arguments']['field_ct_school_target_id']['id'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['field'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'events/%';

  /* Display: School event */
  $handler = $view->new_display('block', 'School event', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'row ';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-12 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href = "/teachers/[field_ct_school]" target="_blank">View All</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_ct_date']['id'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['field'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field: school */
  $handler->display->display_options['fields']['field_ct_school']['id'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['field'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['label'] = '';
  $handler->display->display_options['fields']['field_ct_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_ct_school']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Field: school (field_ct_school) */
  $handler->display->display_options['arguments']['field_ct_school_target_id']['id'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['field'] = 'field_ct_school_target_id';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ct_school_target_id']['summary_options']['items_per_page'] = '25';
  $export['views_events'] = $view;

  return $export;
}
