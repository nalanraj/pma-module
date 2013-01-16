<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function pm_feature_general_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:my_projects
  $menu_links['navigation:my_projects'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'my_projects',
    'router_path' => 'my_projects',
    'link_title' => 'My Projects',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Projects');


  return $menu_links;
}
