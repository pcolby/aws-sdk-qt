{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}request.h"

namespace AWS {

namespace {{NameSpaceName}} {

class {{ClassName}}Private;

class QTAWS_EXPORT {{ClassName}} : public {{ServiceName}}Request {

public:
    {{ClassName}}(const {{ClassName}} &other);
    {{ClassName}}();

    virtual bool isValid() const;

    {# @todo accessor methods #}

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE({{ClassName}})

}

} // namespace {{NameSpaceName}}
} // namespace AWS

#endif
