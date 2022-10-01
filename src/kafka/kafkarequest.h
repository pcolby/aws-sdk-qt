// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KAFKAREQUEST_H
#define QTAWS_KAFKAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawskafkaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Kafka {

class KafkaRequestPrivate;

class QTAWSKAFKA_EXPORT KafkaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Kafka.
    enum Action {
        BatchAssociateScramSecretAction,
        BatchDisassociateScramSecretAction,
        CreateClusterAction,
        CreateClusterV2Action,
        CreateConfigurationAction,
        DeleteClusterAction,
        DeleteConfigurationAction,
        DescribeClusterAction,
        DescribeClusterOperationAction,
        DescribeClusterV2Action,
        DescribeConfigurationAction,
        DescribeConfigurationRevisionAction,
        GetBootstrapBrokersAction,
        GetCompatibleKafkaVersionsAction,
        ListClusterOperationsAction,
        ListClustersAction,
        ListClustersV2Action,
        ListConfigurationRevisionsAction,
        ListConfigurationsAction,
        ListKafkaVersionsAction,
        ListNodesAction,
        ListScramSecretsAction,
        ListTagsForResourceAction,
        RebootBrokerAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBrokerCountAction,
        UpdateBrokerStorageAction,
        UpdateBrokerTypeAction,
        UpdateClusterConfigurationAction,
        UpdateClusterKafkaVersionAction,
        UpdateConfigurationAction,
        UpdateConnectivityAction,
        UpdateMonitoringAction,
        UpdateSecurityAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    KafkaRequest(const Action action);
    KafkaRequest(const KafkaRequest &other);
    KafkaRequest &operator=(const KafkaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const KafkaRequest &other) const;


protected:
    /// @cond internal
    explicit KafkaRequest(KafkaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KafkaRequest)

};

} // namespace Kafka
} // namespace QtAws

#endif
