<?php
/**
 * @file
 * sc_f_view_school_result.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_view_school_result_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_students_result';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Students Result';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Prouds';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ct_school_target_id']['id'] = 'field_ct_school_target_id';
  $handler->display->display_options['relationships']['field_ct_school_target_id']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['relationships']['field_ct_school_target_id']['field'] = 'field_ct_school_target_id';
  $handler->display->display_options['relationships']['field_ct_school_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Result Year (field_ct_result_year) */
  $handler->display->display_options['sorts']['field_ct_result_year_value']['id'] = 'field_ct_result_year_value';
  $handler->display->display_options['sorts']['field_ct_result_year_value']['table'] = 'field_data_field_ct_result_year';
  $handler->display->display_options['sorts']['field_ct_result_year_value']['field'] = 'field_ct_result_year_value';
  $handler->display->display_options['sorts']['field_ct_result_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Percentage (field_ct_percentage) */
  $handler->display->display_options['sorts']['field_ct_percentage_value']['id'] = 'field_ct_percentage_value';
  $handler->display->display_options['sorts']['field_ct_percentage_value']['table'] = 'field_data_field_ct_percentage';
  $handler->display->display_options['sorts']['field_ct_percentage_value']['field'] = 'field_ct_percentage_value';
  $handler->display->display_options['sorts']['field_ct_percentage_value']['order'] = 'DESC';
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
    'ct_school_results' => 'ct_school_results',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['column_classes'] = 'views-column col col-xs-6 col-sm-6 col-md-4 col-lg-4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_ct_subject']['id'] = 'field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['table'] = 'field_data_field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['field'] = 'field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['label'] = '';
  $handler->display->display_options['fields']['field_ct_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_subject']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ct_subject']['element_wrapper_class'] = 'subject';
  $handler->display->display_options['fields']['field_ct_subject']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_subject']['empty_zero'] = TRUE;
  /* Field: Content: Percentage */
  $handler->display->display_options['fields']['field_ct_percentage']['id'] = 'field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['table'] = 'field_data_field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['field'] = 'field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['label'] = '';
  $handler->display->display_options['fields']['field_ct_percentage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['alter']['text'] = '<div class="percent">[field_ct_percentage]%</div>';
  $handler->display->display_options['fields']['field_ct_percentage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_percentage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result Year */
  $handler->display->display_options['fields']['field_ct_result_year']['id'] = 'field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['table'] = 'field_data_field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['field'] = 'field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['label'] = '';
  $handler->display->display_options['fields']['field_ct_result_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_result_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_result_year']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ct_result_year']['element_wrapper_class'] = 'year';
  $handler->display->display_options['fields']['field_ct_result_year']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_result_year']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ct_result_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_ct_class_result']['id'] = 'field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['table'] = 'field_data_field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['field'] = 'field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['label'] = '';
  $handler->display->display_options['fields']['field_ct_class_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_class_result']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_class_result']['alter']['text'] = '<div class="class">[field_ct_class_result]th</div>';
  $handler->display->display_options['fields']['field_ct_class_result']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_class_result']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_class_result']['empty_zero'] = TRUE;
  /* Field: Field: school */
  $handler->display->display_options['fields']['field_ct_school']['id'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['field'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['label'] = '';
  $handler->display->display_options['fields']['field_ct_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_single_image']['id'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['table'] = 'field_data_field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['field'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['label'] = '';
  $handler->display->display_options['fields']['field_ct_single_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['alter']['text'] = '<div class="profile-photo">[field_ct_single_image]</div>';
  $handler->display->display_options['fields']['field_ct_single_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_single_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_single_image']['settings'] = array(
    'image_style' => 'style_student_profile',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="flip-container" ontouchstart="this.classList.toggle(\'hover\');">
	<div class="flipper">
		<div class="front">
			[field_ct_single_image]
                     <div class="st-info">
                      <div class="name">[title]</div>
                      <div class="per-class">
                        [field_ct_class_result]
                       [field_ct_percentage]
                     </div>
</div>
		</div>
		<div class="back">
			<div class="name">[title]</div>
                      [field_ct_class_result]
                       <div class="year">Year: [field_ct_result_year]</div>
                       <div class="school">[field_ct_school]</div>
                       <div class="subject">Subject: [field_ct_subject]</div>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['path'] = 'students-result/%';

  /* Display: Student results */
  $handler = $view->new_display('block', 'Student results', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
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
  $handler->display->display_options['footer']['area']['content'] = '<a href = "/students-result/%1">View All Results</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_single_image']['id'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['table'] = 'field_data_field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['field'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['label'] = '';
  $handler->display->display_options['fields']['field_ct_single_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_single_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_single_image']['settings'] = array(
    'image_style' => 'style_student_profile',
    'image_link' => '',
  );
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
  /* Field: Field: school */
  $handler->display->display_options['fields']['field_ct_school']['id'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['table'] = 'field_data_field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['field'] = 'field_ct_school';
  $handler->display->display_options['fields']['field_ct_school']['label'] = '';
  $handler->display->display_options['fields']['field_ct_school']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_school']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Subject */
  $handler->display->display_options['fields']['field_ct_subject']['id'] = 'field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['table'] = 'field_data_field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['field'] = 'field_ct_subject';
  $handler->display->display_options['fields']['field_ct_subject']['label'] = '';
  $handler->display->display_options['fields']['field_ct_subject']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_subject']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_subject']['alter']['text'] = '<div class="subject">Subject: [field_ct_subject]</div>';
  $handler->display->display_options['fields']['field_ct_subject']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_subject']['hide_empty'] = TRUE;
  /* Field: Content: Percentage */
  $handler->display->display_options['fields']['field_ct_percentage']['id'] = 'field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['table'] = 'field_data_field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['field'] = 'field_ct_percentage';
  $handler->display->display_options['fields']['field_ct_percentage']['label'] = '';
  $handler->display->display_options['fields']['field_ct_percentage']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['alter']['text'] = '<div class="result">Percent: [field_ct_percentage]%</div>';
  $handler->display->display_options['fields']['field_ct_percentage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_percentage']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ct_percentage']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Result Year */
  $handler->display->display_options['fields']['field_ct_result_year']['id'] = 'field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['table'] = 'field_data_field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['field'] = 'field_ct_result_year';
  $handler->display->display_options['fields']['field_ct_result_year']['label'] = '';
  $handler->display->display_options['fields']['field_ct_result_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_result_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_result_year']['alter']['text'] = '<div class="year">Year: [field_ct_result_year] </div>';
  $handler->display->display_options['fields']['field_ct_result_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_result_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Class */
  $handler->display->display_options['fields']['field_ct_class_result']['id'] = 'field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['table'] = 'field_data_field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['field'] = 'field_ct_class_result';
  $handler->display->display_options['fields']['field_ct_class_result']['label'] = '';
  $handler->display->display_options['fields']['field_ct_class_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_class_result']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_class_result']['alter']['text'] = '<div class="class">Class: [field_ct_class_result]</div>';
  $handler->display->display_options['fields']['field_ct_class_result']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_class_result']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class ="student-result">
<div class="title">Name: [title]</div>
[field_ct_subject]
[field_ct_percentage]
[field_ct_result_year]
[field_ct_class_result]
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
    'ct_school_results' => 'ct_school_results',
  );
  $export['views_students_result'] = $view;

  return $export;
}
