<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function pm_feature_general_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_validation',
  'field_name' => 'field_assign_user',
  'type' => 'tasks',
  'trigger_values' => 
  array (
    'Validated' => 'Validated',
  ),
);
$items[] = array (
  'control_field_name' => 'field_validation',
  'field_name' => 'field_st_date',
  'type' => 'tasks',
  'trigger_values' => 
  array (
    'Validated' => 'Validated',
  ),
);
$items[] = array (
  'control_field_name' => 'field_validation',
  'field_name' => 'field_done',
  'type' => 'tasks',
  'trigger_values' => 
  array (
    'Validated' => 'Validated',
  ),
);
$items[] = array (
  'control_field_name' => 'field_validation',
  'field_name' => 'field_status',
  'type' => 'tasks',
  'trigger_values' => 
  array (
    'Validated' => 'Validated',
  ),
);
return $items;
}
