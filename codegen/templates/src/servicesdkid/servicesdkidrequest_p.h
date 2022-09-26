{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "core/awsabstractrequest_p.h"
#include "{{ClassName|lower}}.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}};

class {{ClassName}}Private : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    {{ClassName}}::Action action; ///< {{ServiceName}} action to be performed.
    QString apiVersion;        ///< {{ServiceName}} API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< {{ServiceName}} request (query string) parameters. @todo?

    {{ClassName}}Private(const {{ClassName}}::Action action, {{ClassName}} * const q);
    {{ClassName}}Private(const {{ClassName}}Private &other, {{ClassName}} * const q);

    static QString toString(const {{ClassName}}::Action &action);

private:
    Q_DECLARE_PUBLIC({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
