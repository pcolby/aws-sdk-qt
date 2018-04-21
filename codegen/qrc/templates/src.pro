TEMPLATE = subdirs

SUBDIRS += \
    core/core.pro \
{% for name in ModuleNames %}
    {{name|lower}}/{{name|lower}}.pro \
{% endfor %}
