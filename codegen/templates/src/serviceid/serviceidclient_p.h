// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

{% with service.canonicalId as ServiceName %}
{% with ServiceName|add:"Client" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}};

class {{ClassName}}Private : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit {{ClassName}}Private({{ClassName}} * const q);

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
