/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ECSREQUEST_H
#define QTAWS_ECSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ECS {

class EcsRequestPrivate;

class QTAWS_EXPORT EcsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ECS.
    enum Action {
        CreateClusterAction,
        CreateServiceAction,
        DeleteAttributesAction,
        DeleteClusterAction,
        DeleteServiceAction,
        DeregisterContainerInstanceAction,
        DeregisterTaskDefinitionAction,
        DescribeClustersAction,
        DescribeContainerInstancesAction,
        DescribeServicesAction,
        DescribeTaskDefinitionAction,
        DescribeTasksAction,
        DiscoverPollEndpointAction,
        ListAttributesAction,
        ListClustersAction,
        ListContainerInstancesAction,
        ListServicesAction,
        ListTaskDefinitionFamiliesAction,
        ListTaskDefinitionsAction,
        ListTasksAction,
        PutAttributesAction,
        RegisterContainerInstanceAction,
        RegisterTaskDefinitionAction,
        RunTaskAction,
        StartTaskAction,
        StopTaskAction,
        SubmitContainerStateChangeAction,
        SubmitTaskStateChangeAction,
        UpdateContainerAgentAction,
        UpdateContainerInstancesStateAction,
        UpdateServiceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EcsRequest(const Action action);
    EcsRequest(const EcsRequest &other);
    EcsRequest &operator=(const EcsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EcsRequest &other) const override;


protected:
    /// @cond internal
    EcsRequest(EcsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(EcsRequest)

};

} // namespace ECS
} // namespace QtAws

#endif
