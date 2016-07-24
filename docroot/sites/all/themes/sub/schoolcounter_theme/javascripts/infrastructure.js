(function($) {
  Drupal.behaviors.infrastructure_page = {
    attach: function (context, settings) {
      $('#block-views-0a43ea420f4ed790aec8cecfcaaa400a .view-content').slick({
        slidesToShow: 1,
        slidesToScroll: 1,
        arrows: false,
        speed: 900,
        autoplaySpeed: 2000,
        autoplay: true,
      });
    }
  };
})(jQuery);
