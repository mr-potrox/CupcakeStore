<?php
/**
 * @file
 * cupcake_store_products_congi.features.inc
 */

/**
 * Implements hook_default_commerce_discount().
 */
function cupcake_store_products_congi_default_commerce_discount() {
  $items = array();
  $items['discount_cupcake_type_1_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_1_discount",
    "label" : "Cupcake type 1 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 1 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "25.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "none" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_1", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_2_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_2_discount",
    "label" : "Cupcake type 2 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 2 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "15.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "none" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_2", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_3_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_3_discount",
    "label" : "Cupcake type 3 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 3 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "5.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "none" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "product", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_4_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_4_discount",
    "label" : "Cupcake type 4 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 4 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "30.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_4", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_5_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_5_discount",
    "label" : "Cupcake type 5 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 5 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "50.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_5", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_6_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_6_discount",
    "label" : "Cupcake type 6 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 6 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "60.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_6", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  $items['discount_cupcake_type_7_discount'] = entity_import('commerce_discount', '{
    "name" : "discount_cupcake_type_7_discount",
    "label" : "Cupcake type 7 discount",
    "type" : "product_discount",
    "status" : "1",
    "component_title" : "Cupcake type 6 discount",
    "sort_order" : "10",
    "commerce_discount_offer" : {
      "type" : "percentage",
      "commerce_percentage" : { "und" : [ { "value" : "70.00" } ] }
    },
    "commerce_compatibility_strategy" : { "und" : [ { "value" : "any" } ] },
    "commerce_compatibility_selection" : [],
    "commerce_discount_date" : [],
    "inline_conditions" : { "und" : [
        {
          "condition_name" : "commerce_product_has_type",
          "condition_settings" : { "type" : "cupcake_type_7", "condition_logic_operator" : null },
          "condition_negate" : 0
        }
      ]
    },
    "discount_usage_per_person" : [],
    "discount_usage_limit" : []
  }');
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function cupcake_store_products_congi_commerce_product_default_types() {
  $items = array(
    'cupcake_type_1' => array(
      'type' => 'cupcake_type_1',
      'name' => 'Cupcake type 1',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'cupcake_type_2' => array(
      'type' => 'cupcake_type_2',
      'name' => 'Cupcake type 2',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'cupcake_type_4' => array(
      'type' => 'cupcake_type_4',
      'name' => 'Cupcake type 4',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'cupcake_type_5' => array(
      'type' => 'cupcake_type_5',
      'name' => 'Cupcake type 5',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'cupcake_type_6' => array(
      'type' => 'cupcake_type_6',
      'name' => 'Cupcake type 6',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'cupcake_type_7' => array(
      'type' => 'cupcake_type_7',
      'name' => 'Cupcake type 7',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Cupcake type 3',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function cupcake_store_products_congi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cupcake_store_products_congi_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Cupcake'),
      'base' => 'node_content',
      'description' => t('Use cupcake content type for adding product pages to your store'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function cupcake_store_products_congi_paragraphs_info() {
  $items = array(
    'ingredients' => array(
      'name' => 'Ingredients',
      'bundle' => 'ingredients',
      'locked' => '1',
    ),
  );
  return $items;
}
