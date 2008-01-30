<?php
// $Id$

// New Caledonia

/**
 * Implementation of hook_province_list().
 *
 * Its a hook from Addresses module to list all
 * states/provinces/teritories of a given contry
 *
 * @return
 *   Array. states where the keys are the state
 *   code and the value is the state name
 */
function addresses_province_list_nc() {
  return array(
    'L' => t('Iles Loyaute'),
    'N' => t('Nord'),
    'S' => t('Sud')
  );
}