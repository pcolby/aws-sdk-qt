TEMPLATE = subdirs

SUBDIRS += \
{% for name in ServiceNames %}
    {{name}}/{{name}}.pro \
{% endfor %}
