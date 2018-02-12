(function ($) {
  Drupal.behaviors.commerce_add_to_cart_confirmation_overlay = {
    attach:function (context, settings) {
      if ($('.commerce-add-to-cart-confirmation').length > 0) {
        // Add the background overlay.
        $('body').append("<div class=\"commerce_add_to_cart_confirmation_overlay\"></div>");

        // Enable the close link.
        $('.commerce-add-to-cart-confirmation-close').live('click touchend', function(e) {
          e.preventDefault();
          $('.commerce-add-to-cart-confirmation').remove();
          $('.commerce_add_to_cart_confirmation_overlay').remove();
        });
      }
    }
  }
})(jQuery);
;
(function ($) {

  // Disable checkboxes when the user clicks on one of them. (prevent
  // multi-clic
  Drupal.behaviors.kickstartSearch = {
    attach:function (context) {
      $('.facetapi-checkbox').bind('click', function(e) {
        $('.facetapi-checkbox').attr("disabled", true);
      });
    }
  }
})(jQuery);
;
