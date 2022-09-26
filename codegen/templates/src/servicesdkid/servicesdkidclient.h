{% include "license.txt" %}
{% with service.traits.awsApi_service.sdkId|cut:" " as ServiceName %}
{% with ServiceName|add:"Client" as ClassName %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractclient.h"

#include "qtaws{{ServiceName|lower}}global.h"

class QNetworkReply;

namespace QtAws {
namespace {{ServiceName}} {

class {{ClassName}}Private;
{% for name,op in operations.items %}
class {{name}}Request;
class {{name}}Response;
{% endfor %}

class QTAWS{{ServiceName|upper}}_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    {{ClassName}}(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit {{ClassName}}(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
{% for name,op in operations.items %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}(const {{name}}Request &request);
{% if not op.input %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}();
{% endif %}
{% endfor %}

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{ServiceName}}
} // namespace QtAws

#endif
{% endwith %}
{% endwith %}
