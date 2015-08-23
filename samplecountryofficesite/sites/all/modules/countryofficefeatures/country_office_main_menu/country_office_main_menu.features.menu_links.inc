<?php
/**
 * @file
 * country_office_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function country_office_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ashoka-country-office:node/147
  $menu_links['main-menu_ashoka-country-office:node/147'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/147',
    'router_path' => 'node/%',
    'link_title' => 'Ashoka Country Office',
    'options' => array(
      'identifier' => 'main-menu_ashoka-country-office:node/147',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_ashoka:node/254
  $menu_links['main-menu_ashoka:node/254'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/254',
    'router_path' => 'node/%',
    'link_title' => 'Ashoka',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_ashoka:node/254',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_changemaker-schools:node/256
  $menu_links['main-menu_changemaker-schools:node/256'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/256',
    'router_path' => 'node/%',
    'link_title' => 'Changemaker Schools',
    'options' => array(
      'identifier' => 'main-menu_changemaker-schools:node/256',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_transforming-youth-years:node/146',
  );
  // Exported menu link: main-menu_contact:contact
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_emerging-insights:node/149
  $menu_links['main-menu_emerging-insights:node/149'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/149',
    'router_path' => 'node/%',
    'link_title' => 'Emerging Insights',
    'options' => array(
      'identifier' => 'main-menu_emerging-insights:node/149',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_engage-with-ashoka:node/228
  $menu_links['main-menu_engage-with-ashoka:node/228'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/228',
    'router_path' => 'node/%',
    'link_title' => 'Engage with Ashoka',
    'options' => array(
      'identifier' => 'main-menu_engage-with-ashoka:node/228',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:getinvolved-1-column',
  );
  // Exported menu link: main-menu_fellows:snapshotfellows
  $menu_links['main-menu_fellows:snapshotfellows'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'snapshotfellows',
    'router_path' => 'snapshotfellows',
    'link_title' => 'Fellows',
    'options' => array(
      'identifier' => 'main-menu_fellows:snapshotfellows',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/253',
  );
  // Exported menu link: main-menu_get-involved:getinvolved-1-column
  $menu_links['main-menu_get-involved:getinvolved-1-column'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'getinvolved-1-column',
    'router_path' => 'getinvolved-1-column',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_get-involved:getinvolved-1-column',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_join-our-team:node/230
  $menu_links['main-menu_join-our-team:node/230'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/230',
    'router_path' => 'node/%',
    'link_title' => 'Join Our Team',
    'options' => array(
      'identifier' => 'main-menu_join-our-team:node/230',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:getinvolved-1-column',
  );
  // Exported menu link: main-menu_learn-more:node/220
  $menu_links['main-menu_learn-more:node/220'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/220',
    'router_path' => 'node/%',
    'link_title' => 'Learn More',
    'options' => array(
      'identifier' => 'main-menu_learn-more:node/220',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:getinvolved-1-column',
  );
  // Exported menu link: main-menu_map-of-ashoka:map-view
  $menu_links['main-menu_map-of-ashoka:map-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'map-view',
    'router_path' => 'map-view',
    'link_title' => 'Map of Ashoka',
    'options' => array(
      'identifier' => 'main-menu_map-of-ashoka:map-view',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/253',
  );
  // Exported menu link: main-menu_nominate:node/229
  $menu_links['main-menu_nominate:node/229'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/229',
    'router_path' => 'node/%',
    'link_title' => 'Nominate',
    'options' => array(
      'identifier' => 'main-menu_nominate:node/229',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:getinvolved-1-column',
  );
  // Exported menu link: main-menu_our-partners:node/294
  $menu_links['main-menu_our-partners:node/294'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/294',
    'router_path' => 'node/%',
    'link_title' => 'Our Partners',
    'options' => array(
      'identifier' => 'main-menu_our-partners:node/294',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 37,
    'customized' => 0,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_our-stories:Changemaker-Stories
  $menu_links['main-menu_our-stories:Changemaker-Stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'Changemaker-Stories',
    'router_path' => 'changemaker-stories',
    'link_title' => 'Our Stories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-stories:Changemaker-Stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-team:node/253
  $menu_links['main-menu_our-team:node/253'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/253',
    'router_path' => 'node/%',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-team:node/253',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-work:portfolio-1-column
  $menu_links['main-menu_our-work:portfolio-1-column'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio-1-column',
    'router_path' => 'portfolio-1-column',
    'link_title' => 'Our Work',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-work:portfolio-1-column',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_search:search
  $menu_links['main-menu_search:search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_search:search',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sign-up-for-enews:node/231
  $menu_links['main-menu_sign-up-for-enews:node/231'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/231',
    'router_path' => 'node/%',
    'link_title' => 'Sign up for eNews',
    'options' => array(
      'identifier' => 'main-menu_sign-up-for-enews:node/231',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_get-involved:getinvolved-1-column',
  );
  // Exported menu link: main-menu_staff:staff
  $menu_links['main-menu_staff:staff'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_staff:staff',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-team:node/253',
  );
  // Exported menu link: main-menu_transforming-youth-years:node/146
  $menu_links['main-menu_transforming-youth-years:node/146'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/146',
    'router_path' => 'node/%',
    'link_title' => 'Transforming Youth Years',
    'options' => array(
      'identifier' => 'main-menu_transforming-youth-years:node/146',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_wellness:node/148
  $menu_links['main-menu_wellness:node/148'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/148',
    'router_path' => 'node/%',
    'link_title' => 'Wellness',
    'options' => array(
      'identifier' => 'main-menu_wellness:node/148',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: main-menu_youth-employment:node/150
  $menu_links['main-menu_youth-employment:node/150'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/150',
    'router_path' => 'node/%',
    'link_title' => 'Youth Employment',
    'options' => array(
      'identifier' => 'main-menu_youth-employment:node/150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_our-work:portfolio-1-column',
  );
  // Exported menu link: menu-footer-menu_home:<front>
  $menu_links['menu-footer-menu_home:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Ashoka');
  t('Ashoka Country Office');
  t('Changemaker Schools');
  t('Contact');
  t('Emerging Insights');
  t('Engage with Ashoka');
  t('Fellows');
  t('Get Involved');
  t('Home');
  t('Join Our Team');
  t('Learn More');
  t('Map of Ashoka');
  t('Nominate');
  t('Our Partners');
  t('Our Stories');
  t('Our Team');
  t('Our Work');
  t('Search');
  t('Sign up for eNews');
  t('Staff');
  t('Transforming Youth Years');
  t('Wellness');
  t('Youth Employment');


  return $menu_links;
}
