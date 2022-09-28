{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with service.traits.smithyApi_title as ServiceTitle %}
{% with ServiceName|add:"Client" as ClassName %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include "core/awssignaturev4.h"
{% for name,op in operations.items %}
#include "{{name|lower}}request.h"
#include "{{name|lower}}response.h"
{% endfor %}

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::{{ServiceName}}
 * \brief Contains classess for accessing {{ServiceTitle}}.
 *
 * \inmodule QtAws{{ServiceName}}
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace {{ServiceName}} {

/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides access to the {{ServiceTitle}} service.
 *
 * \ingroup aws-clients
 * \inmodule QtAws{{ServiceName}}
 *
{% for line in ClassDocumentation %}
 * {% if line %} {{ line }}{% endif %}
{% endfor %}
 */

/*!
 * \brief Constructs a {{ClassName}} object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
{{ClassName}}::{{ClassName}}(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{version}}");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("{{service.traits.awsApi_service.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("{{ServiceTitle}}");
    {# Here we do exactly as aws-sdk-cpp does; we use the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefix (which is the same 90% of the time.      #}
    d->serviceName = QStringLiteral("{{service.traits.awsAuth_sigv4}}");
}

/*!
 * \overload {{ClassName}}()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
{{ClassName}}::{{ClassName}}(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new {{ClassName}}Private(this), parent)
{
    Q_D({{ClassName}});
    d->apiVersion = QStringLiteral("{{version}}");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("{{service.traits.awsApi_service.endpointPrefix}}");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("{{ServiceTitle}}");
    {# Here we do exactly as aws-sdk-cpp does; we using the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefiex (which is the same 90% of the time.       #}
    d->serviceName = QStringLiteral("{{service.traits.awsAuth_sigv4}}");
}

{% for name,op in operations.items %}
/*!
 * Sends \a request to the {{ClassName}} service, and returns a pointer to an
 * {{name}}Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
{% for line in op.documentationFormatted %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 */
{{name}}Response * {{ClassName}}::{{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}(const {{name}}Request &request)
{
    return qobject_cast<{{name}}Response *>(send(request));
}

{% if not op.input %}
/*!
 * Sends a {{name}} request to the {{ClassName}} service, and returns a pointer to an
 * {{name}}Response object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
{% for line in op.documentationFormatted %}
 *{% if line %} {{ line }}{% endif %}
{% endfor %}
 */
{{name}}Response * {{ClassName}}::{{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}()
{
    return {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}({{name}}Request());
}

{% endif %}
{% endfor %}
/*!
 * \class QtAws::{{ServiceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAws{{ServiceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace {{ServiceName}}
} // namespace QtAws
{% endwith %}
{% endwith %}
{% endwith %}
