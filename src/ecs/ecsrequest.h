// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECSREQUEST_H
#define QTAWS_ECSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsecsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ecs {

class EcsRequestPrivate;

class QTAWSECS_EXPORT EcsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ecs.
    enum Action {
        CreateCapacityProviderAction,
        CreateClusterAction,
        CreateServiceAction,
        CreateTaskSetAction,
        DeleteAccountSettingAction,
        DeleteAttributesAction,
        DeleteCapacityProviderAction,
        DeleteClusterAction,
        DeleteServiceAction,
        DeleteTaskSetAction,
        DeregisterContainerInstanceAction,
        DeregisterTaskDefinitionAction,
        DescribeCapacityProvidersAction,
        DescribeClustersAction,
        DescribeContainerInstancesAction,
        DescribeServicesAction,
        DescribeTaskDefinitionAction,
        DescribeTaskSetsAction,
        DescribeTasksAction,
        DiscoverPollEndpointAction,
        ExecuteCommandAction,
        ListAccountSettingsAction,
        ListAttributesAction,
        ListClustersAction,
        ListContainerInstancesAction,
        ListServicesAction,
        ListTagsForResourceAction,
        ListTaskDefinitionFamiliesAction,
        ListTaskDefinitionsAction,
        ListTasksAction,
        PutAccountSettingAction,
        PutAccountSettingDefaultAction,
        PutAttributesAction,
        PutClusterCapacityProvidersAction,
        RegisterContainerInstanceAction,
        RegisterTaskDefinitionAction,
        RunTaskAction,
        StartTaskAction,
        StopTaskAction,
        SubmitAttachmentStateChangesAction,
        SubmitContainerStateChangeAction,
        SubmitTaskStateChangeAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCapacityProviderAction,
        UpdateClusterAction,
        UpdateClusterSettingsAction,
        UpdateContainerAgentAction,
        UpdateContainerInstancesStateAction,
        UpdateServiceAction,
        UpdateServicePrimaryTaskSetAction,
        UpdateTaskSetAction,
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

    virtual bool operator==(const EcsRequest &other) const;


protected:
    /// @cond internal
    explicit EcsRequest(EcsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
