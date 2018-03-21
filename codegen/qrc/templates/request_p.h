{% include "license.txt" %}
#ifndef QTAWS_{{OperationName|upper}}REQUEST_P_H
#define QTAWS_{{OperationName|upper}}REQUEST_P_H

#include "{{ServiceName|lower}}_p.h"
#include "{{OperationName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{OperationName}}Request;

class QTAWS_EXPORT {{OperationName}}RequestPrivate : public {{ServiceName}}Private {

public:
    {{OperationName}}RequestPrivate(const {{ServiceName}}::Action action,
                                   {{OperationName}}Request * const q);
    {{OperationName}}RequestPrivate(const {{OperationName}}RequestPrivate &other,
                                   {{OperationName}}Request * const q);

private:
    Q_DECLARE_PUBLIC({{OperationName}}Request)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
