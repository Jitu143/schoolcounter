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

      $('#block-views-views-home-page-block .view-content').slick({
        dots: false,
        arrows: false,
        autoplay: true,
        autoplaySpeed: 3000,
        speed: 800,
        slidesToShow: 1,
        adaptiveHeight: true,
      });

      $('#block-views-views-home-page-block-1 .view-content').slick({
        dots: true,
        infinite: false,
        speed: 300,
        slidesToShow: 4,
        slidesToScroll: 4,
        responsive: [
          {
            breakpoint: 1024,
            settings: {
              slidesToShow: 3,
              slidesToScroll: 3,
              infinite: true,
              dots: true
            }
          },
          {
            breakpoint: 600,
            settings: {
              slidesToShow: 2,
              slidesToScroll: 2
            }
          },
          {
            breakpoint: 480,
            settings: {
              slidesToShow: 1,
              slidesToScroll: 1
            }
          }
        ]
      });
    }
  };
})(jQuery);
