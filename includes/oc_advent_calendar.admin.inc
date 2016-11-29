<?php
function oc_advent_calendar_admin()
{
     $form['oc_advent_lottery_email'] = array(
      '#type' => 'textfield',
      '#default_value' => variable_get('oc_advent_lottery_email', ''),
      '#title' => t('Email som modtager kontakt formular svar.'),
      '#attributes' => array(
          'placeholder' => t('Email som modtager kontakt formular svar.'),
      ),
      '#description' => t('Email som modtager kontakt formular svar.'),
  );
     return $form;
}