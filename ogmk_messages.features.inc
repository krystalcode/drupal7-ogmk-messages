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
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EA new comment has been published on the [site:name] Blog\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new comment has been published on the [site:name] Blog, in the post with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the link below.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:ogmk-message-comment-ref:url:absolute]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for comments posted on our Blog, or because you are following this particular post. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_plain_html",
          "safe_value" : "\\u003Cp\\u003EA new comment has been published on the [site:name] Blog, in the post with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the link below.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:ogmk-message-comment-ref:url:absolute]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for comments posted on our Blog, or because you are following this particular post. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n"
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
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EA new post has been published on the [site:name] Blog\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new post has been published on the [site:name] Blog with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for posts published on our Blog, or because you are following the author or the shop that\\u0026nbsp;this\\u0026nbsp;particular post belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_plain_html",
          "safe_value" : "\\u003Cp\\u003EA new post has been published on the [site:name] Blog with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for posts published on our Blog, or because you are following the author or the shop that\\u00a0this\\u00a0particular post belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n"
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
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EA new product has been published on the [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new product has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for products published on our marketplace, or because you are following the shop that this particular product belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_plain_html",
          "safe_value" : "\\u003Cp\\u003EA new product has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for products published on our marketplace, or because you are following the shop that this particular product belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n"
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
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EA new review has been published on the [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new review has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for reviews posted on our marketplace, or because you are following the product or shop that this particular review belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_plain_html",
          "safe_value" : "\\u003Cp\\u003EA new review has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications for reviews posted on our marketplace, or because you are following the product or shop that this particular review belongs to. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n"
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
          "format" : "plain_text",
          "safe_value" : "\\u003Cp\\u003EA new shop has been published on the [site:name]\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u003Cp\\u003EA new shop has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications when new shops are added to our marketplace. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\r\\n",
          "format" : "ogmk_plain_html",
          "safe_value" : "\\u003Cp\\u003EA new shop has been published on the [site:name] with title \\u0022[message:ogmk-message-node-ref:title]\\u0022. To view it, click on the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[message:ogmk-message-node-ref:url:absolute]\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003EYou are receiving this email because you have chosen to receive notifications when new shops are added to our marketplace. You can always configure your notification settings by logging into your account using the following link.\\u003C\\/p\\u003E\\n\\n\\u003Cp\\u003E[site:login-url]\\u003C\\/p\\u003E\\n"
        }
      ]
    }
  }');
  return $items;
}
