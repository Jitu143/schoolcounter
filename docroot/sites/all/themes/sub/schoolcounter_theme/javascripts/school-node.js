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
      // Activity block.
      $('#block-views-18a210c3d408e4f41ded41008c973061 .view-content').sc_slick_slides()
      // Infrastructure block.
      $('#block-views-aa78a9c77fefc3b3bbce9dee76941186 .view-content').sc_slick_slides()

      $('#block-views-views-school-chairman .field-content').jScrollPane();
      $('#block-views-views-school-principal .field-content').jScrollPane();
      $('#block-views-views-school-academics .views-row').jScrollPane();
    }
  };
})(jQuery);
