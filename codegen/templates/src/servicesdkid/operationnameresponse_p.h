{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with operation.name|add:"Response" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "{{ServiceName|lower}}response_p.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}};

class {{ClassName}}Private : public {{ServiceClass}}ResponsePrivate {

public:
    {# @todo data members go here #}

    explicit {{ClassName}}Private({{ClassName}} * const q);

    {# @todo change parse type XML vs JSON #}
    void parse{{OperationName}}Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
