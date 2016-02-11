<?php
/**
 * @file
 * leave.features.inc
 */

/**
 * Implements hook_node_info().
 */
function leave_node_info() {
  $items = array(
    'leave' => array(
      'name' => t('Leave'),
      'base' => 'node_content',
      'description' => t('Form when you want to apply for leave'),
      'has_title' => '1',
      'title_label' => t('Subject'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
