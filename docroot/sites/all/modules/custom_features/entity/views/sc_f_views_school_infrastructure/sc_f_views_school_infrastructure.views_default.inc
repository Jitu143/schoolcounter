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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_school_infrastructure',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_school_infrastructure',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="infrastructure-title">[title]</div>
<div class="infrastructure-image">[field_ct_images]</div>';
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

  /* Display: Gallery */
  $handler = $view->new_display('block', 'Gallery', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_infrastructure_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = 'All';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['views_school_infrastructure'] = $view;

  return $export;
}
