<?php
/**
 * @file
 * advent_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function advent_calendar_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function advent_calendar_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function advent_calendar_node_info() {
  $items = array(
    'julekalender_l_ge' => array(
      'name' => t('Julekalender låge'),
      'base' => 'node_content',
      'description' => t('En kalender låge til julekalenderen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
