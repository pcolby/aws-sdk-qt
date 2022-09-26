{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}request.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}}Private;

class QTAWS{{ServiceName|upper}}_EXPORT {{ClassName}} : public {{ServiceClassName}}Request {

public:
    {{ClassName}}(const {{ClassName}} &other);
    {{ClassName}}();

    virtual bool isValid() const Q_DECL_OVERRIDE;

    {# @todo accessor methods #}

protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
