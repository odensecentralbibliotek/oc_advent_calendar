<?php
/**
 * @file
 * advent_calendar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function advent_calendar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_julekalender_l_ge';
  $strongarm->value = 0;
  $export['comment_anonymous_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_julekalender_l_ge';
  $strongarm->value = 0;
  $export['comment_default_mode_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_julekalender_l_ge';
  $strongarm->value = '50';
  $export['comment_default_per_page_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_julekalender_l_ge';
  $strongarm->value = 0;
  $export['comment_form_location_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_julekalender_l_ge';
  $strongarm->value = '0';
  $export['comment_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_julekalender_l_ge';
  $strongarm->value = '0';
  $export['comment_preview_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_julekalender_l_ge';
  $strongarm->value = 0;
  $export['comment_subject_field_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__julekalender_l_ge';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_julekalender_l_ge';
  $strongarm->value = '0';
  $export['language_content_type_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_julekalender_l_ge';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_julekalender_l_ge';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_julekalender_l_ge';
  $strongarm->value = array();
  $export['node_options_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_julekalender_l_ge';
  $strongarm->value = '1';
  $export['node_preview_julekalender_l_ge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_julekalender_l_ge';
  $strongarm->value = 0;
  $export['node_submitted_julekalender_l_ge'] = $strongarm;

  return $export;
}
