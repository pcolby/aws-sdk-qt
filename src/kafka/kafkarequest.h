/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
        CreateConfigurationAction,
        DeleteClusterAction,
        DeleteConfigurationAction,
        DescribeClusterAction,
        DescribeClusterOperationAction,
        DescribeConfigurationAction,
        DescribeConfigurationRevisionAction,
        GetBootstrapBrokersAction,
        GetCompatibleKafkaVersionsAction,
        ListClusterOperationsAction,
        ListClustersAction,
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
        UpdateMonitoringAction,
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
    KafkaRequest(KafkaRequestPrivate * const d);
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
