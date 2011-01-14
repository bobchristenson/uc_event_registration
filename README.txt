-- SUMMARY --

This is part of a larger solution which includes a feature which does most of the legwork.
This module itself simply acts as glue to make a predefined workflow go smoothly together
into an event registration system.

-- REQUIREMENTS --

You must have Ubercart 2.x and Webform 3.4 or higher installed along with the
ms_event_registration_feature which is included in this module

-- CURRENT FEATURES --

The ms_event_registration module currently does the following actions:
-Creates 'Paid Event' Ubercart class on install
- Creates default quantity and paid/unpaid fields on webform paid event
- If the node type is 'paidevent' (our ubercart product class) it removes the submit button and 
attribute displays
- We have our own submit handler which: Gets quantity from webform, stores submission 
id as an attribute, adds referenced item to cart, directs to checkout.
-built in conditional action marks webform as paid upon completion of checkout.
-built in feature moves some vars as well as webform settings
-setup can handle checking out with multiple events at a time

-- TO DO LIST --
Nothing!  Everything currently up to spec.  Add ideas below.


-- FEATURE IDEAS / REQUESTS --