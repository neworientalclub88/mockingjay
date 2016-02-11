<?php
/**
 * @file
 * daily_report.features.inc
 */

/**
 * Implements hook_node_info().
 */
function daily_report_node_info() {
  $items = array(
    'daily_report' => array(
      'name' => t('Daily Report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
