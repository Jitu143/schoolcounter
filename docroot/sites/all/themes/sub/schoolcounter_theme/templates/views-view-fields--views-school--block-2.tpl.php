<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div id="views-bootstrap-accordion-schooldetail" class="<?php print $classes ?>">
  <?php foreach ($fields as $id => $field): ?>
    <div class="panel panel-default">
      <div class="panel-heading">
        <h4 class="panel-title">
          <a class="accordion-toggle collapsed"
             data-toggle="collapse"
             data-parent="#views-bootstrap-accordion-schooldetail"
             href="#collapse<?php print $id ?>">
            <?php print $field->label_html; ?>
          </a>
        </h4>
      </div>

      <div id="collapse<?php print $id ?>" class="panel-collapse collapse">
        <div class="panel-body">
            <?php print $field->wrapper_prefix; ?>
              <?php print $field->content; ?>
            <?php print $field->wrapper_suffix; ?>
        </div>
      </div>
    </div>
  <?php endforeach ?>
</div>
