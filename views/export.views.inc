<?php

/**
* Implementation of hook_views_handlers()
*/
function export_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'export') . '/views',
    ),
    'handlers' => array(
      'views_handler_field_node_link_export' => array(
        'parent' => 'views_handler_field_node_link',
      ),
    ),
  );
}

/**
* Implementation of hook_views_data_alter()
*/
function export_views_data_alter(&$views_data) {
  $views_data['node']['export_node'] = array(
    'field' => array(
      'title' => t('export link'),
      'help' => t('Provide a simple link to export the node.'),
      'handler' => 'views_handler_field_node_link_export',
    ),
  );
}

