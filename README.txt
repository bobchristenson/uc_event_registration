-- SUMMARY --

This is part of a larger solution which includes a feature which does most of the legwork.
This module itself simply acts as glue to make a predefined workflow go smoothly together
into an event registration system.

-- REQUIREMENTS --

You must have Ubercart and Webform 3 installed along with some misc modules
to be named later. This is also useless without the feature which goes with it.


-- CURRENT FEATURES --

The ms_event_registration module currently does the following actions:
* Creates default quantity and paid/unpaid fields on webform content types called 'event_form'
* If the node type is 'paidevent' (our ubercart product class) it removes the submit button and attribute displays
* On the webform we unset the payment status from display
* We change the title of the submit button to something better
* We validate the form using custom validation for quantity (making sure its an integer)
* We have our own submit handler which: Gets quantity from webform, stores submission id as an attribute, adds referenced item to cart, directs to checkout.

-- TO DO LIST --
* Build a feature which includes content types, product attributes, and any vars we may need  (waiting on [[http://drupal.org/node/880770]])
* Get conditional action, in the module, to actually work
* Update conditional action to deal with multiple registrations during checkout (or other products)
* Get down to one content type (add webform directly on event node): waiting on [[ http://drupal.org/node/1008514]]


-- FEATURE IDEAS / REQUESTS --