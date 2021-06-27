{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}}Private;
{% for name,op in operations.items %}
class {{name}}Request;
class {{name}}Response;
{% endfor %}

class QTAWS_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    {{ClassName}}(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    {{ClassName}}(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
{% for name,op in operations.items %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}(const {{name}}Request &request);
{% if not op.input.shape %}
    {{name}}Response * {{name|slice:"0:1"|lower}}{{name|slice:"01:-1"}}();
{% endif %}
{% endfor %}

protected:
    /// @cond internal
    {{ClassName}}Private * const d_ptr; ///< Internal d-pointer.
    {{ClassName}}({{ClassName}}Private * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
