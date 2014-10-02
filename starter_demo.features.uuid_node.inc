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
  'title' => 'About us',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'en',
  'created' => 1410272850,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b20ced00-e5df-40cb-9a09-1f27bffd9bed',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Thomson Reuters is the world’s leading source of intelligent information for businesses and professionals</p><p>We combine industry expertise with innovative technology to deliver critical information to leading decision makers in the financial and risk, legal, tax and accounting, intellectual property and science and media markets, powered by the world\'s most trusted news organization.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '6198e6f0-3255-4ad0-b702-3db033908f48',
        'width' => 1024,
        'height' => 768,
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'About us',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1410272850,
        'entity_uuid' => 'b20ced00-e5df-40cb-9a09-1f27bffd9bed',
        'user_uuid' => 'f55aac6e-1082-4209-9abb-816c3ba20c7e',
      ),
    ),
  ),
  'date' => '2014-09-09 16:27:30 +0200',
  'user_uuid' => 'f55aac6e-1082-4209-9abb-816c3ba20c7e',
);
  $nodes[] = array(
  'title' => 'Hello world !',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'ds_switch' => '',
  'type' => 'article',
  'language' => 'en',
  'created' => 1412262489,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'da074168-3dfb-4610-adf6-4ede525d91ab',
  'body' => array(
    'en' => array(
      0 => array(
        'value' => '<p>Adding UUID support for custom content entities</p><p>Drupal\'s core entities are supported by default within the UUID module, but if you want to export content contained within custom entities, you will have to implement UUID support using their API. The documentation is not complete yet.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_image' => array(
    'und' => array(
      0 => array(
        'file_uuid' => '6198e6f0-3255-4ad0-b702-3db033908f48',
        'width' => 1024,
        'height' => 768,
      ),
    ),
  ),
  'field_tags' => array(
    'und' => array(
      0 => array(
        'tid' => '793cf8e7-1fca-4c6e-8322-b32e64596db7',
        'uuid' => '793cf8e7-1fca-4c6e-8322-b32e64596db7',
      ),
      1 => array(
        'tid' => 'a030d02f-da70-42f4-b6c8-971331e3e9ee',
        'uuid' => 'a030d02f-da70-42f4-b6c8-971331e3e9ee',
      ),
    ),
  ),
  'title_field' => array(
    'en' => array(
      0 => array(
        'value' => 'Hello world !',
        'format' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'translations' => array(
    'original' => 'en',
    'data' => array(
      'en' => array(
        'entity_type' => 'node',
        'language' => 'en',
        'source' => '',
        'status' => 1,
        'translate' => 0,
        'created' => 1412262489,
        'entity_uuid' => 'da074168-3dfb-4610-adf6-4ede525d91ab',
        'user_uuid' => 'f55aac6e-1082-4209-9abb-816c3ba20c7e',
      ),
    ),
  ),
  'date' => '2014-10-02 17:08:09 +0200',
  'user_uuid' => 'f55aac6e-1082-4209-9abb-816c3ba20c7e',
);
  return $nodes;
}
