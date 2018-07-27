{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}response.h"
{% if operation.input.shape %}
#include "{{OperationName|lower}}request.h"
{% endif %}

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}}Private;

class QTAWS_EXPORT {{ClassName}} : public {{ServiceClassName}}Response {
    Q_OBJECT

public:
{% if operation.input.shape %}
    {{ClassName}}(const {{OperationName}}Request &request, QNetworkReply * const reply, QObject * const parent = 0);
{% else %}
    {{ClassName}}(QNetworkReply * const reply, QObject * const parent = 0);
{% endif %}

{% if operation.input.shape %}
    virtual const {{OperationName}}Request * request() const Q_DECL_OVERRIDE;
{% endif %}

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
