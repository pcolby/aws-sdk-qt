{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}}Private;
{% for name,op in operations.items %}
{% if op.input.shape %}
class {{name}}Request;
{% endif %}
class {{name}}Response;
{% endfor %}

class QTAWS_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    {{ClassName}}(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    {{ClassName}}(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
{% for name,op in operations.items %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}({% if op.input.shape %}const {{name}}Request &request{% endif %});
{% endfor %}

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
