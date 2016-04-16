(function($) {
  Drupal.behaviors.jainsamaj_front = {
    attach: function(context, settings) {
      $('#block-views-views-events-block .view-content').slick({
        dots: false,
        infinite: true,
        speed: 300,
        slidesToShow: 1,
        adaptiveHeight: true
      });
    }
  };
})(jQuery);
