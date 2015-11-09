<?php
/**
 * @file
 * stand_alone_boxes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function stand_alone_boxes_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'physical_award_image';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Physical award image';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/sites/ukcloudawards.co.uk/modules/features/stand_alone_boxes/images/physical_awrad_image.jpg" />',
      'format' => 'full_html',
    ),
  );
  $export['physical_award_image'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_intro';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Block to serve as the site intro copy';
  $box->options = array(
    'body' => array(
      'value' => '<p><span style="font-size:16px;">11th March - Plateau, Canary Wharf. Join our <a href="http://www.linkedin.com/groups/UK-Cloud-Awards-2014-7404724/about?report.success=rsWlny3TxZHhGEizn1Ojb_Nz9k5QgVU6tkIKRRC3V6noGdx2AKmQDaCGTynWJ-Y80TeqnHclHb_1H04y0TezDYlSJO91yImBzdzdRcEIAyfoJF4uA6IGbAH96opZgdHuV9coW-UdVYLPkCIj4Kmo742X4_9o2mRysvmbw0U493XKgVeJzwFcof0Otv5PACY8s9Fo_xgpH5GvIAHTjW4nolgOVkLmy-eJzQmSvmgp3TpSEZHMToPSB2YG0KOW2-H0yw4LMZ0zyjLPkCg6C84QWc0ztk5QtVYJAQZd4_c9vr&amp;goback=.anb_7404724_7BCB6979DB9B_*1_*1_*1_*1_*1" target="_blank"> LinkedIn group</a>. Tweet <a class="twitter-hashtag" href="https://twitter.com/intent/tweet?screen_name=ukcloudawards">@ukcloudawards</a>. Discuss <a class="twitter-hashtag" href="https://twitter.com/intent/tweet?button_hashtag=ukcloudawards">#ukcloudawards</a> </span><script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?"http":"https";if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document, "script", "twitter-wjs");</script></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['site_intro'] = $box;

  return $export;
}
