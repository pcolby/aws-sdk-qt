{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "{{ServiceName|lower}}request_p.h"
#include "{{ClassName|lower}}.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}};

class {{ClassName}}Private : public {{ServiceClassName}}RequestPrivate {

public:
    {{ClassName}}Private(const {{ServiceClassName}}Request::Action action,
                                   {{ClassName}} * const q);
    {{ClassName}}Private(const {{ClassName}}Private &other,
                                   {{ClassName}} * const q);

private:
    Q_DECLARE_PUBLIC({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
