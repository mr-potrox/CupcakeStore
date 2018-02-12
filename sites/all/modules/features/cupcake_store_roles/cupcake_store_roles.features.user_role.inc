<?php
/**
 * @file
 * cupcake_store_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cupcake_store_roles_user_default_roles() {
  $roles = array();

  // Exported role: Cupcake Store regular employ.
  $roles['Cupcake Store regular employ'] = array(
    'name' => 'Cupcake Store regular employ',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
