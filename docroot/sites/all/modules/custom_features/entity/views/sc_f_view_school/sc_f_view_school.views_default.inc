<?php
/**
 * @file
 * sc_f_view_school.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_view_school_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_school';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'School';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Address (field_ct_address) */
  $handler->display->display_options['relationships']['field_ct_address_value']['id'] = 'field_ct_address_value';
  $handler->display->display_options['relationships']['field_ct_address_value']['table'] = 'field_data_field_ct_address';
  $handler->display->display_options['relationships']['field_ct_address_value']['field'] = 'field_ct_address_value';
  $handler->display->display_options['relationships']['field_ct_address_value']['delta'] = '-1';
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
    'image_style' => 'style_school_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ct_images']['multi_type'] = 'ul';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_ct_address']['id'] = 'field_ct_address';
  $handler->display->display_options['fields']['field_ct_address']['table'] = 'field_data_field_ct_address';
  $handler->display->display_options['fields']['field_ct_address']['field'] = 'field_ct_address';
  $handler->display->display_options['fields']['field_ct_address']['label'] = '';
  $handler->display->display_options['fields']['field_ct_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_address']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ct_address']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Medium */
  $handler->display->display_options['fields']['field_ct_medium']['id'] = 'field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['table'] = 'field_data_field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['field'] = 'field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['label'] = '';
  $handler->display->display_options['fields']['field_ct_medium']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_medium']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'ct_school' => 'ct_school',
  );
  /* Filter criterion: Field collection item: Address (field_fc_town) */
  $handler->display->display_options['filters']['field_fc_town_value']['id'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['table'] = 'field_data_field_fc_town';
  $handler->display->display_options['filters']['field_fc_town_value']['field'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_town_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_town_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['operator_id'] = 'field_fc_town_value_op';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['operator'] = 'field_fc_town_value_op';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['identifier'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: City (field_fc_city) */
  $handler->display->display_options['filters']['field_fc_city_value']['id'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['table'] = 'field_data_field_fc_city';
  $handler->display->display_options['filters']['field_fc_city_value']['field'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator_id'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['identifier'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: Distt. (field_fc_distt) */
  $handler->display->display_options['filters']['field_fc_distt_value']['id'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['table'] = 'field_data_field_fc_distt';
  $handler->display->display_options['filters']['field_fc_distt_value']['field'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_distt_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['operator_id'] = 'field_fc_distt_value_op';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['operator'] = 'field_fc_distt_value_op';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['identifier'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: State (field_fc_state) */
  $handler->display->display_options['filters']['field_fc_state_value']['id'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['table'] = 'field_data_field_fc_state';
  $handler->display->display_options['filters']['field_fc_state_value']['field'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_state_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['operator_id'] = 'field_fc_state_value_op';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['operator'] = 'field_fc_state_value_op';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['identifier'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Medium (field_ct_medium) */
  $handler->display->display_options['filters']['field_ct_medium_tid']['id'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['table'] = 'field_data_field_ct_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['field'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator_id'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['label'] = 'Language Medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['identifier'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ct_medium_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_medium_tid']['vocabulary'] = 'vocab_school_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['error_message'] = FALSE;

  /* Display: School */
  $handler = $view->new_display('page', 'School', 'page');
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_school_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  /* Field: Content: Medium */
  $handler->display->display_options['fields']['field_ct_medium']['id'] = 'field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['table'] = 'field_data_field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['field'] = 'field_ct_medium';
  $handler->display->display_options['fields']['field_ct_medium']['label'] = '';
  $handler->display->display_options['fields']['field_ct_medium']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_medium']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_medium']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ct_medium']['delta_offset'] = '0';
  /* Field: Content: School Board */
  $handler->display->display_options['fields']['field_ct_school_borad']['id'] = 'field_ct_school_borad';
  $handler->display->display_options['fields']['field_ct_school_borad']['table'] = 'field_data_field_ct_school_borad';
  $handler->display->display_options['fields']['field_ct_school_borad']['field'] = 'field_ct_school_borad';
  $handler->display->display_options['fields']['field_ct_school_borad']['label'] = '';
  $handler->display->display_options['fields']['field_ct_school_borad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_school_borad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_school_borad']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ct_school_borad']['delta_offset'] = '0';
  /* Field: Field collection item: Address */
  $handler->display->display_options['fields']['field_fc_town']['id'] = 'field_fc_town';
  $handler->display->display_options['fields']['field_fc_town']['table'] = 'field_data_field_fc_town';
  $handler->display->display_options['fields']['field_fc_town']['field'] = 'field_fc_town';
  $handler->display->display_options['fields']['field_fc_town']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['fields']['field_fc_town']['label'] = '';
  $handler->display->display_options['fields']['field_fc_town']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_town']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_town']['hide_empty'] = TRUE;
  /* Field: Field collection item: City */
  $handler->display->display_options['fields']['field_fc_city']['id'] = 'field_fc_city';
  $handler->display->display_options['fields']['field_fc_city']['table'] = 'field_data_field_fc_city';
  $handler->display->display_options['fields']['field_fc_city']['field'] = 'field_fc_city';
  $handler->display->display_options['fields']['field_fc_city']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['fields']['field_fc_city']['label'] = '';
  $handler->display->display_options['fields']['field_fc_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fc_city']['alter']['text'] = ', [field_fc_city]';
  $handler->display->display_options['fields']['field_fc_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_city']['hide_empty'] = TRUE;
  /* Field: Field collection item: Distt. */
  $handler->display->display_options['fields']['field_fc_distt']['id'] = 'field_fc_distt';
  $handler->display->display_options['fields']['field_fc_distt']['table'] = 'field_data_field_fc_distt';
  $handler->display->display_options['fields']['field_fc_distt']['field'] = 'field_fc_distt';
  $handler->display->display_options['fields']['field_fc_distt']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['fields']['field_fc_distt']['label'] = '';
  $handler->display->display_options['fields']['field_fc_distt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_distt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fc_distt']['alter']['text'] = ', [field_fc_distt]';
  $handler->display->display_options['fields']['field_fc_distt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_distt']['hide_empty'] = TRUE;
  /* Field: Field collection item: State */
  $handler->display->display_options['fields']['field_fc_state']['id'] = 'field_fc_state';
  $handler->display->display_options['fields']['field_fc_state']['table'] = 'field_data_field_fc_state';
  $handler->display->display_options['fields']['field_fc_state']['field'] = 'field_fc_state';
  $handler->display->display_options['fields']['field_fc_state']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['fields']['field_fc_state']['label'] = '';
  $handler->display->display_options['fields']['field_fc_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fc_state']['alter']['text'] = ', [field_fc_state]';
  $handler->display->display_options['fields']['field_fc_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_state']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="title">[title] </div>
<div class="address">[field_fc_town][field_fc_city][field_fc_distt][field_fc_state]</div>
<div class ="medium">[field_ct_medium] Medium</div>
<div class ="board">[field_ct_school_borad] Board</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'ct_school' => 'ct_school',
  );
  /* Filter criterion: Field collection item: Address (field_fc_town) */
  $handler->display->display_options['filters']['field_fc_town_value']['id'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['table'] = 'field_data_field_fc_town';
  $handler->display->display_options['filters']['field_fc_town_value']['field'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_town_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_town_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['operator_id'] = 'field_fc_town_value_op';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['label'] = 'Address';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['operator'] = 'field_fc_town_value_op';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['identifier'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: City (field_fc_city) */
  $handler->display->display_options['filters']['field_fc_city_value']['id'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['table'] = 'field_data_field_fc_city';
  $handler->display->display_options['filters']['field_fc_city_value']['field'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator_id'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['identifier'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: Distt. (field_fc_distt) */
  $handler->display->display_options['filters']['field_fc_distt_value']['id'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['table'] = 'field_data_field_fc_distt';
  $handler->display->display_options['filters']['field_fc_distt_value']['field'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_distt_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['operator_id'] = 'field_fc_distt_value_op';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['operator'] = 'field_fc_distt_value_op';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['identifier'] = 'field_fc_distt_value';
  $handler->display->display_options['filters']['field_fc_distt_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: State (field_fc_state) */
  $handler->display->display_options['filters']['field_fc_state_value']['id'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['table'] = 'field_data_field_fc_state';
  $handler->display->display_options['filters']['field_fc_state_value']['field'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_state_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['operator_id'] = 'field_fc_state_value_op';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['operator'] = 'field_fc_state_value_op';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['identifier'] = 'field_fc_state_value';
  $handler->display->display_options['filters']['field_fc_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Medium (field_ct_medium) */
  $handler->display->display_options['filters']['field_ct_medium_tid']['id'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['table'] = 'field_data_field_ct_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['field'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator_id'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['label'] = 'Language Medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['identifier'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ct_medium_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_medium_tid']['vocabulary'] = 'vocab_school_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: School Board (field_ct_school_borad) */
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['id'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['table'] = 'field_data_field_ct_school_borad';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['field'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['operator_id'] = 'field_ct_school_borad_tid_op';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['label'] = 'School Board';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['operator'] = 'field_ct_school_borad_tid_op';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['identifier'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['vocabulary'] = 'vocab_school_board';
  $handler->display->display_options['path'] = 'school';

  /* Display: School banner */
  $handler = $view->new_display('block', 'School banner', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_images']['id'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['table'] = 'field_data_field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['field'] = 'field_ct_images';
  $handler->display->display_options['fields']['field_ct_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_images']['settings'] = array(
    'image_style' => 'style_school_banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_ct_images']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_ct_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ct_images']['multi_type'] = 'ul';
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
    'ct_school' => 'ct_school',
  );

  /* Display: School Detail */
  $handler = $view->new_display('block', 'School Detail', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Know Our School';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: About Us */
  $handler->display->display_options['fields']['field_ct_description']['id'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['table'] = 'field_data_field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['field'] = 'field_ct_description';
  $handler->display->display_options['fields']['field_ct_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_description']['hide_empty'] = TRUE;
  /* Field: Content: Our Approach */
  $handler->display->display_options['fields']['field_our_approach']['id'] = 'field_our_approach';
  $handler->display->display_options['fields']['field_our_approach']['table'] = 'field_data_field_our_approach';
  $handler->display->display_options['fields']['field_our_approach']['field'] = 'field_our_approach';
  $handler->display->display_options['fields']['field_our_approach']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_our_approach']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'ct_school' => 'ct_school',
  );
  $export['views_school'] = $view;

  return $export;
}
