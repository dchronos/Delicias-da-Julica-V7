<?php

/**
 * @file
 * Views handler: Product price field.
 */

/**
 * Returns a formatted price value to display in the View.
 */
class uc_product_handler_field_display_price extends uc_product_handler_field_price {

  function option_definition() {
    $options = parent::option_definition();

    $options['label']['default'] = t('Price');

    return $options;
  }

  function get_value($values, $field = NULL) {
    $nid = parent::get_value($values, $field);
    $node = node_load($nid);
    return $node->display_price;
  }
}
