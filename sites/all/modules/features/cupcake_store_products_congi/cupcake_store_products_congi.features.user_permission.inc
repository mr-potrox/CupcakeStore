<?php
/**
 * @file
 * cupcake_store_products_congi.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cupcake_store_products_congi_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'create paragraph content ingredients'.
  $permissions['create paragraph content ingredients'] = array(
    'name' => 'create paragraph content ingredients',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'delete paragraph content ingredients'.
  $permissions['delete paragraph content ingredients'] = array(
    'name' => 'delete paragraph content ingredients',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'update paragraph content ingredients'.
  $permissions['update paragraph content ingredients'] = array(
    'name' => 'update paragraph content ingredients',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'view paragraph content ingredients'.
  $permissions['view paragraph content ingredients'] = array(
    'name' => 'view paragraph content ingredients',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  return $permissions;
}
