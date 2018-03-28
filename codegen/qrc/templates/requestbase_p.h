{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "{{ServiceName|lower}}_p.h"
#include "{{OperationName|lower}}request.h"

namespace AWS {

namespace {{NameSpaceNameX}} {

class {{ClassName}};

class QTAWS_EXPORT {{ClassName}}Private : public AwsAbstractRequestPrivate {

public:
    {{ClassName}}::Action action; ///< {{ServiceName}} action to be performed.
    QString apiVersion;        ///< {{ServiceName}} API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< {{ServiceName}} request (query string) parameters. @todo?

    {{ClassName}}Private(const {{ClassName}}::Action action, {{ClassName}} * const q);
    {{ClassName}}Private(const {{OperationName}}RequestPrivate &other, {{ClassName}} * const q);

    static QString toString(const {{ClassName}}::Action &action);

private:
    Q_DECLARE_PUBLIC({{ClassName}})

};

} // namespace {{NameSpaceNameX}}
} // namespace AWS

#endif
