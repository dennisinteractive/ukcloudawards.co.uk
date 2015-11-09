(function($) {
Drupal.behaviors.dennisMicrosite = {
attach: function (context, settings) {

$('.entry-criteria-section').hide();

$('.entry-criteria-link, .entry-jump-link').click(function(e){
	var src_class = $(e.target).attr('class');
  console.log($('#node-1 .entry-criteria-link'));
	var criteria_container = $('.'+$(this).data('expand'));
	if(src_class == "entry-criteria-link") criteria_container.slideToggle();
	return false;
});


$(function() {
  $('a[href*=#]:not([href=#])').click(function() {
    if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
      var target = $(this.hash);
      target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
      if (target.length) {
        $('html,body').animate({
          scrollTop: target.offset().top - 100
        }, 1000);
        return false;
      }
    }
  });
});

}
};
})(jQuery);