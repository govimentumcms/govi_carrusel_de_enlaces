<?php

/**
 * @file
 * govi_carrusel_de_enlaces.features.inc
 */

/**
 * Implements hook_views_api().
 */
function govi_carrusel_de_enlaces_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function govi_carrusel_de_enlaces_node_info() {
  $items = array(
    'carrusel_de_enlaces' => array(
      'name' => t('Carrusel de enlaces'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar enlaces gráficos destacados como por ejemplo a: Entidades de control, Plataformas distritales, Proyectos institucionales, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
