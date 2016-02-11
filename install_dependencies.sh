#!/bin/bash

echo Install dependency modules

echo install and enable views module 
drush dl views

echo install and enable services views
drush dl services_views

echo install and enable media Module
drush dl media

echo install and enable entity reference
drush dl entityreference

echo install and enable features
drush dl features

echo install and enable pathauto
drush dl pathauto

echo install and enable services
drush dl services

echo install and enable wysiwyg
drush install wysiwyg

echo install ang enable services menu
drush dl services_menu

echo install internationalization 
drush dl internationalization

echo install Date field
drush dl date

echo install datepicke
drush dl datepicker

echo install standforf date time picker
drush dl stanford_date_timepicker

echo install panel
drush dl panels

echo done installing 
drush cc all 

