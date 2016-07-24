<?php
/**
 * @file
 * sc_f_views_school_activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_views_school_activities_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_school_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'School Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ct_description']['id'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['table'] = 'field_data_field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['field'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['label'] = '';
  $handler->display->display_options['fields']['field_ct_description']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
    'ct_school_activities' => 'ct_school_activities',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: school */
  $handler->display->display_options['fields']['field_ct_school']['id'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['field'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['label'] = '';
  $handler->display->display_options['fields']['field_ct_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_school_activities' => 'ct_school_activities',
  );
  /* Filter criterion: Content: Activity type (field_ct_activity_type) */
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['id'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['table'] = 'field_data_field_ct_activity_type';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['field'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['operator_id'] = 'field_ct_activity_type_tid_op';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['label'] = 'Activity type';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['operator'] = 'field_ct_activity_type_tid_op';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['identifier'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['vocabulary'] = 'vocab_acitivites';
  /* Filter criterion: Field: school (field_ct_school) */
  $handler->display->display_options['filters']['field_ct_school_target_id']['id'] = 'field_ct_school_target_id';
  $handler->display->display_options['filters']['field_ct_school_target_id']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['filters']['field_ct_school_target_id']['field'] = 'field_ct_school_target_id';
  $handler->display->display_options['filters']['field_ct_school_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_school_target_id']['expose']['operator_id'] = 'field_ct_school_target_id_op';
  $handler->display->display_options['filters']['field_ct_school_target_id']['expose']['label'] = 'school';
  $handler->display->display_options['filters']['field_ct_school_target_id']['expose']['operator'] = 'field_ct_school_target_id_op';
  $handler->display->display_options['filters']['field_ct_school_target_id']['expose']['identifier'] = 'field_ct_school_target_id';
  $handler->display->display_options['filters']['field_ct_school_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'school-activities';

  /* Display: School Activites */
  $handler = $view->new_display('block', 'School Activites', 'activity');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/school-activities/%1" target="_blank">View All</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ct_logo_image']['id'] = 'field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['table'] = 'field_data_field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['field'] = 'field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_ct_logo_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_logo_image']['settings'] = array(
    'image_style' => 'style_activity_logo',
    'image_link' => 'content',
  );
  /* Field: Content: Activity type */
  $handler->display->display_options['fields']['field_ct_activity_type']['id'] = 'field_ct_activity_type';
  $handler->display->display_options['fields']['field_ct_activity_type']['table'] = 'field_data_field_ct_activity_type';
  $handler->display->display_options['fields']['field_ct_activity_type']['field'] = 'field_ct_activity_type';
  $handler->display->display_options['fields']['field_ct_activity_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_activity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_activity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_activity_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ct_activity_type']['delta_offset'] = '0';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="activity-title">[title]</div>
<div class="activity-logo">[field_ct_logo_image]</div>
<div class="activity-category">[field_ct_activity_type] Activity</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Indivdual school Page */
  $handler = $view->new_display('page', 'Indivdual school Page', 'individual_activity_page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ct_description']['id'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['table'] = 'field_data_field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['field'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['label'] = '';
  $handler->display->display_options['fields']['field_ct_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_ct_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_ct_description']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ct_school_activities' => 'ct_school_activities',
  );
  /* Filter criterion: Content: Activity type (field_ct_activity_type) */
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['id'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['table'] = 'field_data_field_ct_activity_type';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['field'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['operator_id'] = 'field_ct_activity_type_tid_op';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['label'] = 'Activity type';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['operator'] = 'field_ct_activity_type_tid_op';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['identifier'] = 'field_ct_activity_type_tid';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_activity_type_tid']['vocabulary'] = 'vocab_acitivites';
  $handler->display->display_options['path'] = 'school-activities/%';
  $export['views_school_activities'] = $view;

  return $export;
}
