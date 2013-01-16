<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function pm_feature_general_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '1',
      'module' => 'features_tags',
      'weight' => '0',
      'nodes' => array(
        'tasks' => 'tasks',
      ),
    ),
  );
}
