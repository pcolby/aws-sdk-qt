{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}response.h"
#include "{{OperationName|lower}}request.h"

namespace AWS {

namespace {{ServiceName}} {

class {{OperationName}}ResponsePrivate;

class QTAWS_EXPORT {{OperationName}}Response : public {{OperationName}}Response {
    Q_OBJECT

public:
    {{ClassName}}(const {{OperationName}}Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const {{OperationName}}Request * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE({{OperationName}}Response)
    Q_DISABLE_COPY({{OperationName}}Response)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
