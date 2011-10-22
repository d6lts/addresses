/**
 * @author Cody Craven
 * @file addresses.js
 *
 * Rebuild province field with a select list of provinces for country selected
 * on load and on change.
 */
Drupal.behaviors.addresses = function(context) {
  // Bind country changes to reload the province field and
  // load province select element onLoad, do it once.
  // See http://drupal.org/node/817244
  $('.addresses-country-field:not(.addresses-processed)',context)
    .addClass('addresses-processed')
    .bind('change',function(){performProvinceAjax(this);})
    .change();

  // Make province select list call
  function performProvinceAjax(countryElement) {
    // Country field's related province element
    var provinceElement_id = $(countryElement).attr('id').replace('-country', '-province');
    var provinceElement_wrapper_id = provinceElement_id + '-wrapper';
    var provinceElement = $('#' + provinceElement_id);
    var attributes = {};
    // Iterates over the element attributes to create an object of attributes to pass in the ajax call.
    if(provinceElement.length){
      $.each(provinceElement[0].attributes,function(index,attr){
        if(!(attr.name in{'type':1,'value':1,'size':1,'id':1,'name':1,'class':1})){
          attributes[attr.name]=attr.value;
        }
      });
    }
    $.ajax({
      type:'GET',
      url:Drupal.settings.basePath,
      success:updateProvinceField,
      dataType:'json',
      data:{
        q:'addresses/province_ajax',
        country:$(countryElement).val(),
        field_id:provinceElement.attr('id'),
        field_name:provinceElement.attr('name'),
        passback:provinceElement_wrapper_id,
        province:provinceElement.val(),
        language:Drupal.settings.addresses.language,
        'attributes' : JSON_stringify(attributes)
      }
    });
  }

  // A Wrapper function to check for the JSON object before using it.
  function JSON_stringify(my_object) {
    if (window.JSON != undefined) {
      return JSON.stringify(my_object);
    }
    return '';
  }

  // Populate province field
  function updateProvinceField(data) {
    if(data.hide){
      $('#'+data.passback).hide();
    }else{
      $('#'+data.passback).show();
    }
    $('#'+data.passback).html(data.field);
  }
};
// vim: ts=2 sw=2 et syntax=javascript
