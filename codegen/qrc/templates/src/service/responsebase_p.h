{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}};

class {{ClassName}}Private {

public:
    {# @todo data members go here #}

    explicit {{ClassName}}Private({{ClassName}} * const q);

    {# @todo change parse type XML vs JSON #}
    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

protected:
    {{ClassName}} * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
