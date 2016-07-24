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
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-xs-6 col-sm-4 col-md-4 col-lg-4';
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_event_landing',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_ct_date']['id'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['field'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ct_images]
<div class="content-info">
<div class="title"><h5>[title]</h5></div>
<div class="date">[field_ct_date]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date (field_ct_date) */
  $handler->display->display_options['sorts']['field_ct_date_value']['id'] = 'field_ct_date_value';
  $handler->display->display_options['sorts']['field_ct_date_value']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['sorts']['field_ct_date_value']['field'] = 'field_ct_date_value';
  $handler->display->display_options['sorts']['field_ct_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href = "/events/[field_ct_school]" target="_blank">View All</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
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
    'image_style' => 'style_event_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_ct_date']['id'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['field'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['label'] = '';
  $handler->display->display_options['fields']['field_ct_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_date']['settings'] = array(
    'format_type' => 'd_m_y_date_type',
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="event-container">
[field_ct_images]
<div class="event-textbox">
<h5 class="title">[title]</h5>
<div class="event-date">[field_ct_date]</div>
<div class="read-more"><a href="[path]" target="_blank">Read More</a></div>
</div>
</div>';
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

  /* Display: School event node page block */
  $handler = $view->new_display('block', 'School event node page block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_ct_date']['id'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['table'] = 'field_data_field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['field'] = 'field_ct_date';
  $handler->display->display_options['fields']['field_ct_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_ct_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_date']['settings'] = array(
    'format_type' => 'd_m_y_date_type',
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
  $handler->display->display_options['fields']['field_ct_school']['label'] = 'School';
  $handler->display->display_options['fields']['field_ct_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_ct_description']['id'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['table'] = 'field_data_field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['field'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_event_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = 'All';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ct_images']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slide-for">[field_ct_images]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $export['views_events'] = $view;

  return $export;
}
