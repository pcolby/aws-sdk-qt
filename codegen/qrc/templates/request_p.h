{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "{{ServiceName|lower}}_p.h"
#include "{{ClassName|lower}}.h"

namespace AWS {

namespace {{NameSpaceName}} {

class {{ClassName}};

class QTAWS_EXPORT {{ClassName}}Private : public {{ServiceName}}Private {

public:
    {{ClassName}}Private(const {{ServiceName}}::Action action,
                                   {{ClassName}} * const q);
    {{ClassName}}Private(const {{ClassName}}Private &other,
                                   {{ClassName}} * const q);

private:
    Q_DECLARE_PUBLIC({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace AWS

#endif
