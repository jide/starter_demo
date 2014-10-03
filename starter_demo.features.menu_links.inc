<?php
/**
 * @file
 * starter_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function starter_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_a-propos:node/1
  $menu_links['main-menu_a-propos:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'A propos',
    'options' => array(
      'identifier' => 'main-menu_a-propos:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_acualits:articles
  $menu_links['main-menu_acualits:articles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Acualités',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_acualits:articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:eform/submit/contact
  $menu_links['main-menu_contact:eform/submit/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/contact',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Contact',
    'options' => array(
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:eform/submit/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A propos');
  t('Acualités');
  t('Contact');


  return $menu_links;
}
