<?php
// $Id: node.tpl.php,v 1.4 2009/07/13 23:52:58 andregriffin Exp $
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
	<?php print $user_picture ?>
	
	<?php print render($title_prefix); ?>
	<?php if (!$page): ?>
		<h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
	<?php endif; ?>
	<?php print render($title_suffix); ?>
	
	<?php if ($display_submitted): ?>
	<div class="submitted"><?php print $submitted; ?></div>
	<?php endif; ?>

	<div id="content" class="clearfix"<?php print $content_attributes; ?>>
	<?php
		hide($content['comments']);
		hide($content['links']);
		print render($content);
	?>
	</div>
	
	<div class="meta clearfix">
		<?php if (!empty($content['links'])): ?>
		<div class="links clearfix"><?php print render($content['links']); ?></div>
		<?php endif; ?>
		<?php /*?><div class="terms clearfix"><?php print t('Tags:') ?></span><?php print $terms; ?></div><?php */?>
	</div>
</div>
