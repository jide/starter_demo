<?php
/**
 * @file
 * starter_demo.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function starter_demo_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'A first tag',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '793cf8e7-1fca-4c6e-8322-b32e64596db7',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A first tag',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1412263440,
          'entity_uuid' => '793cf8e7-1fca-4c6e-8322-b32e64596db7',
          'user_uuid' => 'ccf9fe1b-f208-4e95-a59c-bdc088e857bf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'A second tag',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'a030d02f-da70-42f4-b6c8-971331e3e9ee',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(),
    'name_field' => array(
      'en' => array(
        0 => array(
          'value' => 'A second tag',
          'format' => NULL,
        ),
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'entity_type' => 'taxonomy_term',
          'language' => 'en',
          'source' => '',
          'status' => 1,
          'translate' => 0,
          'created' => 1412263440,
          'entity_uuid' => 'a030d02f-da70-42f4-b6c8-971331e3e9ee',
          'user_uuid' => 'ccf9fe1b-f208-4e95-a59c-bdc088e857bf',
        ),
      ),
    ),
    'metatags' => array(),
  );
  return $terms;
}
