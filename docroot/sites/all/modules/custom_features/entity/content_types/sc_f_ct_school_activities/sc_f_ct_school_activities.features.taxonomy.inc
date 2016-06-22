<?php
/**
 * @file
 * sc_f_ct_school_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sc_f_ct_school_activities_taxonomy_default_vocabularies() {
  return array(
    'vocab_acitivites' => array(
      'name' => 'Acitivites',
      'machine_name' => 'vocab_acitivites',
      'description' => 'Types of activites',
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
