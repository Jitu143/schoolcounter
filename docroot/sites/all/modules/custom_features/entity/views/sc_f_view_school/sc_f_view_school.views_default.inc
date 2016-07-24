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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  /* Field: Field: Image */
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
  $handler->display->display_options['filters']['field_fc_town_value']['relationship'] = 'field_ct_activity_hub_value';
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
  /* Field: Field: Image */
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'School Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Field collection item: Address (field_fc_town) */
  $handler->display->display_options['filters']['field_fc_town_value']['id'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['table'] = 'field_data_field_fc_town';
  $handler->display->display_options['filters']['field_fc_town_value']['field'] = 'field_fc_town_value';
  $handler->display->display_options['filters']['field_fc_town_value']['relationship'] = 'field_ct_address_value';
  $handler->display->display_options['filters']['field_fc_town_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_fc_town_value']['group'] = 1;
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
  $handler->display->display_options['filters']['field_fc_city_value']['group'] = 1;
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator_id'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['operator'] = 'field_fc_city_value_op';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['identifier'] = 'field_fc_city_value';
  $handler->display->display_options['filters']['field_fc_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search by Name, city, address';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_fc_town' => 'field_fc_town',
    'field_fc_city' => 'field_fc_city',
  );
  /* Filter criterion: Content: Medium (field_ct_medium) */
  $handler->display->display_options['filters']['field_ct_medium_tid']['id'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['table'] = 'field_data_field_ct_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['field'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ct_medium_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator_id'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['label'] = 'School Medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['operator'] = 'field_ct_medium_tid_op';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['identifier'] = 'field_ct_medium_tid';
  $handler->display->display_options['filters']['field_ct_medium_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ct_medium_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_medium_tid']['vocabulary'] = 'vocab_school_medium';
  $handler->display->display_options['filters']['field_ct_medium_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: School Board (field_ct_school_borad) */
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['id'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['table'] = 'field_data_field_ct_school_borad';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['field'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['operator_id'] = 'field_ct_school_borad_tid_op';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['label'] = 'School Board';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['operator'] = 'field_ct_school_borad_tid_op';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['identifier'] = 'field_ct_school_borad_tid';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ct_school_borad_tid']['vocabulary'] = 'vocab_school_board';
  $handler->display->display_options['path'] = 'school';

  /* Display: School banner */
  $handler = $view->new_display('block', 'School banner', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Calendar */
  $handler->display->display_options['fields']['field_ct_calendar']['id'] = 'field_ct_calendar';
  $handler->display->display_options['fields']['field_ct_calendar']['table'] = 'field_data_field_ct_calendar';
  $handler->display->display_options['fields']['field_ct_calendar']['field'] = 'field_ct_calendar';
  $handler->display->display_options['fields']['field_ct_calendar']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_calendar']['click_sort_column'] = 'fid';
  /* Field: Content: Careers */
  $handler->display->display_options['fields']['field_ct_careers']['id'] = 'field_ct_careers';
  $handler->display->display_options['fields']['field_ct_careers']['table'] = 'field_data_field_ct_careers';
  $handler->display->display_options['fields']['field_ct_careers']['field'] = 'field_ct_careers';
  $handler->display->display_options['fields']['field_ct_careers']['element_label_colon'] = FALSE;
  /* Field: Content: Hostel */
  $handler->display->display_options['fields']['field_ct_hostel']['id'] = 'field_ct_hostel';
  $handler->display->display_options['fields']['field_ct_hostel']['table'] = 'field_data_field_ct_hostel';
  $handler->display->display_options['fields']['field_ct_hostel']['field'] = 'field_ct_hostel';
  $handler->display->display_options['fields']['field_ct_hostel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hostel']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Field: Content: School Fees */
  $handler->display->display_options['fields']['field_ct_file']['id'] = 'field_ct_file';
  $handler->display->display_options['fields']['field_ct_file']['table'] = 'field_data_field_ct_file';
  $handler->display->display_options['fields']['field_ct_file']['field'] = 'field_ct_file';
  $handler->display->display_options['fields']['field_ct_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_file']['click_sort_column'] = 'fid';
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

  /* Display: popular schools */
  $handler = $view->new_display('block', 'popular schools', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Chairman message */
  $handler = $view->new_display('block', 'Chairman message', 'chairman');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chairman Message';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Chairman’s Message (field_ct_chairman_message) */
  $handler->display->display_options['relationships']['field_ct_chairman_message_value']['id'] = 'field_ct_chairman_message_value';
  $handler->display->display_options['relationships']['field_ct_chairman_message_value']['table'] = 'field_data_field_ct_chairman_message';
  $handler->display->display_options['relationships']['field_ct_chairman_message_value']['field'] = 'field_ct_chairman_message_value';
  $handler->display->display_options['relationships']['field_ct_chairman_message_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Photo */
  $handler->display->display_options['fields']['field_fc_student_photo']['id'] = 'field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['table'] = 'field_data_field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['field'] = 'field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['relationship'] = 'field_ct_chairman_message_value';
  $handler->display->display_options['fields']['field_fc_student_photo']['label'] = '';
  $handler->display->display_options['fields']['field_fc_student_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_student_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_student_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fc_student_photo']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fc_student_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fc_student_photo']['settings'] = array(
    'image_style' => 'style_teacher_profile',
    'image_link' => '',
  );
  /* Field: Field collection item: Message */
  $handler->display->display_options['fields']['field_fc_message']['id'] = 'field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['table'] = 'field_data_field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['field'] = 'field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['relationship'] = 'field_ct_chairman_message_value';
  $handler->display->display_options['fields']['field_fc_message']['label'] = '';
  $handler->display->display_options['fields']['field_fc_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['text'] = '[field_fc_student_photo]
[field_fc_message]';
  $handler->display->display_options['fields']['field_fc_message']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_fc_message']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_message']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fc_message']['empty_zero'] = TRUE;
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

  /* Display: Principal message */
  $handler = $view->new_display('block', 'Principal message', 'principal');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Principal Message';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Principal’s Message (field_ct_principal_message) */
  $handler->display->display_options['relationships']['field_ct_principal_message_value']['id'] = 'field_ct_principal_message_value';
  $handler->display->display_options['relationships']['field_ct_principal_message_value']['table'] = 'field_data_field_ct_principal_message';
  $handler->display->display_options['relationships']['field_ct_principal_message_value']['field'] = 'field_ct_principal_message_value';
  $handler->display->display_options['relationships']['field_ct_principal_message_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Photo */
  $handler->display->display_options['fields']['field_fc_student_photo']['id'] = 'field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['table'] = 'field_data_field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['field'] = 'field_fc_student_photo';
  $handler->display->display_options['fields']['field_fc_student_photo']['relationship'] = 'field_ct_principal_message_value';
  $handler->display->display_options['fields']['field_fc_student_photo']['label'] = '';
  $handler->display->display_options['fields']['field_fc_student_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fc_student_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_student_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fc_student_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fc_student_photo']['settings'] = array(
    'image_style' => 'style_teacher_profile',
    'image_link' => '',
  );
  /* Field: Field collection item: Message */
  $handler->display->display_options['fields']['field_fc_message']['id'] = 'field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['table'] = 'field_data_field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['field'] = 'field_fc_message';
  $handler->display->display_options['fields']['field_fc_message']['relationship'] = 'field_ct_principal_message_value';
  $handler->display->display_options['fields']['field_fc_message']['label'] = '';
  $handler->display->display_options['fields']['field_fc_message']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['text'] = '[field_fc_student_photo]
[field_fc_message]';
  $handler->display->display_options['fields']['field_fc_message']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['field_fc_message']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['field_fc_message']['element_label_colon'] = FALSE;
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

  /* Display: Academics */
  $handler = $view->new_display('block', 'Academics', 'academics');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academics And Admission Procdeure';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Academics */
  $handler->display->display_options['fields']['field_ct_academics']['id'] = 'field_ct_academics';
  $handler->display->display_options['fields']['field_ct_academics']['table'] = 'field_data_field_ct_academics';
  $handler->display->display_options['fields']['field_ct_academics']['field'] = 'field_ct_academics';
  $handler->display->display_options['fields']['field_ct_academics']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_ct_academics']['element_label_colon'] = FALSE;
  /* Field: Content: Admission Procedure */
  $handler->display->display_options['fields']['field_ct_admission_procedure']['id'] = 'field_ct_admission_procedure';
  $handler->display->display_options['fields']['field_ct_admission_procedure']['table'] = 'field_data_field_ct_admission_procedure';
  $handler->display->display_options['fields']['field_ct_admission_procedure']['field'] = 'field_ct_admission_procedure';
  $handler->display->display_options['fields']['field_ct_admission_procedure']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_ct_admission_procedure']['element_label_colon'] = FALSE;
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

  /* Display: Time table */
  $handler = $view->new_display('block', 'Time table', 'time_table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Time table';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fc_student_photo' => 'field_fc_student_photo',
    'field_fc_message' => 'field_fc_message',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fc_student_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fc_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Time Table (field_ct_time_table) */
  $handler->display->display_options['relationships']['field_ct_time_table_value']['id'] = 'field_ct_time_table_value';
  $handler->display->display_options['relationships']['field_ct_time_table_value']['table'] = 'field_data_field_ct_time_table';
  $handler->display->display_options['relationships']['field_ct_time_table_value']['field'] = 'field_ct_time_table_value';
  $handler->display->display_options['relationships']['field_ct_time_table_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Class */
  $handler->display->display_options['fields']['field_fc_class']['id'] = 'field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['table'] = 'field_data_field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['field'] = 'field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['relationship'] = 'field_ct_time_table_value';
  /* Field: Field collection item: Time Table File */
  $handler->display->display_options['fields']['field_fc_time_table_file']['id'] = 'field_fc_time_table_file';
  $handler->display->display_options['fields']['field_fc_time_table_file']['table'] = 'field_data_field_fc_time_table_file';
  $handler->display->display_options['fields']['field_fc_time_table_file']['field'] = 'field_fc_time_table_file';
  $handler->display->display_options['fields']['field_fc_time_table_file']['relationship'] = 'field_ct_time_table_value';
  $handler->display->display_options['fields']['field_fc_time_table_file']['label'] = 'Time Table';
  $handler->display->display_options['fields']['field_fc_time_table_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Class (field_fc_class) */
  $handler->display->display_options['sorts']['field_fc_class_value']['id'] = 'field_fc_class_value';
  $handler->display->display_options['sorts']['field_fc_class_value']['table'] = 'field_data_field_fc_class';
  $handler->display->display_options['sorts']['field_fc_class_value']['field'] = 'field_fc_class_value';
  $handler->display->display_options['sorts']['field_fc_class_value']['relationship'] = 'field_ct_time_table_value';
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

  /* Display: Syllabus */
  $handler = $view->new_display('block', 'Syllabus', 'syllabus');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Syllabus';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fc_student_photo' => 'field_fc_student_photo',
    'field_fc_message' => 'field_fc_message',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fc_student_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fc_message' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Syllabus (field_ct_syllabus) */
  $handler->display->display_options['relationships']['field_ct_syllabus_value']['id'] = 'field_ct_syllabus_value';
  $handler->display->display_options['relationships']['field_ct_syllabus_value']['table'] = 'field_data_field_ct_syllabus';
  $handler->display->display_options['relationships']['field_ct_syllabus_value']['field'] = 'field_ct_syllabus_value';
  $handler->display->display_options['relationships']['field_ct_syllabus_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Class */
  $handler->display->display_options['fields']['field_fc_class']['id'] = 'field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['table'] = 'field_data_field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['field'] = 'field_fc_class';
  $handler->display->display_options['fields']['field_fc_class']['relationship'] = 'field_ct_syllabus_value';
  /* Field: Field collection item: Syllabus File */
  $handler->display->display_options['fields']['field_fc_syllabus_file']['id'] = 'field_fc_syllabus_file';
  $handler->display->display_options['fields']['field_fc_syllabus_file']['table'] = 'field_data_field_fc_syllabus_file';
  $handler->display->display_options['fields']['field_fc_syllabus_file']['field'] = 'field_fc_syllabus_file';
  $handler->display->display_options['fields']['field_fc_syllabus_file']['relationship'] = 'field_ct_syllabus_value';
  $handler->display->display_options['fields']['field_fc_syllabus_file']['label'] = 'Syllabus';
  $handler->display->display_options['fields']['field_fc_syllabus_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Class (field_fc_class) */
  $handler->display->display_options['sorts']['field_fc_class_value']['id'] = 'field_fc_class_value';
  $handler->display->display_options['sorts']['field_fc_class_value']['table'] = 'field_data_field_fc_class';
  $handler->display->display_options['sorts']['field_fc_class_value']['field'] = 'field_fc_class_value';
  $handler->display->display_options['sorts']['field_fc_class_value']['relationship'] = 'field_ct_syllabus_value';
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

  /* Display: Contact Us */
  $handler = $view->new_display('page', 'Contact Us', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Us';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Contact details */
  $handler->display->display_options['fields']['field_ct_contact_details']['id'] = 'field_ct_contact_details';
  $handler->display->display_options['fields']['field_ct_contact_details']['table'] = 'field_data_field_ct_contact_details';
  $handler->display->display_options['fields']['field_ct_contact_details']['field'] = 'field_ct_contact_details';
  $handler->display->display_options['fields']['field_ct_contact_details']['label'] = '';
  $handler->display->display_options['fields']['field_ct_contact_details']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
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
  $handler->display->display_options['path'] = 'contact-us/%';
  $export['views_school'] = $view;

  return $export;
}
