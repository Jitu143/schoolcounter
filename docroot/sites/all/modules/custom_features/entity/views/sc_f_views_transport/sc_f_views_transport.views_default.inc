<?php
/**
 * @file
 * sc_f_views_transport.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_views_transport_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_school_transport';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'School Transport';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'School Transport';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_fc_from' => 'field_fc_from',
    'field_fc_fare' => 'field_fc_fare',
    'field_fc_time' => 'field_fc_time',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_fc_from' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fc_fare' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fc_time' => array(
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
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'ct_transport' => 'ct_transport',
  );

  /* Display: Fare Chart */
  $handler = $view->new_display('block', 'Fare Chart', 'fare_chart');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bus fare chart';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Fare detail (field_ct_fare_detail) */
  $handler->display->display_options['relationships']['field_ct_fare_detail_value']['id'] = 'field_ct_fare_detail_value';
  $handler->display->display_options['relationships']['field_ct_fare_detail_value']['table'] = 'field_data_field_ct_fare_detail';
  $handler->display->display_options['relationships']['field_ct_fare_detail_value']['field'] = 'field_ct_fare_detail_value';
  $handler->display->display_options['relationships']['field_ct_fare_detail_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_ct_fare_detail_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: From */
  $handler->display->display_options['fields']['field_fc_from']['id'] = 'field_fc_from';
  $handler->display->display_options['fields']['field_fc_from']['table'] = 'field_data_field_fc_from';
  $handler->display->display_options['fields']['field_fc_from']['field'] = 'field_fc_from';
  $handler->display->display_options['fields']['field_fc_from']['relationship'] = 'field_ct_fare_detail_value';
  $handler->display->display_options['fields']['field_fc_from']['label'] = 'Area/Route';
  $handler->display->display_options['fields']['field_fc_from']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Fare */
  $handler->display->display_options['fields']['field_fc_fare']['id'] = 'field_fc_fare';
  $handler->display->display_options['fields']['field_fc_fare']['table'] = 'field_data_field_fc_fare';
  $handler->display->display_options['fields']['field_fc_fare']['field'] = 'field_fc_fare';
  $handler->display->display_options['fields']['field_fc_fare']['relationship'] = 'field_ct_fare_detail_value';
  $handler->display->display_options['fields']['field_fc_fare']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fc_fare']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Field collection item: Time */
  $handler->display->display_options['fields']['field_fc_time']['id'] = 'field_fc_time';
  $handler->display->display_options['fields']['field_fc_time']['table'] = 'field_data_field_fc_time';
  $handler->display->display_options['fields']['field_fc_time']['field'] = 'field_fc_time';
  $handler->display->display_options['fields']['field_fc_time']['relationship'] = 'field_ct_fare_detail_value';
  $handler->display->display_options['fields']['field_fc_time']['label'] = 'Bus arrival Time';
  $handler->display->display_options['fields']['field_fc_time']['element_label_colon'] = FALSE;

  /* Display: bus contact */
  $handler = $view->new_display('block', 'bus contact', 'bus_contact');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Department COntact (field_ct_department_contact) */
  $handler->display->display_options['relationships']['field_ct_department_contact_value']['id'] = 'field_ct_department_contact_value';
  $handler->display->display_options['relationships']['field_ct_department_contact_value']['table'] = 'field_data_field_ct_department_contact';
  $handler->display->display_options['relationships']['field_ct_department_contact_value']['field'] = 'field_ct_department_contact_value';
  $handler->display->display_options['relationships']['field_ct_department_contact_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_ct_department_contact_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Contact person name */
  $handler->display->display_options['fields']['field_fc_title']['id'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['table'] = 'field_data_field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['field'] = 'field_fc_title';
  $handler->display->display_options['fields']['field_fc_title']['relationship'] = 'field_ct_department_contact_value';
  /* Field: Field collection item: Contact details */
  $handler->display->display_options['fields']['field_fc_contact_details']['id'] = 'field_fc_contact_details';
  $handler->display->display_options['fields']['field_fc_contact_details']['table'] = 'field_data_field_fc_contact_details';
  $handler->display->display_options['fields']['field_fc_contact_details']['field'] = 'field_fc_contact_details';
  $handler->display->display_options['fields']['field_fc_contact_details']['relationship'] = 'field_ct_department_contact_value';
  $handler->display->display_options['fields']['field_fc_contact_details']['element_label_colon'] = FALSE;
  $export['views_school_transport'] = $view;

  return $export;
}
