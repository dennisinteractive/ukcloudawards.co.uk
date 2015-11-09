<?php
/**
 * @file
 * sponsors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sponsors_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sponsors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sponsors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['list']['element_type'] = 'ul';
  $handler->display->display_options['style_options']['row']['element_type'] = 'li';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'affiliation';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'affiliation' => 'affiliation',
    'tags' => 0,
  );
  /* Field: Content: Sponsor Logos */
  $handler->display->display_options['fields']['field_sponsor_logos']['id'] = 'field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['table'] = 'field_data_field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['field'] = 'field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logos']['alter']['text'] = '[field_sponsor_logos]';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_sponsor_logos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'sponsors' => 'sponsors',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Partner';

  /* Display: Sponsor Logos */
  $handler = $view->new_display('block', 'Sponsor Logos', 'sponsor_block');
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
    'sponsors' => 'sponsors',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Sponsor';

  /* Display: Our Partners */
  $handler = $view->new_display('block', 'Our Partners', 'partner_block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sponsor Logos */
  $handler->display->display_options['fields']['field_sponsor_logos']['id'] = 'field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['table'] = 'field_data_field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['field'] = 'field_sponsor_logos';
  $handler->display->display_options['fields']['field_sponsor_logos']['label'] = '';
  $handler->display->display_options['fields']['field_sponsor_logos']['alter']['text'] = '[field_sponsor_logos]';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'small_teaser',
  );
  $handler->display->display_options['fields']['field_sponsor_logos']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sponsor_logos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_sponsor_logos']['multi_type'] = 'ul';
  $export['sponsors'] = $view;

  return $export;
}
