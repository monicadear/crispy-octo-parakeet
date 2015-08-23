<?php
/**
 * @file
 * fellows_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fellows_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fellow_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Fellow Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fellow Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'nid' => 'nid',
  );
  /* Relationship: Taxonomy term: Content using Work Area */
  $handler->display->display_options['relationships']['reverse_field_work_area_node']['id'] = 'reverse_field_work_area_node';
  $handler->display->display_options['relationships']['reverse_field_work_area_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_work_area_node']['field'] = 'reverse_field_work_area_node';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: COUNT(Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_work_area_node';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['prefix'] = '(';
  $handler->display->display_options['fields']['nid']['suffix'] = ')';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'work_area' => 'work_area',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Fellow - Fellow Categories';

  /* Display: Isotope Filter */
  $handler = $view->new_display('block', 'Isotope Filter', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'isotope_filter_block';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $export['fellow_categories'] = $view;

  $view = new view();
  $view->name = 'fellows';
  $view->description = 'List all members of the team';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fellows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our team';
  $handler->display->display_options['css_class'] = 'list-4-columns view-list-members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_work_area_tid' => array(
      'bef_format' => 'default',
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'fellow_categories:block_1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = 'Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would 1. redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities 2. help private and citizen sectors work together to better solve societal challenges. 3. increase the number of people who are social problem solvers (changemakers and social entrepreneurs)

We select Fellows based on five key criteria:
<img>/sites/all/themes/velocity/images/fellow_criteria-01.png</img>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]" title="Email"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-envelope fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-email">[field_email]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Election */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Field: Content: The New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  /* Sort criterion: Content: Year of Election (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'fellow' => 'fellow',
  );
  /* Filter criterion: Content: Featured (field_featured) */
  $handler->display->display_options['filters']['field_featured_value']['id'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['table'] = 'field_data_field_featured';
  $handler->display->display_options['filters']['field_featured_value']['field'] = 'field_featured_value';
  $handler->display->display_options['filters']['field_featured_value']['value'] = array(
    0 => '0',
  );

  /* Display: Fellows */
  $handler = $view->new_display('page', 'Fellows', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ashoka Fellows';
  $handler->display->display_options['display_description'] = 'The list of all team members';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_year_of_election',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = '<b>Ashoka Fellows are listed below by year but you are able to filter them by work area and region as well.</b> Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would <ol><li>redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities</li><li>help private and citizen sectors work together to better solve societal challenges</li><li>increase the number of people who are social problem solvers (changemakers and social entrepreneurs)</li></ol></p>

We select Fellows based on five key criteria:
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['label'] = 'Fellow Criteria';
  $handler->display->display_options['header']['area_1']['content'] = '<img src="/sites/all/themes/velocity/images/fellow_criteria-01.png" alt="Fellows Criteria">';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Work Area (field_work_area) */
  $handler->display->display_options['relationships']['field_work_area_tid']['id'] = 'field_work_area_tid';
  $handler->display->display_options['relationships']['field_work_area_tid']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['relationships']['field_work_area_tid']['field'] = 'field_work_area_tid';
  $handler->display->display_options['relationships']['field_work_area_tid']['label'] = 'work area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project URL */
  $handler->display->display_options['fields']['field_project_url']['id'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['table'] = 'field_data_field_project_url';
  $handler->display->display_options['fields']['field_project_url']['field'] = 'field_project_url';
  $handler->display->display_options['fields']['field_project_url']['label'] = '';
  $handler->display->display_options['fields']['field_project_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_url']['alter']['text'] = '<a href="[field_project_url]" title="Website" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-external-link-square fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_project_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_project_url']['type'] = 'link_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-website">[field_project_url]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Election */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: The New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['label'] = '';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_the_new_idea']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year of Election (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'fellow' => 'fellow',
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
  $handler->display->display_options['filters']['field_work_area_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_work_area_tid']['group_info']['label'] = 'Work Area (field_work_area)';
  $handler->display->display_options['filters']['field_work_area_tid']['group_info']['identifier'] = 'field_work_area_tid';
  $handler->display->display_options['filters']['field_work_area_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_work_area_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_work_area_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_work_area_tid']['vocabulary'] = 'work_area';
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'region';
  $handler->display->display_options['path'] = 'fellows';
  $handler->display->display_options['menu']['title'] = 'Fellows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Our Team Block - 3 persons */
  $handler = $view->new_display('block', 'Our Team Block - 3 persons', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-members list-3-columns';
  $handler->display->display_options['display_description'] = 'The block with some members - Link to Our Team page';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Meet the all-star team</h2>
<p class="home-block-description">It began with the forging of the great rings of pixel power, <span class="themecolor-text">three</span> were given to those who would use it to make beautiful designs...</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'member_block',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Team Block - 3 Members';

  /* Display: Our Team Block - 8 persons */
  $handler = $view->new_display('block', 'Our Team Block - 8 persons', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-members list-4-columns';
  $handler->display->display_options['display_description'] = 'The block with some members - Link to Our Team page';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View more';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="home-block-title">Meet the team</h2>
<p class="home-block-description">It began with the forging of the great rings of pixel power, <span class="themecolor-text">three</span> were given to those<br />who would use it to make beautiful designs...</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'member_block',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
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
    'team_member' => 'team_member',
  );
  $handler->display->display_options['block_description'] = 'Team Block - 8 Members';
  $export['fellows'] = $view;

  $view = new view();
  $view->name = 'fellows_excerpt_randomized';
  $view->description = 'List all members of the team';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fellows Excerpt Randomized';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our team';
  $handler->display->display_options['css_class'] = 'list-4-columns view-list-members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter Fellows';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'fellow_categories:block_1';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Ashoka Fellows Description';
  $handler->display->display_options['header']['area']['content'] = 'Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would 1. redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities 2. help private and citizen sectors work together to better solve societal challenges. 3. increase the number of people who are social problem solvers (changemakers and social entrepreneurs)

We select Fellows based on five key criteria:
<img>/sites/all/themes/velocity/images/fellow_criteria-01.png</img>
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div align=right><a href="/fellows" target="new">Click here to view all Ashoka Fellows</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'region' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  /* Field: Content: Work Area */
  $handler->display->display_options['fields']['field_work_area']['id'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['table'] = 'field_data_field_work_area';
  $handler->display->display_options['fields']['field_work_area']['field'] = 'field_work_area';
  $handler->display->display_options['fields']['field_work_area']['label'] = '';
  $handler->display->display_options['fields']['field_work_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_work_area']['alter']['text'] = '<br clear=all><h4>[field_work_area]</h4>';
  $handler->display->display_options['fields']['field_work_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_work_area']['delta_limit'] = '6';
  $handler->display->display_options['fields']['field_work_area']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '<a href="mailto:[field_email]" title="Email"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-envelope fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_linkedin']['id'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['table'] = 'field_data_field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['field'] = 'field_linkedin';
  $handler->display->display_options['fields']['field_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin']['alter']['text'] = '<a href="[field_linkedin-url]" title="Linkedin" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_linkedin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin']['click_sort_column'] = 'url';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<a href="[field_twitter-url]" title="Twitter" target="_blank"><span class="fa-stack fa-lg">
  <i class="fa fa-square fa-stack-2x"></i>
  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
</span></a>';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Member Image */
  $handler->display->display_options['fields']['field_member_image']['id'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['table'] = 'field_data_field_member_image';
  $handler->display->display_options['fields']['field_member_image']['field'] = 'field_member_image';
  $handler->display->display_options['fields']['field_member_image']['label'] = '';
  $handler->display->display_options['fields']['field_member_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_image']['alter']['text'] = '<div class="extra-content"><div class="extra-content-inner">
<div class="field-email">[field_email]</div>
<div class="field-linkedin">[field_linkedin]</div>
<div class="field-twitter">[field_twitter]</div>
</div></div>
<div class="field-image">[field_member_image]</div>';
  $handler->display->display_options['fields']['field_member_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_member_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Year of Election */
  $handler->display->display_options['fields']['field_year_of_election']['id'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['field'] = 'field_year_of_election';
  $handler->display->display_options['fields']['field_year_of_election']['label'] = '';
  $handler->display->display_options['fields']['field_year_of_election']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_year_of_election']['alter']['text'] = '<br clear=all><h2>[field_year_of_election]</h2>';
  $handler->display->display_options['fields']['field_year_of_election']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_year_of_election']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = '';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: The New Idea */
  $handler->display->display_options['fields']['field_the_new_idea']['id'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['table'] = 'field_data_field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['field'] = 'field_the_new_idea';
  $handler->display->display_options['fields']['field_the_new_idea']['label'] = '';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_the_new_idea']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_the_new_idea']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Year of Election (field_year_of_election) */
  $handler->display->display_options['sorts']['field_year_of_election_value']['id'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['table'] = 'field_data_field_year_of_election';
  $handler->display->display_options['sorts']['field_year_of_election_value']['field'] = 'field_year_of_election_value';
  $handler->display->display_options['sorts']['field_year_of_election_value']['order'] = 'DESC';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'term_node_tid';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
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
    'fellow' => 'fellow',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Fellows */
  $handler = $view->new_display('page', 'Fellows', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ashoka Fellows';
  $handler->display->display_options['display_description'] = 'The list of all team members';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p><b>Ashoka Fellows are listed below by year but you are able to filter them by work area and region as well.</b> Ashoka aims to identify, support, and accelerate the impact of social entrepreneurs (Ashoka Fellows) improving systems to create a more sustainable, equitable, and empathetic world. Specifically, their social impact would</p>
<ol>
	<li>
		redesign the marketplace and shape the policies that govern our societies so that everyone has equal access to opportunities</li>
	<li>
		help private and citizen sectors work together to better solve societal challenges</li>
	<li>
		increase the number of people who are social problem solvers (changemakers and social entrepreneurs)</li>
</ol>
<br />
<p>We select Fellows based on five key criteria:</p>
<p><img src="/sites/all/themes/velocity/fellow_criteria-01.png" /></p>
<h2>Here\'s a snapshot of eight Ashoka Fellows working globally.</h2>
<div align=right><a href="/fellows" target="new">Click here to view all Ashoka Fellows</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found. Please search by different filters.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'work area';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'region' => 'region',
    'work_area' => 'work_area',
    'forums' => 0,
    'faq_category' => 0,
    'get_involved_categories' => 0,
    'newsletter' => 0,
    'portfolio_category' => 0,
    'slideshow_category' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['path'] = 'snapshotfellows';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Fellows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['fellows_excerpt_randomized'] = $view;

  return $export;
}
