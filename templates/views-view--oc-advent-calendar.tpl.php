<?php
$transdate = date('m-d-Y', time());
$is_december  = date('m') == 12 ? true : false;
$cur_date = date('d');
global $user;
?>
<?php if ($header): ?>
    <div class="oc-advent-view-header">
      <?php print "<h2>".$view->get_title()."</h2>"; ?>
      <?php print $header; ?>
    </div>
<?php endif; ?>
<div class="advent-calendar-frame">
    <?php foreach($view->result as $index => $node) { ?>
    <div class="advent-calendar-gate-wrapper <?php echo $index < $cur_date && $is_december ? 'advent-calendar-can-open' : ' '; echo oc_advent_calendar_user_has_role('redaktør') || oc_advent_calendar_user_has_role('administrator') ? ' advent-calendar-can-open-staff' : ' '?>">
        <div class="advent-calendar-background-image ">
            <?php if($node->file_managed_field_data_field_advent_image_uri == null){ ?>
                <img class="advent-calendar-day-image" src="/sites/all/modules/custom/oc_advent_calendar/images/<?php echo $index+1 ?>.png" />
            <?php }else { ?>
                <img class="advent-calendar-day-image" src="<?php echo file_create_url($node->file_managed_field_data_field_advent_image_uri) ?>" />
            <?php }?>
            <span class="advent-calendar-day-text"><?php echo $node->field_data_field_position_field_position_value  ?></span>
            <?php if(($index <= $cur_date && $is_december) || oc_advent_calendar_user_has_role('redaktør') || oc_advent_calendar_user_has_role('administrator')) { ?>
                <div class="advent-calendar-day-content-modal"><?php echo isset($node->field_body[0]) ? $node->field_body[0]['rendered']['#markup'] : '' ?></div>
                <?php if($cur_date == $index+1 || (oc_advent_calendar_user_has_role('redaktør') || oc_advent_calendar_user_has_role('administrator'))){ ?>
                <div class="advent-calendar-enable-contact-form"><?php echo isset($node->field_field_konkurrence[0]) ?  $node->field_field_konkurrence[0]['raw']['value'] : 0 ?></div>
                <?php }else{ ?>
                <div class="advent-calendar-enable-contact-form"><?php echo isset($node->field_field_konkurrence[0]) && $node->field_field_konkurrence[0]['raw']['value'] != 0 ?  -1 : 0 ?></div>
                <?php } ?>
                <div class="advent-calendar-enable-contact-day-index"><?php echo $index+1 ?></div>
            <?php }?>
        </div>
     </div>
    <?php }?>
</div>
<?php if ($footer): ?>
<?php print $footer; ?>
<?php endif;?>
<div class="advent-calendar-modal-wrapper">
            <div id="snow">
        </div>
    <div class="advent-calendar-modal-content-wrap">
        <div class="advent-calendar-modal-header">
            
        </div>
        <div class="advent-calendar-modal-body">
            <div class="advent-calendar-modal-body-text"></div>
            <div class="advent-calendar-modal-contact-form" >
                <form style="display:none">
                    <h2><?php echo t("Send dit svar") ?></h2>
                    <input name="Navn" placeholder="Dit navn" type="text">
                    <input name="Email" placeholder="Email" type="text">
                    <input name="Tlf" placeholder="Telefon nummer" type="text">
                    <textarea name="Text" placeholder="Skriv dit svar her" rows="5" resizable="true"></textarea>
                    <input type="hidden" name="Dayindex" id="Dayindex" type="text">
                    <a class="btn advent-calendar-modal-submit-contact-form">Send</a>
                </form>
            </div>
            <div class="advent-calendar-modal-contact-form-msg" style="display:none"></div>
        </div>

        <div class="advendt-calendar-close-button">
            <img title="Luk" src="/sites/all/modules/custom/oc_advent_calendar/images/close-icon.png" />
	</div>
   </div>
</div>