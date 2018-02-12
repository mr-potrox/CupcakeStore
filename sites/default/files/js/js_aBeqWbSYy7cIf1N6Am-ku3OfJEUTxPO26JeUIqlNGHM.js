/**
 * @file
 * JavaScript integration between Google Charts and Drupal.
 */
(function ($) {

Drupal.behaviors.chartsGoogle = {};
Drupal.behaviors.chartsGoogle.attach = function(context, settings) {
  // First time loading in Views preview may not work because the Google JS
  // API may not yet be loaded.
  if (typeof google !== 'undefined') {
    google.load('visualization', '1', { callback: renderCharts });
  }

  // Redraw charts on window resize.
  var debounce;
  $(window).resize(function() {
    clearTimeout(debounce);
    debounce = setTimeout(function() {
      $('.charts-google').each(function() {
        var wrap = $(this).data('chartsGoogleWrapper');
        if (wrap) {
          wrap.draw(this);
        }
      });
    }, 75);
  });

  function renderCharts() {
    $('.charts-google').once('charts-google', function() {
      if ($(this).attr('data-chart')) {
        var config = $.parseJSON($(this).attr('data-chart'));
        var wrap = new google.visualization.ChartWrapper();
        wrap.setChartType(config.visualization);
        wrap.setDataTable(config.data);
        wrap.setOptions(config.options);

        // Apply data formatters. This only affects tooltips. The same format is
        // already applied via the hAxis/vAxis.format option.
        var dataTable = wrap.getDataTable();
        if (config.options.series) {
          for (var n = 0; n < config.options.series.length; n++) {
            if (config.options.series[n]['_format']) {
              var format = config.options.series[n]['_format'];
              if (format['dateFormat']) {
                var formatter = new google.visualization.DateFormat({ pattern: format['dateFormat'] });
              }
              else {
                var formatter = new google.visualization.NumberFormat({ pattern: format['format'] });
              }
              formatter.format(dataTable, n + 1);
            }
          }
        }

        // Apply individual point properties, by adding additional "role"
        // columns to the data table. So far this only applies "tooltip"
        // properties to individual cells. Ideally, this would support "color"
        // also. Feature request:
        // https://code.google.com/p/google-visualization-api-issues/issues/detail?id=1267
        var columnsToAdd = {};
        var rowCount = dataTable.getNumberOfRows();
        var columnCount = dataTable.getNumberOfColumns();
        for (var rowIndex in config._data) {
          if (config._data.hasOwnProperty(rowIndex)) {
            for (var columnIndex in config._data[rowIndex]) {
              if (config._data[rowIndex].hasOwnProperty(columnIndex)) {
                for (var role in config._data[rowIndex][columnIndex]) {
                  if (config._data[rowIndex][columnIndex].hasOwnProperty(role)) {
                    if (!columnsToAdd[columnIndex]) {
                      columnsToAdd[columnIndex] = {};
                    }
                    if (!columnsToAdd[columnIndex][role]) {
                      columnsToAdd[columnIndex][role] = new Array(rowCount);
                    }
                    columnsToAdd[columnIndex][role][rowIndex] = config._data[rowIndex][columnIndex][role];
                  }
                }
              }
            }
          }
        }
        // Add columns from the right-most position.
        for (var columnIndex = columnCount; columnIndex >= 0; columnIndex--) {
          if (columnsToAdd[columnIndex]) {
            for (var role in columnsToAdd[columnIndex]) {
              if (columnsToAdd[columnIndex].hasOwnProperty(role)) {
                dataTable.insertColumn(columnIndex + 1, {
                  type: 'string',
                  role: role,
                });
                for (var rowIndex in columnsToAdd[columnIndex][role]) {
                  dataTable.setCell(parseInt(rowIndex) - 1, columnIndex + 1, columnsToAdd[columnIndex][role][rowIndex]);
                }
              }
            }
          }
        }

        wrap.draw(this);
        $(this).data('chartsGoogleWrapper', wrap);
      }
    });
  }
};

})(jQuery);
;
/*jslint browser: true */ /*global jQuery: true */

/**
 * jQuery Cookie plugin
 *
 * Copyright (c) 2010 Klaus Hartl (stilbuero.de)
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 */

// TODO JsDoc

/**
 * Create a cookie with the given key and value and other optional parameters.
 *
 * @example $.cookie('the_cookie', 'the_value');
 * @desc Set the value of a cookie.
 * @example $.cookie('the_cookie', 'the_value', { expires: 7, path: '/', domain: 'jquery.com', secure: true });
 * @desc Create a cookie with all available options.
 * @example $.cookie('the_cookie', 'the_value');
 * @desc Create a session cookie.
 * @example $.cookie('the_cookie', null);
 * @desc Delete a cookie by passing null as value. Keep in mind that you have to use the same path and domain
 *       used when the cookie was set.
 *
 * @param String key The key of the cookie.
 * @param String value The value of the cookie.
 * @param Object options An object literal containing key/value pairs to provide optional cookie attributes.
 * @option Number|Date expires Either an integer specifying the expiration date from now on in days or a Date object.
 *                             If a negative value is specified (e.g. a date in the past), the cookie will be deleted.
 *                             If set to null or omitted, the cookie will be a session cookie and will not be retained
 *                             when the the browser exits.
 * @option String path The value of the path atribute of the cookie (default: path of page that created the cookie).
 * @option String domain The value of the domain attribute of the cookie (default: domain of page that created the cookie).
 * @option Boolean secure If true, the secure attribute of the cookie will be set and the cookie transmission will
 *                        require a secure protocol (like HTTPS).
 * @type undefined
 *
 * @name $.cookie
 * @cat Plugins/Cookie
 * @author Klaus Hartl/klaus.hartl@stilbuero.de
 */

/**
 * Get the value of a cookie with the given key.
 *
 * @example $.cookie('the_cookie');
 * @desc Get the value of a cookie.
 *
 * @param String key The key of the cookie.
 * @return The value of the cookie.
 * @type String
 *
 * @name $.cookie
 * @cat Plugins/Cookie
 * @author Klaus Hartl/klaus.hartl@stilbuero.de
 */
jQuery.cookie = function (key, value, options) {

    // key and value given, set cookie...
    if (arguments.length > 1 && (value === null || typeof value !== "object")) {
        options = jQuery.extend({}, options);

        if (value === null) {
            options.expires = -1;
        }

        if (typeof options.expires === 'number') {
            var days = options.expires, t = options.expires = new Date();
            t.setDate(t.getDate() + days);
        }

        return (document.cookie = [
            encodeURIComponent(key), '=',
            options.raw ? String(value) : encodeURIComponent(String(value)),
            options.expires ? '; expires=' + options.expires.toUTCString() : '', // use expires attribute, max-age is not supported by IE
            options.path ? '; path=' + options.path : '',
            options.domain ? '; domain=' + options.domain : '',
            options.secure ? '; secure' : ''
        ].join(''));
    }

    // key and possibly options given, get cookie...
    options = value || {};
    var result, decode = options.raw ? function (s) { return s; } : decodeURIComponent;
    return (result = new RegExp('(?:^|; )' + encodeURIComponent(key) + '=([^;]*)').exec(document.cookie)) ? decode(result[1]) : null;
};
;
