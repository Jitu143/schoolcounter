<?php
/**
 * @file
 * sc_f_view_faculty.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_view_faculty_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_school_faculty';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'School Faculty';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School Faculty';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['wrapper_classes'] = 'Row';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col-lg-3 col-md-4 col-sm-6 col-xs-6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_teacher_profile',
    'image_link' => '',
  );
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_ct_designation']['id'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['table'] = 'field_data_field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['field'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['label'] = '';
  $handler->display->display_options['fields']['field_ct_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Education */
  $handler->display->display_options['fields']['field_ct_education']['id'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['table'] = 'field_data_field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['field'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['label'] = '';
  $handler->display->display_options['fields']['field_ct_education']['element_label_colon'] = FALSE;
  /* Field: Content: Experience */
  $handler->display->display_options['fields']['field_ct_experience']['id'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['table'] = 'field_data_field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['field'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['label'] = '';
  $handler->display->display_options['fields']['field_ct_experience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_experience']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Weight (field_ct_weight) */
  $handler->display->display_options['sorts']['field_ct_weight_value']['id'] = 'field_ct_weight_value';
  $handler->display->display_options['sorts']['field_ct_weight_value']['table'] = 'field_data_field_ct_weight';
  $handler->display->display_options['sorts']['field_ct_weight_value']['field'] = 'field_ct_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'ct_school_faculty' => 'ct_school_faculty',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
  $handler->display->display_options['footer']['area']['content'] = '<a href = "/teachers/[field_ct_school]" target="_blank">View All</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_teacher_profile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_ct_designation']['id'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['table'] = 'field_data_field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['field'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['label'] = '';
  $handler->display->display_options['fields']['field_ct_designation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_designation']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_designation']['alter']['text'] = '<div class="designation">[field_ct_designation]</div>';
  $handler->display->display_options['fields']['field_ct_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Education */
  $handler->display->display_options['fields']['field_ct_education']['id'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['table'] = 'field_data_field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['field'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['label'] = '';
  $handler->display->display_options['fields']['field_ct_education']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_education']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_education']['alter']['text'] = '<div class="education">[field_ct_education]</div>';
  $handler->display->display_options['fields']['field_ct_education']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_education']['hide_empty'] = TRUE;
  /* Field: Content: Experience */
  $handler->display->display_options['fields']['field_ct_experience']['id'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['table'] = 'field_data_field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['field'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['label'] = '';
  $handler->display->display_options['fields']['field_ct_experience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_experience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_experience']['alter']['text'] = '<div class="experience">[field_ct_experience] Years</div>';
  $handler->display->display_options['fields']['field_ct_experience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_experience']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_experience']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ct_experience']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="teacher-block teacher-block-second">  
     [field_ct_images] 
<div class="teacher-detail">
     <h4 class="name">[title]</h4> 
   [field_ct_education]
     [field_ct_designation]
     [field_ct_experience]
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_teacher_profile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Designation */
  $handler->display->display_options['fields']['field_ct_designation']['id'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['table'] = 'field_data_field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['field'] = 'field_ct_designation';
  $handler->display->display_options['fields']['field_ct_designation']['label'] = '';
  $handler->display->display_options['fields']['field_ct_designation']['element_label_colon'] = FALSE;
  /* Field: Content: Education */
  $handler->display->display_options['fields']['field_ct_education']['id'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['table'] = 'field_data_field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['field'] = 'field_ct_education';
  $handler->display->display_options['fields']['field_ct_education']['label'] = '';
  $handler->display->display_options['fields']['field_ct_education']['element_label_colon'] = FALSE;
  /* Field: Content: Experience */
  $handler->display->display_options['fields']['field_ct_experience']['id'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['table'] = 'field_data_field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['field'] = 'field_ct_experience';
  $handler->display->display_options['fields']['field_ct_experience']['label'] = '';
  $handler->display->display_options['fields']['field_ct_experience']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_experience']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  $handler->display->display_options['path'] = 'teachers/%';
  $export['views_school_faculty'] = $view;

  return $export;
}
