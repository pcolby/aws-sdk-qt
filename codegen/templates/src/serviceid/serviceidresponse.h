// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
{% with ServiceName|add:"Response" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractresponse.h"

#include "qtaws{{ServiceName|lower}}global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}}Private;

class QTAWS{{ServiceName|upper}}_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    {{ClassName}}(QObject * const parent = 0);

protected:
    /// @cond internal
    {{ClassName}}({{ClassName}}Private * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
