<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function pm_feature_general_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-my-menu
  $menus['menu-my-menu'] = array(
    'menu_name' => 'menu-my-menu',
    'title' => 'My Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Menu');


  return $menus;
}
