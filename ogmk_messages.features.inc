<?php
/**
 * @file
 * ogmk_messages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_messages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function ogmk_messages_default_message_type() {
  $items = array();
  $items['ogmk_comment_published'] = entity_import('message_type', '{
    "name" : "ogmk_comment_published",
    "description" : "Comment published",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A new comment has been published on the [site:name] Blog",
          "format" : "ogmk_html",
          "safe_value" : "A new comment has been published on the [site:name] Blog"
        },
        {
          "value" : "\\u003Cp\\u003EA new comment has been published on the [site:name] Blog, in the post with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, \\u003Ca href=\\u0022[message:field-message-comment-ref:url:absolute]\\u0022\\u003Eclick here\\u003C\\/a\\u003E.\\u003C\\/p\\u003E",
          "format" : "ogmk_html",
          "safe_value" : "\\u003Cp\\u003EA new comment has been published on the [site:name] Blog, in the post with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, \\u003Ca href=\\u0022[message:field-message-comment-ref:url:absolute]\\u0022\\u003Eclick here\\u003C\\/a\\u003E.\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['ogmk_post_published'] = entity_import('message_type', '{
    "name" : "ogmk_post_published",
    "description" : "Post published",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A new post has been published on the [site:name] Blog",
          "format" : "ogmk_html",
          "safe_value" : "A new post has been published on the [site:name] Blog"
        },
        {
          "value" : "\\u003Cp\\u003EA new post has been published on the [site:name] Blog with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E",
          "format" : "ogmk_html",
          "safe_value" : "\\u003Cp\\u003EA new post has been published on the [site:name] Blog with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['ogmk_product_published'] = entity_import('message_type', '{
    "name" : "ogmk_product_published",
    "description" : "Product published",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A new product has been published on the [site:name]\\r\\n",
          "format" : "ogmk_html",
          "safe_value" : "A new product has been published on the [site:name]\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new product has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E",
          "format" : "ogmk_html",
          "safe_value" : "\\u003Cp\\u003EA new product has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['ogmk_review_published'] = entity_import('message_type', '{
    "name" : "ogmk_review_published",
    "description" : "Review published",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A new review has been published on the [site:name]\\r\\n",
          "format" : "ogmk_html",
          "safe_value" : "A new review has been published on the [site:name]\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new review has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E",
          "format" : "ogmk_html",
          "safe_value" : "\\u003Cp\\u003EA new review has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E"
        }
      ]
    }
  }');
  $items['ogmk_shop_published'] = entity_import('message_type', '{
    "name" : "ogmk_shop_published",
    "description" : "Shop published",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "en",
    "arguments" : null,
    "message_text" : { "en" : [
        {
          "value" : "A new shop has been published on the [site:name]",
          "format" : "ogmk_html",
          "safe_value" : "A new shop has been published on the [site:name]"
        },
        {
          "value" : "\\u003Cp\\u003EA new shop has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_html",
          "safe_value" : "\\u003Cp\\u003EA new shop has been published on the [site:name] with title \\u0022[message:field-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u003Ca href=\\u0022[message:field-message-node-ref:url:absolute]\\u0022\\u003E[message:field-message-node-ref:title]\\u003C\\/a\\u003E\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
