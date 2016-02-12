<?php
/**
 * @file
 * time_in_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function time_in_content_type_node_info() {
  $items = array(
    'time_in' => array(
      'name' => t('Time in'),
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
