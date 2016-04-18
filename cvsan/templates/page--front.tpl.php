<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<div class="page">
	<div class="page-innet-top">
		<div id="header" class="clearfix">
			<div id="navbar">
				<div class="container site-header">
					<div class="row">
						<div class="site-header-inner clearfix">
						<div class="site-logo col-md-4 col-sm-12 col-xs-12">
							<div id="logo">
								<?php if ($logo): ?>
								<a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"> <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /> </a>
								<?php endif; ?>
								<?php if (!empty($site_name)): ?>
								<a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
								<?php endif; ?>
							</div>
						</div>
						<div class="site-header col-md-8 col-sm-12 col-xs-12"> 
							<!-- .btn-navbar is used as the toggle for collapsed navbar content -->
							<!-- <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-collapse"> <span class="sr-only">Toggle navigation</span> <span class="icon-bar"></span> <span class="icon-bar"></span> <span class="icon-bar"></span> </button> -->
							<div id="nav">
								<?php if (!empty($page['navigation'])): ?>
								<div class="navbar-collapse collapse">
									<nav role="navigation">
										<?php if (!empty($page['navigation'])): ?>
										<?php print render($page['navigation']); ?>
										<?php endif; ?>
									</nav>
								</div>
								<?php endif; ?>
							</div>
						</div>
					</div>
					</div>
				</div>
			</div>
		</div>
		<div class="main-container clearfix">
			<div class="container site-main-container">
				<div class="site-slider">
					<div class="row">
						<div class="col-md-3 col-sm-12 col-xs-12">
							<?php if (!empty($page['slider_left'])): ?>
							<?php print render($page['slider_left']); ?>
							<?php endif; ?>
						</div>
						<div class="col-md-9 col-sm-12 col-xs-12">
							<?php if (!empty($page['slider_right'])): ?>
							<?php print render($page['slider_right']); ?>
							<?php endif; ?>
						</div>
					</div>
				</div>
				<div class="site-middle-content">
					<div class="row">
						<?php if ($page['sidebar_first']): ?>
						<aside class="col-sm-3" role="complementary"> <?php print render($page['sidebar_first']); ?> </aside>
						<!-- /#sidebar-first -->
						<?php endif; ?>
						<section<?php print $content_column_class; ?>>
							<?php if (!empty($page['highlighted'])): ?>
							<div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
							<?php endif; ?>
							<?php print $messages; ?>
							<?php if (!empty($page['help'])): ?>
							<?php print render($page['help']); ?>
							<?php endif; ?>
							<?php if (!empty($action_links)): ?>
							<ul class="action-links">
								<?php print render($action_links); ?>
							</ul>
							<?php endif; ?>
						</section>
						<?php if (!empty($page['sidebar_second'])): ?>
						<aside class="col-sm-3" role="complementary"> <?php print render($page['sidebar_second']); ?> </aside>
						<!-- /#sidebar-second -->
						<?php endif; ?>
					</div>
				</div>
				<div class="bottom">
					<div class="row">
						<?php if($page['bottom_left']): ?>
						<div class="col-md-3 col-sm-12 col-xs-12"> <?php print render($page['bottom_left']); ?> </div>
						<?php endif; ?>
						<?php if($page['bottom_center']): ?>
						<div class="col-md-6 col-sm-12 col-xs-12"> <?php print render($page['bottom_center']); ?> </div>
						<?php endif; ?>
						<?php if($page['bottom_right']): ?>
						<div class="col-md-3 col-sm-12 col-xs-12"> <?php print render($page['bottom_right']); ?> </div>
						<?php endif; ?>
					</div>
				</div>
			</div>
		</div>
	</div>
	<div class="page-innet-bottom">
		<div class="container footer-inner">
			<div class="footer-mesage text-center"><?php print render($page['footer']); ?> </div>
		</div>
	</div>
</div>