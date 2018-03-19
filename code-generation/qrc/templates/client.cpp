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

#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace {{NameSpaceName}} {

/**
 * @class  {{ClassName}}
 *
 * @brief  {{ClassBrief}}
 *
{% for line in ClassDocumentation %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 */

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
{{ClassName}}::{{ClassName}}(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{metadata.apiVersion}}");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("{{metadata.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("{{metadata.serviceFullName}}");
    {# Here we do exactly as aws-sdk-cpp does; we using the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefiex (which is the same 90% of the time.       #}
    d->serviceName = QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}");
}

/**
 * @brief  Constructs a new {{ClassName}} object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
{{ClassName}}::{{ClassName}}(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{metadata.apiVersion}}");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("{{metadata.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("{{metadata.serviceFullName}}");
    {# Here we do exactly as aws-sdk-cpp does; we using the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefiex (which is the same 90% of the time.       #}
    d->serviceName = QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}");
}

{% for f in OperationSignatures %}
/**
{% for line in f.documentation %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 *
 * @param  request Request to send to {{metadata.serviceFullName}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
{{ f.returnType }} {{ ClassName }}::{{ f.name }}({{ f.arguments }})
{

}

{% endfor %}
/**
 * @internal
 *
 * @class  {{ClassName}}Private
 *
 * @brief  Private implementation for {{ClassName}}.
 */

/**
 * @internal
 *
 * @brief  Constructs a new {{ClassName}}Private object.
 *
 * @param  q  Pointer to this object's public {{ClassName}} instance.
 */
{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignature{{metadata.signatureVersion|upper}}();
}

} // namespace {{NameSpaceName}}
} // namespace AWS
