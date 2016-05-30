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

      $('#block-views-views-events-block-1 .view-content').sc_slick_slides();
      $('#block-views-views-school-faculty-block .view-content').sc_slick_slides();
      $('#block-views-views-school-blogs-block-1 .view-content').sc_slick_slides();

      $('#block-views-views-school-about-us .field-content').jScrollPane();
      $('#block-views-views-school-chairman .field-content').jScrollPane();
      $('#block-views-views-school-principal .field-content').jScrollPane();
    }
  };
})(jQuery);
