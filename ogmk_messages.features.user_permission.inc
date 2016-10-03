<?php
/**
 * @file
 * ogmk_messages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ogmk_messages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create messages'.
  $permissions['create messages'] = array(
    'name' => 'create messages',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'message',
  );

  return $permissions;
}
