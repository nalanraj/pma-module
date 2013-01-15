<?php

/**
 * Implementation of hook_user_default_roles().
 */
function pm_feature_general_user_default_roles() {
  $roles = array();

  // Exported role: project1
  $roles['project1'] = array(
    'name' => 'project1',
  );

  // Exported role: project2
  $roles['project2'] = array(
    'name' => 'project2',
  );

  // Exported role: userprj1
  $roles['userprj1'] = array(
    'name' => 'userprj1',
  );

  // Exported role: userprj2
  $roles['userprj2'] = array(
    'name' => 'userprj2',
  );

  return $roles;
}
