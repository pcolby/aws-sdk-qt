// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRREQUEST_H
#define QTAWS_EMRREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsemrglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Emr {

class EmrRequestPrivate;

class QTAWSEMR_EXPORT EmrRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Emr.
    enum Action {
        AddInstanceFleetAction,
        AddInstanceGroupsAction,
        AddJobFlowStepsAction,
        AddTagsAction,
        CancelStepsAction,
        CreateSecurityConfigurationAction,
        CreateStudioAction,
        CreateStudioSessionMappingAction,
        DeleteSecurityConfigurationAction,
        DeleteStudioAction,
        DeleteStudioSessionMappingAction,
        DescribeClusterAction,
        DescribeJobFlowsAction,
        DescribeNotebookExecutionAction,
        DescribeReleaseLabelAction,
        DescribeSecurityConfigurationAction,
        DescribeStepAction,
        DescribeStudioAction,
        GetAutoTerminationPolicyAction,
        GetBlockPublicAccessConfigurationAction,
        GetManagedScalingPolicyAction,
        GetStudioSessionMappingAction,
        ListBootstrapActionsAction,
        ListClustersAction,
        ListInstanceFleetsAction,
        ListInstanceGroupsAction,
        ListInstancesAction,
        ListNotebookExecutionsAction,
        ListReleaseLabelsAction,
        ListSecurityConfigurationsAction,
        ListStepsAction,
        ListStudioSessionMappingsAction,
        ListStudiosAction,
        ModifyClusterAction,
        ModifyInstanceFleetAction,
        ModifyInstanceGroupsAction,
        PutAutoScalingPolicyAction,
        PutAutoTerminationPolicyAction,
        PutBlockPublicAccessConfigurationAction,
        PutManagedScalingPolicyAction,
        RemoveAutoScalingPolicyAction,
        RemoveAutoTerminationPolicyAction,
        RemoveManagedScalingPolicyAction,
        RemoveTagsAction,
        RunJobFlowAction,
        SetTerminationProtectionAction,
        SetVisibleToAllUsersAction,
        StartNotebookExecutionAction,
        StopNotebookExecutionAction,
        TerminateJobFlowsAction,
        UpdateStudioAction,
        UpdateStudioSessionMappingAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EmrRequest(const Action action);
    EmrRequest(const EmrRequest &other);
    EmrRequest &operator=(const EmrRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EmrRequest &other) const;


protected:
    /// @cond internal
    explicit EmrRequest(EmrRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
