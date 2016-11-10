/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery(document).ready(function($){
    $('.advent-calendar-gate-wrapper').click(function(){
        $(this).find('.advent-calendar-background-image').toggleClass('advent-calendar-gate-open');
        var modalbody = $(this).find('.advent-calendar-day-content-modal').html();
         $('.advent-calendar-modal-wrapper').find('.advent-calendar-modal-body').html(modalbody);
        setTimeout(function(){ 
        
       
        //$('.advent-calendar-modal-wrapper').toggleClass('advent-calendar-modal-wrapper-show');
        $('.advent-calendar-modal-wrapper').fadeIn('600');
        }, 700);
        /*
         * Trigger a Dialog
         */
        
    });
    $('.advendt-calendar-close-button').click(function(){
         $('.advent-calendar-modal-wrapper').fadeOut(600,function(){
            // $('.advent-calendar-modal-wrapper').toggleClass('advent-calendar-modal-wrapper-show');
             $('.advent-calendar-gate-open').toggleClass('advent-calendar-gate-open');
         });
         
         
    })
    
});