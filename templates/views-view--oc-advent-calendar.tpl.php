<?php
$transdate = date('m-d-Y', time());
$is_december  = true; //date('m') == 12 ? true : false;
$cur_date = date('d');
?>
<?php if ($header): ?>
    <div class="oc-advent-view-header">
      <?php print "<h2>".$view->get_title()."</h2>"; ?>
      <?php print $header; ?>
    </div>
<?php endif; ?>
<div class="advent-calendar-frame">
    <?php foreach($view->result as $index => $node) { ?>
    <div class="advent-calendar-gate-wrapper <?php echo $index < $cur_date && $is_december ? 'advent-calendar-can-open' : ''  ?>">
        <div class="advent-calendar-background-image ">
            <?php if($node->file_managed_field_data_field_advent_image_uri == null){ ?>
                <img class="advent-calendar-day-image" src="/sites/all/modules/custom/oc_advent_calendar/images/xmas-advent-calendar-image-<?php echo $index+1 ?>.png" />
            <?php }else { ?>
                <img class="advent-calendar-day-image" src="<?php echo file_create_url($node->file_managed_field_data_field_advent_image_uri) ?>" />
            <?php }?>
            <span class="advent-calendar-day-text"><?php echo $node->field_data_field_position_field_position_value  ?></span>
            <?php if($index < $cur_date && $is_december) { ?>
                <div class="advent-calendar-day-content-modal"><?php echo isset($node->field_body[0]) ? $node->field_body[0]['rendered']['#markup'] : '' ?></div>
            <?php }?>
        </div>
     </div>
    <?php }?>
</div>
<div class="advent-calendar-modal-wrapper">
            <div id="snow">
        </div>
    <div class="advent-calendar-modal-content-wrap">
        <div class="advent-calendar-modal-header">
            
        </div>
        <div class="advent-calendar-modal-body">aaaa</div>
        <div class="advendt-calendar-close-button">
            <img alt="modal close image" title="modal close image" src="/sites/all/modules/custom/oc_advent_calendar/images/close-icon.png">
	</div>
   </div>
</div>