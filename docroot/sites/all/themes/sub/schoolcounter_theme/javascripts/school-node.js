(function($) {
  Drupal.behaviors.school_node_page = {
    attach: function (context, settings) {
      $('#block-views-views-school-block-1 .view-content').slick({
        arrows: false,
        dots: true,
        infinite: true,
        speed: 800,
        slidesToShow: 1,
        autoplay: true,
        autoplaySpeed: 2000,
        fade: true,
        cssEase: 'linear'
      });
    }
  };
})(jQuery);
