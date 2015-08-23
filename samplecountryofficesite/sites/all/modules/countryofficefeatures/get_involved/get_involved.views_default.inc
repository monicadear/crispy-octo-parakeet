<?php
/**
 * @file
 * get_involved.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function get_involved_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'get_involved';
  $view->description = 'List of work showcases';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Get Involved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Get Involved';
  $handler->display->display_options['css_class'] = 'block-slideshow-portfolio';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'portfolio_categories:block_1';
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'getinvolved' => 'getinvolved',
  );

  /* Display: 1 Column */
  $handler = $view->new_display('page', '1 Column', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-1-column';
  $handler->display->display_options['display_description'] = 'Portfolio with 1 column';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_gi_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-mail-forward fa-stack-1x fa-inverse"></i>
</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url_1']['id'] = 'field_project_url_1';
  $handler->display->display_options['fields']['field_project_url_1']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url_1']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_project_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url_1']['alter']['text'] = '<a href="[field_project_url_1-url]" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-square fa-stack-2x"></i><i class="fa fa-link fa-stack-1x fa-inverse"></i></span></a>';
  $handler->display->display_options['fields']['field_project_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="icons-field">[view_node] [field_project_url_1]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_1_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: GI Category */
  $handler->display->display_options['fields']['field_gi_category']['id'] = 'field_gi_category';
  $handler->display->display_options['fields']['field_gi_category']['table'] = 'field_data_field_gi_category';
  $handler->display->display_options['fields']['field_gi_category']['field'] = 'field_gi_category';
  $handler->display->display_options['fields']['field_gi_category']['label'] = '';
  $handler->display->display_options['fields']['field_gi_category']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url-url]" target="">Visit site</a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Learn more';
  /* Field: Content: GI Category */
  $handler->display->display_options['fields']['field_gi_category_1']['id'] = 'field_gi_category_1';
  $handler->display->display_options['fields']['field_gi_category_1']['table'] = 'field_data_field_gi_category';
  $handler->display->display_options['fields']['field_gi_category_1']['field'] = 'field_gi_category';
  $handler->display->display_options['fields']['field_gi_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_gi_category_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gi_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gi_category_1']['type'] = 'taxonomy_term_reference_plain';
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
    'getinvolved' => 'getinvolved',
  );
  /* Filter criterion: Content: GI Category (field_gi_category) */
  $handler->display->display_options['filters']['field_gi_category_tid']['id'] = 'field_gi_category_tid';
  $handler->display->display_options['filters']['field_gi_category_tid']['table'] = 'field_data_field_gi_category';
  $handler->display->display_options['filters']['field_gi_category_tid']['field'] = 'field_gi_category_tid';
  $handler->display->display_options['filters']['field_gi_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['operator_id'] = 'field_gi_category_tid_op';
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['operator'] = 'field_gi_category_tid_op';
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['identifier'] = 'field_gi_category_tid';
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_gi_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_gi_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gi_category_tid']['vocabulary'] = 'get_involved_categories';
  $handler->display->display_options['path'] = 'getinvolved-1-column';
  $handler->display->display_options['menu']['title'] = 'Portfolios';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: 2 Column */
  $handler = $view->new_display('page', '2 Column', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-2-column list-portfolio-no-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 2 column';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_2_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-2-column';

  /* Display: 3 Column */
  $handler = $view->new_display('page', '3 Column', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 3 column';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-3-column list-portfolio-no-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 3 column';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_3_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-3-column';

  /* Display: 4 Column */
  $handler = $view->new_display('page', '4 Column', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 4 column';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-4-column list-portfolio-no-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 4 column';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_4_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-4-column';

  /* Display: 1 Column Text */
  $handler = $view->new_display('page', '1 Column Text', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 1 column text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-1-column list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 1 column';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-mail-forward fa-stack-1x fa-inverse"></i>
</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url_1']['id'] = 'field_project_url_1';
  $handler->display->display_options['fields']['field_project_url_1']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url_1']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_project_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url_1']['alter']['text'] = '<a href="[field_project_url_1-url]" target="_blank">
<span class="fa-stack fa-lg">
<i class="fa fa-square fa-stack-2x"></i>
<i class="fa fa-link fa-stack-1x fa-inverse"></i>
</span>
</a>';
  $handler->display->display_options['fields']['field_project_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="icons-field">[view_node] [field_project_url_1]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_full_width',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' / ';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url-url]" target="">Visit site</a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Learn more';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category_1']['id'] = 'field_portfolio_category_1';
  $handler->display->display_options['fields']['field_portfolio_category_1']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category_1']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category_1']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category_1']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category_1']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category_1']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-1-column-text';
  $handler->display->display_options['menu']['title'] = 'Portfolios';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: 2 Column Text */
  $handler = $view->new_display('page', '2 Column Text', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 2 column with text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-2-column list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 2 column and text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-2-column-text';

  /* Display: 3 Column Text */
  $handler = $view->new_display('page', '3 Column Text', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 3 column with text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-3-column  view-list-portfolio-default list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 3 column and text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_3_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-3-column-text';

  /* Display: 4 Column Text */
  $handler = $view->new_display('page', '4 Column Text', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios 4 column with text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-4-column  view-list-portfolio-default list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Portfolio with 4 column and text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_4_column',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-4-column-text';

  /* Display: Portfolio Grid */
  $handler = $view->new_display('page', 'Portfolio Grid', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios Grid';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-grid';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'portfolio_categories:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div>
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_grid',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['path'] = 'getinvolved-grid';

  /* Display: Portfolio Grid with Text */
  $handler = $view->new_display('page', 'Portfolio Grid with Text', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios grid with text';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-grid list-portfolio-with-text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div>
</div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_grid',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-grid-text';

  /* Display: Portfolio Default */
  $handler = $view->new_display('page', 'Portfolio Default', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Portfolio displaying on front page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Hey there! We are Velocity and we make <span class="themecolor-text">really beautiful</span> and <span class="themecolor-text">amazing stuff</span>. This can be used to describe what you do, how you do it, & who you do it for.</h2>
<div class="hr-left">
		&nbsp;</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'portfolio_categories:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-mail-forward fa-stack-1x fa-inverse"></i></span>';
  $handler->display->display_options['fields']['view_node']['alter']['max_length'] = '15';
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
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="title-arrow">&nbsp;</span>[title]
';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'getinvolved-default';

  /* Display: Block Sidebar Recent Portfolio */
  $handler = $view->new_display('block', 'Block Sidebar Recent Portfolio', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Works';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-recent-portfolio-sidebar';
  $handler->display->display_options['display_description'] = 'Display latest portfolio items on sidebar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_recent_sidebar',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Get Involved - Recent GI on Sidebar';

  /* Display: Block Latest Porfolio Fullscreen */
  $handler = $view->new_display('block', 'Block Latest Porfolio Fullscreen', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column list-portfolio-with-text block-latest-portfolio';
  $handler->display->display_options['display_description'] = 'Display recent portfolio items full screen';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View the full portfolio here';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Featured work</h2>
<p class="home-block-description">Here you can see a small selection of our work including large and small projects, head on <br />over to our <span class="themecolor-text">portfolio</span> where you can see the rest of our work.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
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
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Get Involved - Latest GI Fullscreen';

  /* Display: Block Related Porfolio */
  $handler = $view->new_display('block', 'Block Related Porfolio', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column  list-portfolio-with-text';
  $handler->display->display_options['display_description'] = 'Display related portfolio item of a specific project';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more portfolio';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Related Portfolio</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url-url]" target="_blank"><span class="fa-stack fa-lg"><i class="fa fa-circle fa-stack-2x"></i><i class="fa fa-link fa-stack-1x fa-inverse"></i></span></a>
';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Portfolio Category (field_portfolio_category) */
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['id'] = 'field_portfolio_category_tid';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['field'] = 'field_portfolio_category_tid';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_portfolio_category_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Get Involved - Related GI';

  /* Display: Block Recent Work */
  $handler = $view->new_display('block', 'Block Recent Work', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column block-recent-portfolio';
  $handler->display->display_options['display_description'] = 'Display recent portfolio items full screen';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View the full portfolio here';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title text-align-center">Recent Work</h2>
<div class="hr-left-right"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="body-field">[body]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Get Involved Block - Recent GI Fullscreen';

  /* Display: Block 3 Porfolio Fullscreen No Text */
  $handler = $view->new_display('block', 'Block 3 Porfolio Fullscreen No Text', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-3-column block-latest-portfolio';
  $handler->display->display_options['display_description'] = 'Display recent portfolio items full screen no text';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View the full portfolio here';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Featured work</h2>
<p class="home-block-description">Here you can see a small selection of our work including large and small projects, head on over to our <span class="themecolor-text">portfolio</span> where you can see the rest of our work.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div><div class="body-field">[body]</div>
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Get Involved Block - 4 Latest GI Fullscreen No Text';

  /* Display: Block 8 Featured Works */
  $handler = $view->new_display('block', 'Block 8 Featured Works', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio view-list-portfolio-default list-portfolio-4-column list-portfolio-with-text block-latest-portfolio';
  $handler->display->display_options['display_description'] = 'Display 8 Featured Works';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View the full portfolio here';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Featured work</h2>
<p class="home-block-description">Here you can see a small selection of our work including large and small projects, head on <br />over to our <span class="themecolor-text">portfolio</span> where you can see the rest of our work.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_latest',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Get Involved Block - 8 Featured GI Works';

  /* Display: Portfolio Fullscreen */
  $handler = $view->new_display('page', 'Portfolio Fullscreen', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios Fullscreen';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-list-portfolio list-portfolio-grid list-portfolio-fullscreen';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'portfolio_categories:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner"><div class="title-link">[title]</div>
<div class="icons-field">[view_node] [field_project_url]</div></div></div>
<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'portfolio_grid',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_portfolio_category']['element_class'] = 'isotope-filter';
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
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
    'portfolio' => 'portfolio',
  );
  $handler->display->display_options['path'] = 'getinvolved-fullscreen';

  /* Display: Portfolio Slideshow */
  $handler = $view->new_display('page', 'Portfolio Slideshow', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portfolios Slideshow';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-portfolio-slideshow';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Portfolio Images */
  $handler->display->display_options['fields']['field_portfolio_images']['id'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images']['alter']['text'] = '<div class="field-image">[field_portfolio_images]</div>';
  $handler->display->display_options['fields']['field_portfolio_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portfolio_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Portfolio Category */
  $handler->display->display_options['fields']['field_portfolio_category']['id'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['table'] = 'field_data_field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['field'] = 'field_portfolio_category';
  $handler->display->display_options['fields']['field_portfolio_category']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_portfolio_category']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_portfolio_category']['separator'] = ' / ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<div class="caption">
<div class="field-title">[title]</div>
<div class="field-subtitle">[field_portfolio_category], [created]</div>
</div>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd M Y';
  $handler->display->display_options['path'] = 'getinvolved-slideshow';
  $export['get_involved'] = $view;

  return $export;
}
