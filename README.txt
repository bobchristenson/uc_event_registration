The Ubercart Event Registration module is a feature package paired with a small 'glue' module which yields a simple event registration system.  The main goal here was to tie together webform module with Ubercart 2.x to give us a registration sign-up form which could have completely custom and unlimited form information, unique to each event, which can be updated easily by a site editor with limited Drupal experience.



---The Approach---
The main goal here is to glue together completely stock Ubercart and Webform modules, allowing them to do the heavy lifting.  This module simply puts the pieces together in a way that wasn't previously possible without custom code.



---Installation---
To install the module, make sure you have all required modules in the install.  Then, simply enable the uc_event_registration module found under the Ubercart package.  This will automatically enable all required modules and the accompanying feature.  Note that during installation it creates a new Ubercart product class called "paidevent".  You should check your existing content types before enabling this module to make sure this doesn't conflict with any existing type names.



---Using the Feature---
There are no configuration screens for this module.  To create a paid event with registration simply:

--Configure Ubercart with a payment method and all other necessary Ubercart stuff, as normal.
--Create a "Paid Event" node (this content type was created upon installation)
--This event will automatically have a webform attached (look for the webform tab) with 2 default fields.  <strong>Never delete these fields</strong> as they're required to make this recipe work.
--Add any additional fields you'd like to collect in the webform.  These additional fields are purely informational and are not (yet!) integrated into checkout
--Jump up and down with excitement because people can now pay to register for that event
--After some registrations, look at the event's webform results.  You'll see all registrations there along with whether they've been paid for or not.  <em>(Ubercart automatically marks webform submissions as 'paid' after checkout is completed)</em></ol>



---Current Requirements, Limitations, and Upcoming Features---
--Webform 6.x-3.6 or higher and Ubercart 6.x-2.x are required.
--Currently we are taking only simple registrations.  If you try to use any price altering functionality (discounts, price modifications, etc) in Ubercart, they won't work with this feature.  This is a to-do for future releases
</ul>



---What about Drupal 7?---
Most likely this module will be completely re-written for Drupal 7 to work with all the new whiz-bang functionality and Commerce module.  While that will happen eventually, there's no plans right this minute.



---Similar Modules or Approaches---
The following modules may seem similar but, trust me...they're not.  Here's why:

-UC Signup
Signup module is great, and uc_signup ties it into ubercart.  The problem is, we can't have unlimited custom fields in the registration form.  This is exactly what this module seeks to cure and webform is what the doctor ordered.

-Uc Webform Productize
This was similar to what we're doing here and it could be mined for some additional code, but as of now, it's kaput.

-UC Node Checkout
This is the approach that has been used alot for Drupal conferences and demo'd at drupalcons.  The huge problem here is twofold:  First, registrations are nodes.  That means we have to build views to create registration lists and that seems like unnecessary overhead when Webform is so much ligher weight.  Second, and most importantly, you need a new content type for EVERY event.  No thanks.  On sites that are doing dozens of events per year, this would mean, eventually, a huge amount of content types.  That's bad.

-And the rest...
Then we have things like webform pane (which doesn't let us do what we want), and all kinds of other methods where an event creator would have to dabble in ubercart classes and attributes or other stuff they shouldn't be touching.