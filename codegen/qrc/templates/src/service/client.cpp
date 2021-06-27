{% include "license.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

{% if metadata.signatureVersion == "s3" or metadata.signatureVersion == "s3v4" %}
#include "core/awssignaturev4.h"
{% else %}
#include "core/awssignature{{metadata.signatureVersion|lower}}.h"
{% endif %}
{% for name,op in operations.items %}
#include "{{name|lower}}request.h"
#include "{{name|lower}}response.h"
{% endfor %}

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::{{NameSpaceName}}
 * \brief Contains classess for accessing {{metadata.serviceFullName}}{% if metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS" not in metadata.serviceFullName %} ({{metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS"}}){% endif %}.
 *
 * \inmodule {{ModuleName}}
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace {{NameSpaceName}} {

/*!
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}
 * \brief The {{ClassName}} class provides access to the {{metadata.serviceFullName}}{% if metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS" not in metadata.serviceFullName %} ({{metadata.serviceAbbreviation|cut:"Amazon"|cut:"AWS"}}){% endif %} service.
 *
 * \ingroup aws-clients
 * \inmodule QtAws{{NameSpaceName}}
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("{{metadata.apiVersion}}"),
    QStringLiteral("{{metadata.endpointPrefix}}"),
    QStringLiteral("{{metadata.serviceFullName}}"),
    {# Here we do exactly as aws-sdk-cpp does; we use the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefix (which is the same 90% of the time.      #}
    QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}"),
    parent), d_ptr(new {{ClassName}}Private(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("{{metadata.apiVersion}}"),
    QStringLiteral("{{metadata.endpointPrefix}}"),
    QStringLiteral("{{metadata.serviceFullName}}"),
    {# Here we do exactly as aws-sdk-cpp does; we use the signingName (ie the name of the service as expected by #}
    {# V4 signatures if set, otherwise fall back to the endpoint prefix (which is the same 90% of the time.      #}
    QStringLiteral("{% if metadata.signingName %}{{ metadata.signingName }}{% else %}{{ metadata.endpointPrefix }}{% endif %}"),
    parent), d_ptr(new {{ClassName}}Private(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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

{% if not op.input.shape %}
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
 * \class QtAws::{{NameSpaceName}}::{{ClassName}}Private
 * \brief The {{ClassName}}Private class provides private implementation for {{ClassName}}.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAws{{NameSpaceName}}
 */

/*!
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 */
{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q) : q_ptr(q)
{
{% if metadata.signatureVersion == "s3" or metadata.signatureVersion == "s3v4" %}
    q->setSignature(new QtAws::Core::AwsSignatureV4());
{% else %}
    q->setSignature(new QtAws::Core::AwsSignature{{metadata.signatureVersion|upper}}());
{% endif %}
}

} // namespace {{NameSpaceName}}
} // namespace QtAws
