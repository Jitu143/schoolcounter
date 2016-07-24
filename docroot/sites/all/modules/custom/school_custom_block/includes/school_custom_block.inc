<?php
/**
 * @file
 * Contains functions related to school custom block.
 */


/**
 * Get contact us detail.
 *
 * @return string.
 *   Having contact us link.
 */
function _sc_get_contact_us_detail() {

  $contact_path = NULL;

  if (arg(0) == 'node' && is_numeric(arg(1)) && arg(1) > 0) {
    $nid = arg(1);
    $node = node_load($nid);

    if ($node->type == 'ct_school') {
      $contact_path = 'contact-us/' . $nid;
      $contact_path = l('Contact us', 'contact-us/' . $nid);
    }
  }

  return $contact_path;
}
