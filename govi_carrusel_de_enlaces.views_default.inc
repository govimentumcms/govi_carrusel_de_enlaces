<?php

/**
 * @file
 * govi_carrusel_de_enlaces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govi_carrusel_de_enlaces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'carrusel_de_enlaces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Carrusel de enlaces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Enlaces destacados';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['visible'] = '2';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['auto'] = '3';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = 'slow';
  $handler->display->display_options['style_options']['easing'] = 'linear';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Logo Alterno */
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['id'] = 'field_entcontrol_logo_alterno';
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['table'] = 'field_data_field_entcontrol_logo_alterno';
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['field'] = 'field_entcontrol_logo_alterno';
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['label'] = '';
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_entcontrol_logo_alterno']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Logo Entidad */
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['id'] = 'field_entcontrol_logo_entidad';
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['table'] = 'field_data_field_entcontrol_logo_entidad';
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['field'] = 'field_entcontrol_logo_entidad';
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['label'] = '';
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_entcontrol_logo_entidad']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Url sitio web */
  $handler->display->display_options['fields']['field_entcontrol_url']['id'] = 'field_entcontrol_url';
  $handler->display->display_options['fields']['field_entcontrol_url']['table'] = 'field_data_field_entcontrol_url';
  $handler->display->display_options['fields']['field_entcontrol_url']['field'] = 'field_entcontrol_url';
  $handler->display->display_options['fields']['field_entcontrol_url']['label'] = '';
  $handler->display->display_options['fields']['field_entcontrol_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entcontrol_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entcontrol_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_entcontrol_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_entcontrol_url]" rel="external" target="_blank" title="[title]">
<div class="logo_entidad">
[field_entcontrol_logo_entidad]
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'carrusel_de_enlaces' => 'carrusel_de_enlaces',
  );

  /* Display: Carrusel */
  $handler = $view->new_display('block', 'Carrusel', 'block');
  $handler->display->display_options['block_description'] = 'Bloque carrusel de enlaces';
  $translatables['carrusel_de_enlaces'] = array(
    t('Master'),
    t('Enlaces destacados'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_entcontrol_url]" rel="external" target="_blank" title="[title]">
<div class="logo_entidad">
[field_entcontrol_logo_entidad]
</div>
</a>'),
    t('Carrusel'),
    t('Bloque carrusel de enlaces'),
  );
  $export['carrusel_de_enlaces'] = $view;

  return $export;
}
