// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKACONNECTREQUEST_H
#define QTAWS_KAFKACONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskafkaconnectglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace KafkaConnect {

class KafkaConnectRequestPrivate;

class QTAWSKAFKACONNECT_EXPORT KafkaConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by KafkaConnect.
    enum Action {
        CreateConnectorAction,
        CreateCustomPluginAction,
        CreateWorkerConfigurationAction,
        DeleteConnectorAction,
        DeleteCustomPluginAction,
        DescribeConnectorAction,
        DescribeCustomPluginAction,
        DescribeWorkerConfigurationAction,
        ListConnectorsAction,
        ListCustomPluginsAction,
        ListWorkerConfigurationsAction,
        UpdateConnectorAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KafkaConnectRequest(const Action action);
    KafkaConnectRequest(const KafkaConnectRequest &other);
    KafkaConnectRequest &operator=(const KafkaConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KafkaConnectRequest &other) const;


protected:
    /// @cond internal
    explicit KafkaConnectRequest(KafkaConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KafkaConnectRequest)

};

} // namespace KafkaConnect
} // namespace QtAws

#endif
