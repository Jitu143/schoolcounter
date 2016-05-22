(function($) {

  $.fn.sc_slick_slides = function()
  {
    $(this).slick({
      dots: true,
      infinite: false,
      speed: 800,
      slidesToShow: 4,
      slidesToScroll: 4,
      autoplay: true,
      autoplaySpeed: 2000,
      responsive: [
        {
          breakpoint: 1100,
          settings: {
            slidesToShow: 3,
            slidesToScroll: 3,
            infinite: true,
            dots: true
          }
        },
        {
          breakpoint: 800,
          settings: {
            slidesToShow: 2,
            slidesToScroll: 2
          }
        },
        {
          breakpoint: 500,
          settings: {
            slidesToShow: 1,
            slidesToScroll: 1
          }
        }
      ]
    });
  }

  function stick_to_top(block_id) {
  }

  Drupal.behaviors.slick_responsive = {
    attach: function (context, settings) {
    }
  };
})(jQuery);
