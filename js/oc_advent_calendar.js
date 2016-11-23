/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery(document).ready(function($){
    competitions_participated = [];
    var cookie_data = $.cookie('oc_advent');
    if(cookie_data !== undefined && cookie_data != null)
    {
        competitions_participated = JSON.parse(cookie_data);
    }
    
    $('.advent-calendar-can-open').click(advant_gate_open);
    $('.advent-calendar-can-open-staff').unbind('click');
    $('.advent-calendar-can-open-staff').click(advant_gate_open);
    
    $('.advendt-calendar-close-button').click(function(){
         $('.advent-calendar-modal-wrapper').fadeOut(600,function(){
            // $('.advent-calendar-modal-wrapper').toggleClass('advent-calendar-modal-wrapper-show');
             $('.advent-calendar-gate-open').toggleClass('advent-calendar-gate-open');
         });
    });
    $('.advent-calendar-modal-submit-contact-form').click(function(){
        var arguments = $('.advent-calendar-modal-contact-form form').serialize();
        /*
         * Make ajax email send email request.
         */
        
        $.ajax({
            method: "GET",
            url: "/oc/advent/ajax/response",
            data: arguments
          })
            .done(function( msg ) {
              if(msg === "1")
              {
                var current_day_index = $('.advent-calendar-modal-wrapper').find('#Dayindex').val();
                competitions_participated.push(current_day_index);
                $.cookie("oc_advent", JSON.stringify(competitions_participated), { expires : 90 });
                $('.advent-calendar-modal-contact-form form').toggle();
                $('.advent-calendar-modal-contact-form-msg').html(Drupal.t('Tak for dit svar'));
                $('.advent-calendar-modal-contact-form-msg').toggle();
              }
              else
              {
                  $('.advent-calendar-modal-contact-form-msg').html(Drupal.t('Vi oplevede desværre en fejl , prøv igen.'));
                  $('.advent-calendar-modal-contact-form-msg').toggle();
              }

         });
    });
    function advant_gate_open(){
        $(this).find('.advent-calendar-background-image').toggleClass('advent-calendar-gate-open');
        var has_competition = $(this).find('.advent-calendar-enable-contact-form').html()
        var current_day_index = $(this).find('.advent-calendar-enable-contact-day-index').html();
        
        $('.advent-calendar-modal-contact-form form').trigger('reset');
        if($('.advent-calendar-modal-contact-form-msg').css('display') !== 'none')
        {
            $('.advent-calendar-modal-contact-form-msg').css('display','none');
        }
        if($.inArray(current_day_index,competitions_participated) !== -1)
        {
            $('.advent-calendar-modal-contact-form-msg').html(Drupal.t('Tak for dit svar'));
            $('.advent-calendar-modal-contact-form-msg').toggle();
            if($('.advent-calendar-modal-contact-form form').css('display') !== 'none' )
            {
                $('.advent-calendar-modal-contact-form form').css('display','none');
            }
        }
        if(!$('.advent-calendar-modal-contact-form form').is(':visible') && has_competition === "1" && $.inArray(current_day_index,competitions_participated) === -1)
        {
           $('.advent-calendar-modal-contact-form form').css('display','block');
        
        }
        
        var modalbody = $(this).find('.advent-calendar-day-content-modal').html();
        $('.advent-calendar-modal-wrapper').find('.advent-calendar-modal-body-text').html(modalbody);
        
        $day_index =  $(this).find('.advent-calendar-enable-contact-day-index').html();
        $('.advent-calendar-modal-wrapper').find('#Dayindex').val($day_index);
        
        setTimeout(function(){ 
        //$('.advent-calendar-modal-wrapper').toggleClass('advent-calendar-modal-wrapper-show');
        $('.advent-calendar-modal-wrapper').fadeIn('600');
        }, 700);
        /*
         * Trigger a Dialog
         */
        
    }
    
});