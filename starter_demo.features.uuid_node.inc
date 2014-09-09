<?php
/**
 * @file
 * starter_demo.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function starter_demo_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'A page',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'page',
  'language' => 'en',
  'created' => 1410272850,
  'tnid' => 0,
  'translate' => 0,
  'revision_uid' => 1,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>sdfdsfdfs</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>sdfdsfdfs</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'A page',
        'format' => NULL,
        'safe_value' => 'A page',
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 2,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1410272850,
        'changed' => 1410272850,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-09-09 16:27:30 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'An article',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'article',
  'language' => 'en',
  'created' => 1410272571,
  'tnid' => 0,
  'translate' => 0,
  'revision_uid' => 1,
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>fsdfsdfs</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>fsdfsdfs</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(),
  'field_tags' => array(),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'An article',
        'format' => NULL,
        'safe_value' => 'An article',
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'entity_id' => 1,
        'language' => 'en',
        'source' => '',
        'uid' => 1,
        'status' => 1,
        'translate' => 0,
        'created' => 1410272571,
        'changed' => 1410272571,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-09-09 16:22:51 +0200',
);
  return $nodes;
}
