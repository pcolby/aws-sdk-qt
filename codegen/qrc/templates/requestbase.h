{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}}Private;

class QTAWS_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by {{ServiceName}}.
    enum Action {
        {% for name in operations.keys %}
        {{name}}Action,
        {% endfor %}
    };
    Q_DECLARE_FLAGS(Actions, Action)

    {{ClassName}}(const Action action);
    {{ClassName}}(const {{ClassName}} &other);
    {{ClassName}} &operator=(const {{ClassName}} &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const {{ClassName}} &other) const;

    {# @todo Things like: static bool isValidQueueName(const QString &queueName); #}

protected:
    /// @cond internal
    {{ClassName}}({{ClassName}}Private * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
