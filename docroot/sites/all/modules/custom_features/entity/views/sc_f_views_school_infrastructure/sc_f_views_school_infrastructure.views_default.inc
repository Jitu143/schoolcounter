<?php
/**
 * @file
 * sc_f_views_school_infrastructure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_views_school_infrastructure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_school_infrastructure';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'School Infrastructure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School Infrastructure';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Infrastructure (field_ct_infrastructure) */
  $handler->display->display_options['relationships']['field_ct_infrastructure_value']['id'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['relationships']['field_ct_infrastructure_value']['table'] = 'field_data_field_ct_infrastructure';
  $handler->display->display_options['relationships']['field_ct_infrastructure_value']['field'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['relationships']['field_ct_infrastructure_value']['delta'] = '-1';
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
    'ct_school_infrastructure' => 'ct_school_infrastructure',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_fc_title']['id'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['table'] = 'field_data_field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['field'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['relationship'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['fields']['field_fc_title']['label'] = '';
  $handler->display->display_options['fields']['field_fc_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_fc_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_fc_description']['id'] = 'field_fc_description';
  $handler->display->display_options['fields']['field_fc_description']['table'] = 'field_data_field_fc_description';
  $handler->display->display_options['fields']['field_fc_description']['field'] = 'field_fc_description';
  $handler->display->display_options['fields']['field_fc_description']['relationship'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['fields']['field_fc_description']['label'] = '';
  $handler->display->display_options['fields']['field_fc_description']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_fc_image']['id'] = 'field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['table'] = 'field_data_field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['field'] = 'field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['relationship'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['fields']['field_fc_image']['label'] = '';
  $handler->display->display_options['fields']['field_fc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fc_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  $handler->display->display_options['path'] = 'school-infrastructure/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/school-infrastructure/[field_ct_school]" target="_blank">View All</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_fc_title']['id'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['table'] = 'field_data_field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['field'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['relationship'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['fields']['field_fc_title']['label'] = '';
  $handler->display->display_options['fields']['field_fc_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_fc_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_fc_image']['id'] = 'field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['table'] = 'field_data_field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['field'] = 'field_fc_image';
  $handler->display->display_options['fields']['field_fc_image']['relationship'] = 'field_ct_infrastructure_value';
  $handler->display->display_options['fields']['field_fc_image']['label'] = '';
  $handler->display->display_options['fields']['field_fc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fc_image']['settings'] = array(
    'image_style' => 'style_school_infrastructure',
    'image_link' => '',
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
  $export['views_school_infrastructure'] = $view;

  return $export;
}
