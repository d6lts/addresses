<?php
// $Id$

// Vanuatu

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
function addresses_province_list_vu() {
  return array(
    'MA' => t('Malampa'),
    'PE' => t('Penama'),
    'SA' => t('Sanma'),
    'SH' => t('Shefa'),
    'TA' => t('Tafea'),
    'TO' => t('Torba')
  );
}