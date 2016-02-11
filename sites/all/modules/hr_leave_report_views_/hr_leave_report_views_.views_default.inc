<?php
/**
 * @file
 * hr_leave_report_views_.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_leave_report_views__views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hr_leave_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HR Leave Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leave';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="hr-leave-xls"> Excel Import </a>
<a href="hr-leave-csv">CSV Import </a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Leave Type */
  $handler->display->display_options['fields']['field_leave_type']['id'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['table'] = 'field_data_field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['field'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date']['id'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_leave_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date_1']['id'] = 'field_leave_date_1';
  $handler->display->display_options['fields']['field_leave_date_1']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_leave_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Reason  */
  $handler->display->display_options['fields']['field_leave_reason']['id'] = 'field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['table'] = 'field_data_field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['field'] = 'field_leave_reason';
  /* Field: Content: Leave Status */
  $handler->display->display_options['fields']['field_leave_status']['id'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['table'] = 'field_data_field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['field'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
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
    'leave' => 'leave',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hr-leave-report';

  /* Display: Leave CSV Export */
  $handler = $view->new_display('views_data_export', 'Leave CSV Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Leave Type */
  $handler->display->display_options['fields']['field_leave_type']['id'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['table'] = 'field_data_field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['field'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date']['id'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_leave_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date_1']['id'] = 'field_leave_date_1';
  $handler->display->display_options['fields']['field_leave_date_1']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_leave_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Reason  */
  $handler->display->display_options['fields']['field_leave_reason']['id'] = 'field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['table'] = 'field_data_field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['field'] = 'field_leave_reason';
  /* Field: Content: Leave Status */
  $handler->display->display_options['fields']['field_leave_status']['id'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['table'] = 'field_data_field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['field'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'hr-leave-csv';

  /* Display: Leave Excel Export */
  $handler = $view->new_display('views_data_export', 'Leave Excel Export', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Leave Type */
  $handler->display->display_options['fields']['field_leave_type']['id'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['table'] = 'field_data_field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['field'] = 'field_leave_type';
  $handler->display->display_options['fields']['field_leave_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date']['id'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_leave_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_leave_date_1']['id'] = 'field_leave_date_1';
  $handler->display->display_options['fields']['field_leave_date_1']['table'] = 'field_data_field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['field'] = 'field_leave_date';
  $handler->display->display_options['fields']['field_leave_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_leave_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Reason  */
  $handler->display->display_options['fields']['field_leave_reason']['id'] = 'field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['table'] = 'field_data_field_leave_reason';
  $handler->display->display_options['fields']['field_leave_reason']['field'] = 'field_leave_reason';
  /* Field: Content: Leave Status */
  $handler->display->display_options['fields']['field_leave_status']['id'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['table'] = 'field_data_field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['field'] = 'field_leave_status';
  $handler->display->display_options['fields']['field_leave_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['path'] = 'hr-leave-xls';

  /* Display: Leave Block */
  $handler = $view->new_display('block', 'Leave Block', 'block_1');
  $export['hr_leave_report'] = $view;

  return $export;
}
