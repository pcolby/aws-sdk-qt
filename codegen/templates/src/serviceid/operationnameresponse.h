// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
{% with operation.name|add:"Response" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "{{ServiceName|lower}}response.h"
#include "{{operation.name|lower}}request.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}}Private;

class QTAWS{{ServiceName|upper}}_EXPORT {{ClassName}} : public {{ServiceName}}Response {
    Q_OBJECT

public:
    {{ClassName}}(const {{operation.name}}Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const {{operation.name}}Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
