/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractclient.h"

class QNetworkReply;

{# @todo Consistent namespacing #}
class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace {{NameSpaceName}} {

class {{ClassName}}Private;
{% for f in OperationSignatures %}
{# @todo Probably a better way to do this. #}
class {{ f.returnType|cut:" *" }};
{% endfor %}

class QTAWS_EXPORT {{ClassName}} : public AwsAbstractClient {
    Q_OBJECT

public:
    {{ClassName}}(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    {{ClassName}}(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
{% for f in OperationSignatures %}
    {{ f.returnType }} {{ f.name }}({{ f.arguments }});
{% endfor %}

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace AWS

#endif
