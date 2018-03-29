TEMPLATE = subdirs

SUBDIRS += \
    core/core.pro \
{% for name in ServiceNames %}
    {{name}}/{{name}}.pro \
{% endfor %}
