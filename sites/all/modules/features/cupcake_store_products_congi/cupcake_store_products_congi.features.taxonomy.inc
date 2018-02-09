<?php
/**
 * @file
 * cupcake_store_products_congi.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cupcake_store_products_congi_taxonomy_default_vocabularies() {
  return array(
    'product_category' => array(
      'name' => 'Category',
      'machine_name' => 'product_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
