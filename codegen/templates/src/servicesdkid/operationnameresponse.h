{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}response.h"
#include "{{OperationName|lower}}request.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}}Private;

class QTAWS{{ServiceName|upper}}_EXPORT {{ClassName}} : public {{ServiceClassName}}Response {
    Q_OBJECT

public:
    {{ClassName}}(const {{OperationName}}Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const {{OperationName}}Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
