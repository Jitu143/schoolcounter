(function($) {
  Drupal.behaviors.event_node_page = {
    attach: function (context, settings) {
      $('#block-views-views-events-block-2 .slide-for ul').slick({
        slidesToShow: 1,
        slidesToScroll: 1,
      });

      // $('#block-views-views-events-block-2 .slide-nav ul').slick({
      //   slidesToShow: 3,
      //   slidesToScroll: 1,
      //   asNavFor: '#block-views-views-events-block-2 .slide-for ul',
      //   dots: true,
      //   centerMode: true,
      //   focusOnSelect: true,
      //   responsive: [
      //     {
      //       breakpoint: 1024,
      //       settings: {
      //         slidesToShow: 3,
      //         slidesToScroll: 3,
      //         infinite: true,
      //         dots: true
      //       }
      //     },
      //     {
      //       breakpoint: 600,
      //       settings: {
      //         slidesToShow: 2,
      //         slidesToScroll: 2
      //       }
      //     },
      //     {
      //       breakpoint: 480,
      //       settings: {
      //         slidesToShow: 1,
      //         slidesToScroll: 1
      //       }
      //     }
      //   ]
      // });
    }
  };
})(jQuery);
