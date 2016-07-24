(function($) {
  Drupal.behaviors.blog_page = {
    attach: function (context, settings) {
      $('.view-views-school-blogs.view-display-id-blogs_landing_page .blog-info').mCustomScrollbar({
        theme:"3d"
      });
      $('.view-views-school-blogs.view-display-id-page_1 .blog-info').mCustomScrollbar({
        theme:"3d"
      });
    }
  };
})(jQuery);
