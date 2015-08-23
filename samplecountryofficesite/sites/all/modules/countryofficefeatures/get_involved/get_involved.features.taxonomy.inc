<?php
/**
 * @file
 * get_involved.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function get_involved_taxonomy_default_vocabularies() {
  return array(
    'get_involved_categories' => array(
      'name' => 'Get Involved Categories',
      'machine_name' => 'get_involved_categories',
      'description' => 'Ways to get involved with Ashoka',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
