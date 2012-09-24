<?php

/**
 * @file
 * This file contains all admin functions
 */

function islandora_audio_admin() {
  $form = array();
  $form['islandora_audio_use_for_default_tab'] = array(
    '#type' => 'checkbox',
    '#title' => t('Provide the view for the default tab'),
    '#default_value' => variable_get('islandora_audio_use_for_default_tab', TRUE),
    '#description' => t('Should this module provide the view for the default view tab.  If you are seeing unexpected content
      on a view tab you may have multiple modules configured to provide content for the default tab.'),
    '#weight' => -10
  );

  return system_settings_form($form);
}