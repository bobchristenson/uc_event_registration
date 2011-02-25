<?php 
/**
 * @file
 * This file handles all the conditional actions stuff
 *
 */
 
 
/**
 * Implementation of hook_ca_predicate().
 *
 * Mark a event registration webform as paid after checkout
 */

function uc_event_registration_ca_predicate() {  
 //When a checkout happens, check the balance and fire the action
  $configurations['uc_event_registration_mark_paid'] = array(
    '#title' => t('Mark Event Registrations as Paid'),
    '#description' => t('When a user checks out with an event registration we mark it paid after the order is complete.'),
    '#class' => 'Event Registration',
    '#trigger' => 'uc_checkout_complete',
    '#status' => 1,
    '#conditions' => array(
      '#operator' => 'AND',
      '#conditions' => array(
        array(
          '#name' => 'uc_payment_condition_order_balance',
          '#title' => t('If the balance is less than or equal to $0.00.'),
          '#argument_map' => array(
            'order' => 'order',
          ),
          '#settings' => array(
            'negate' => FALSE,
            'balance_comparison' => 'less_equal',
          ),
        ),
        array(
          '#name' => 'uc_order_status_condition',
          '#title' => t('If the order status is Payment Received.'),
          '#argument_map' => array(
            'order' => 'order',
          ),
          '#settings' => array(
            'order_status' => 'payment_received',
          ),
        ),
      ),
    ),
    '#actions' => array(
      array(
        '#name' => 'uc_event_registration_mark_paid',
        '#title' => t('Mark Webform as Paid after Checkout'),
        '#argument_map' => array(
          'order' => 'order', 
        ),
      ),
    ),
  );
  return $configurations;
}

/**
 * Implementation of hook_ca_action().
 *
 * Mark a event registration webform as paid after checkout
 */
function uc_event_registration_ca_action() {
$order_arg = array(
    '#entity' => 'uc_order',
    '#title' => t('Order'),
  );

$actions['uc_event_registration_mark_paid'] = array(
    '#title' => t('Mark Webform as Paid after Checkout'),
    '#category' => t('Event Registration'),
    '#callback' => 'uc_event_registration_mark_paid',
    '#arguments' => array(
      'order' => $order_arg,
    ),
  );
  return $actions;
}
  
// Mark a webform as paid
function uc_event_registration_mark_paid(&$order, $settings) {
  foreach ($order->products as $theproduct) {
    $sid = $theproduct->data['attributes']['submission_id'];
    $value = db_query("UPDATE {webform_submitted_data} SET data = '%s' WHERE cid = %d AND sid = %d", 'paid', 2, $sid);
  }
  return $value;
} 