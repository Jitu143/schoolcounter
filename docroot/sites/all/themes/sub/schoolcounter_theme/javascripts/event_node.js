(function($) {
  Drupal.behaviors.event_node_page = {
    attach: function (context, settings) {
      $('.node-type-ct-events .node-ct-events .field-name-field-ct-images .field-items').slick({
        arrows: false,
        dots: true,
        infinite: true,
        speed: 800,
        slidesToShow: 1,
        autoplay: true,
        autoplaySpeed: 2000,
        adaptiveHeight: true,
      });
    }
  };
})(jQuery);
