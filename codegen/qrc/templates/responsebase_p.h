{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}RESPONSE_P_H
#define QTAWS_{{ClassName|upper}}RESPONSE_P_H

#include "{{ServiceName|lower}}response.h"
#include "{{ClassName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{ClassName}}Response;

class QTAWS_EXPORT {{ClassName}}ResponsePrivate : public AwsAbstractResponsePrivate {
    Q_OBJECT

public:
    {# @todo data members go here #}

    {{ClassName}}ResponsePrivate({{ClassName}}Response * const q);

    {# @todo change parse type XML vs JSON #}
    void parse{{perationName}}Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC({{ClassName}}Response)
    Q_DISABLE_COPY({{ClassName}}ResponsePrivate)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
