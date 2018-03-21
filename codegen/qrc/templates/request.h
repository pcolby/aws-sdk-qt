{% include "license.txt" %}
#ifndef QTAWS_{{OperationName|upper}}REQUEST_H
#define QTAWS_{{OperationName|upper}}REQUEST_H

#include "{{ServiceName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{OperationName}}RequestPrivate;

class QTAWS_EXPORT {{OperationName}}Request : public {{ServiceName}}Request {

public:
    {{OperationName}}Request(const {{OperationName}}Request &other);
    {{OperationName}}Request();

    virtual bool isValid() const;

    {# @todo accessor methods #}

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE({{OperationName}}Request)

}

} // namespace {{ServiceName}}
} // namespace AWS

#endif
