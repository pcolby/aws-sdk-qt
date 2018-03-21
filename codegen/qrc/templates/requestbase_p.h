{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}REQUEST_P_H
#define QTAWS_{{ClassName|upper}}REQUEST_P_H

#include "{{ServiceName|lower}}_p.h"
#include "{{OperationName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{ClassName}}Request;

class QTAWS_EXPORT {{ClassName}}RequestPrivate : public AwsAbstractRequestPrivate {

public:
    {{ClassName}}Request::Action action; ///< {{ServiceName}} action to be performed.
    QString apiVersion;        ///< {{ServiceName}} API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< {{ServiceName}} request (query string) parameters. @todo?

    {{ClassName}}RequestPrivate(const {{ClassName}}Request::Action action, {{ClassName}}Request * const q);
    {{ClassName}}RequestPrivate(const {{OperationName}}RequestPrivate &other, {{ClassName}}Request * const q);

    static QString toString(const {{ClassName}}Request::Action &action);

private:
    Q_DECLARE_PUBLIC({{ClassName}}Request)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
