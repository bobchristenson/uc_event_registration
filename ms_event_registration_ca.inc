<?php 
/**
 * @file
 * This file handles all the conditional actions stuff
 *
 */
 
 
/**
 * Implementation of hook_ca_action().
 *
 * Mark a event registration webform as paid after checkout
 */
function ms_event_registration_ca_action() {
	$order_arg = array(
    '#entity' => 'uc_order',
    '#title' => t('Order'),
  ); 
	
	$actions['ms_event_registration_mark_paid'] = array(
    '#title' => t('Mark Webform as Paid after Checkout'),
    '#category' => t('Event Registration'),
    '#callback' => 'ms_event_registration_mark_paid',
    '#arguments' => array(
      'order' => $order_arg,
    ),
  ); 
  return $actions;
}
  
// Mark a webform as paid
function ms_event_registration_mark_paid(&$order, $settings) {	
	foreach ($order->products as $theproduct) {	
		$sid = $theproduct->data['attributes']['submission_id'];
		$value = db_query("UPDATE {webform_submitted_data} SET data = '%s' WHERE cid = %d AND sid = %d", paid, 2, $sid);
	}
	return $value;
} 