<?php
// $Id$

// Hungary

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
function addresses_province_list_hu() {
  return array(
    'BU' => t('Budapest'),
    'BC' => t('Békéscsaba'),
    'DB' => t('Debrecen'),
    'DJ' => t('Dunaújváros'),
    'EG' => t('Eger'),
    'GY' => t('Győr'),
    'HM' => t('Hódmezővásárhely'),
    'KP' => t('Kaposvár'),
    'KC' => t('Kecskemét'),
    'MK' => t('Miskolc'),
    'NK' => t('Nagykanizsa'),
    'NY' => t('Nyíregyháza'),
    'PC' => t('Pécs'),
    'SO' => t('Sopron'),
    'SG' => t('Szeged'),
    'SK' => t('Székesfehérvár'),
    'SL' => t('Szolnok'),
    'SB' => t('Szombathely'),
    'TB' => t('Tatabanya'),
    'ZG' => t('Zalaegerszeg'),
    'BK' => t('Bács-Kiskun'),
    'BR' => t('Baranya'),
    'BS' => t('Békés'),
    'BA' => t('Borsod-Abaúj-Zemplén'),
    'CG' => t('Csongrád'),
    'FJ' => t('Fejér'),
    'GM' => t('Győr-Moson-Sopron'),
    'HB' => t('Hajdú-Bihar'),
    'HV' => t('Heves'),
    'JN' => t('Jasz-Nagykun-Szolnok'),
    'KE' => t('Komárom-Esztergom'),
    'NG' => t('Nógrád'),
    'PE' => t('Pest'),
    'SM' => t('Somogy'),
    'SS' => t('Szabolcs-Szatmár-Bereg'),
    'TO' => t('Tolna'),
    'VA' => t('Vas'),
    'VZ' => t('Veszprém'),
    'ZA' => t('Zala')
  );
}