<?php
/**
 * @file
 * changemaker_stories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function changemaker_stories_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_changemakers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Changemaker Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Changemaker Stories';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Ashoka\'s Changemaker Stories</h2>
<p class="home-block-description">Ashoka is the world\'s largest network of changemakers and social innovators with more than 3,000 social entrepreneurs in 70 countries, and has been working for over 30 years. Learn about Ashoka\'s work through these changemaker stories:</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-mail-forward fa-stack-1x fa-inverse"></i></span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url-url]" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-link fa-stack-1x fa-inverse"></i></span></a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>

<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest_portrait',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="title-arrow">&nbsp;</span>[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'client' => 'client',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column list-portfolio-with-text block-latest-portfolio';
  $handler->display->display_options['block_description'] = 'Featured Changemakers';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-1-column';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_work_area_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>

<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_detail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="title-arrow">&nbsp;</span>[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-mail-forward fa-stack-1x fa-inverse"></i></span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url-url]" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-link fa-stack-1x fa-inverse"></i></span></a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'client' => 'client',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Work Area (field_work_area) */
  $handler->display->display_options['filters']['field_work_area_tid']['id'] = 'field_work_area_tid';
  $handler->display->display_options['filters']['field_work_area_tid']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['filters']['field_work_area_tid']['field'] = 'field_work_area_tid';
  $handler->display->display_options['filters']['field_work_area_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['operator_id'] = 'field_work_area_tid_op';
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['label'] = 'Work Area';
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['operator'] = 'field_work_area_tid_op';
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['identifier'] = 'field_work_area_tid';
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_work_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_work_area_tid']['vocabulary'] = 'work_area';
  $handler->display->display_options['path'] = 'changemaker-stories';
  $export['featured_changemakers'] = $view;

  return $export;
}
