<?php
/**
 * @file
 * sc_f_view_home_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sc_f_view_home_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_home_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Home page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'sc_queue_home_page' => 'sc_queue_home_page',
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
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_ct_single_image']['id'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['table'] = 'field_data_field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['field'] = 'field_ct_single_image';
  $handler->display->display_options['fields']['field_ct_single_image']['label'] = '';
  $handler->display->display_options['fields']['field_ct_single_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_single_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_single_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_single_image']['settings'] = array(
    'image_style' => 'style_school_banner',
    'image_link' => '',
  );
  /* Field: Content: Image text */
  $handler->display->display_options['fields']['field_ct_image_text']['id'] = 'field_ct_image_text';
  $handler->display->display_options['fields']['field_ct_image_text']['table'] = 'field_data_field_ct_image_text';
  $handler->display->display_options['fields']['field_ct_image_text']['field'] = 'field_ct_image_text';
  $handler->display->display_options['fields']['field_ct_image_text']['label'] = '';
  $handler->display->display_options['fields']['field_ct_image_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_image_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_image_text']['hide_empty'] = TRUE;
  /* Field: Content: website link */
  $handler->display->display_options['fields']['field_ct_link']['id'] = 'field_ct_link';
  $handler->display->display_options['fields']['field_ct_link']['table'] = 'field_data_field_ct_link';
  $handler->display->display_options['fields']['field_ct_link']['field'] = 'field_ct_link';
  $handler->display->display_options['fields']['field_ct_link']['label'] = '';
  $handler->display->display_options['fields']['field_ct_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_link']['alter']['text'] = '<div class="button-action">
  <a href="[field_ct_link]" class="button primary rounded large">Visit Us</a>
</div>';
  $handler->display->display_options['fields']['field_ct_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ct_link']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_ct_single_image]
<div class="container">
<div class="slider-content">
  <div class="desc">
  <h2>[title]</h2>
  <p>[field_ct_image_text]</p>
</div>
[field_ct_link] 
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'ct_school' => 'ct_school',
  );

  /* Display: Home page block */
  $handler = $view->new_display('block', 'Home page block', 'block');
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
    'ct_home_page' => 'ct_home_page',
  );

  /* Display: Our Latest Schools */
  $handler = $view->new_display('block', 'Our Latest Schools', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Latest Schools';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'queue_our_latest_schools' => 'queue_our_latest_schools',
    'sc_queue_home_page' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_ct_logo_image']['id'] = 'field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['table'] = 'field_data_field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['field'] = 'field_ct_logo_image';
  $handler->display->display_options['fields']['field_ct_logo_image']['label'] = '';
  $handler->display->display_options['fields']['field_ct_logo_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_logo_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_logo_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_logo_image']['settings'] = array(
    'image_style' => 'style_logo_image',
    'image_link' => 'content',
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
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="logo">[field_ct_logo_image]</div>
<div class="title">[title]</div>';
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
  $export['views_home_page'] = $view;

  return $export;
}
