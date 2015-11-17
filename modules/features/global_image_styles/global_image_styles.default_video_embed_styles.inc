<?php
/**
 * @file
 * global_image_styles.default_video_embed_styles.inc
 */

/**
 * Implements hook_default_video_embed_styles().
 */
function global_image_styles_default_video_embed_styles() {
  $export = array();

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'ukcloudawards_feature_teaser';
  $video_embed_style->title = 'UK Cloud Award Full Feature Teaser';
  $video_embed_style->data = array(
    'youtube' => array(
      'width' => '630',
      'height' => '315',
      'theme' => 'dark',
      'autoplay' => 0,
      'vq' => 'large',
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '3',
      'controls' => '1',
      'autohide' => '2',
    ),
    'vimeo' => array(
      'width' => '640',
      'height' => '360',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
      'froogaloop' => 0,
    ),
    'data__active_tab' => 'edit-data-youtube',
  );
  $export['ukcloudawards_feature_teaser'] = $video_embed_style;

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'ukcloudawards_full';
  $video_embed_style->title = 'UK Cloud Award Full';
  $video_embed_style->data = array(
    'youtube' => array(
      'width' => '780',
      'height' => '439',
      'theme' => 'dark',
      'autoplay' => 1,
      'vq' => 'large',
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '3',
      'controls' => '1',
      'autohide' => '2',
    ),
    'vimeo' => array(
      'width' => '640',
      'height' => '360',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
      'froogaloop' => 0,
    ),
    'data__active_tab' => 'edit-data-youtube',
  );
  $export['ukcloudawards_full'] = $video_embed_style;

  return $export;
}
