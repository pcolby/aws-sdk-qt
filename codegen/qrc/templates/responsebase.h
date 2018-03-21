{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}RESPONSE_H
#define QTAWS_{{ClassName|upper}}RESPONSE_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace AWS {

namespace {{ServiceName}} {

class {{ClassName}}ResponsePrivate;

class QTAWS_EXPORT {{ClassName}}Response : public {{ServiceName}}Response {
    Q_OBJECT

public:
    {{ClassName}}Response(QObject * const parent = 0);

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE({{ClassName}}Response)
    Q_DISABLE_COPY({{ClassName}}Response)

};

} // namespace {{ServiceName}}
} // namespace AWS

#endif
