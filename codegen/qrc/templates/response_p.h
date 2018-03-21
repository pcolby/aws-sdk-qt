{% include "license.txt" %}
#ifndef QTAWS_{{OperationName|upper}}RESPONSE_P_H
#define QTAWS_{{OperationName|upper}}RESPONSE_P_H

#include "{{ServiceName|lower}}response.h"
#include "{{OperationName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{OperationName}}Response;

class QTAWS_EXPORT {{OperationName}}ResponsePrivate : public {{ServiceName}}ResponsePrivate {
    Q_OBJECT

public:
    {# @todo data members go here #}

    {{OperationName}}ResponsePrivate({{OperationName}}Response * const q);

    {# @todo change parse type XML vs JSON #}
    void parse{{perationName}}Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC({{OperationName}}Response)
    Q_DISABLE_COPY({{OperationName}}ResponsePrivate)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
