<?php

/**
 * @file
 * Implements hook_form().
 */
function isi_form($form, &$form_state) {
  $form = array();
  
  $form['isi-header'] = array(
    '#type' => 'textarea',
    '#title' => t('ISI Header'),
    '#description' => t('Include a title to ISI box'),
    '#required' => TRUE,
    '#rows' => 2,
    '#cols' => 80,
    '#default_value' => variable_get('isi-header', NULL)
  );
  
  $form['isi-title'] = array(
    '#type' => 'textarea',
    '#title' => t('ISI Title'),
    '#description' => t('Include a title that displayed on top of content.'),
    '#rows' => 2,
    '#cols' => 80,
    '#default_value' => variable_get('isi-title', NULL)
  );
  
  $form['isi-description'] = array(
    '#type' => 'textarea',
    '#title' => t('ISI Description'),
    '#description' => t('ISI Content'),
    '#required' => TRUE,
    '#rows' => 10,
    '#cols' => 80,
    '#default_value' => variable_get('isi-description', NULL)
  );
  
  return system_settings_form($form);
}
