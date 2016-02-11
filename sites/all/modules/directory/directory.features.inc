<?php
/**
 * @file
 * directory.features.inc
 */

/**
 * Implements hook_node_info().
 */
function directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
