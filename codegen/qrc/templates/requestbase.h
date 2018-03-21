{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}REQUEST_H
#define QTAWS_{{ClassName|upper}}REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace AWS {

namespace {{ClassName}} {

class AwsAbstractClient;
class {{ClassName}}RequestPrivate;

class QTAWS_EXPORT {{ClassName}}Request : public AwsAbstractRequest {

public:
    /// Actions supported by {{ServiceName}}.
    enum Action {
        // todo
    };
    Q_DECLARE_FLAGS(Actions, Action)

    {{ClassName}}Request(const Action action);
    {{ClassName}}Request(const {{ClassName}}Request &other);
    {{ClassName}}Request &operator=(const {{ClassName}}Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const {{ClassName}}Request &other) const;

    {# @todo Things like: static bool isValidQueueName(const QString &queueName); #}

protected:
    /// @cond internal
    {{ClassName}}Request({{ClassName}}RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const;

private:
    Q_DECLARE_PRIVATE({{ClassName}}Request)

}

} // namespace {{ClassName}}
} // namespace AWS

#endif
