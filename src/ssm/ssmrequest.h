// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMREQUEST_H
#define QTAWS_SSMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ssm {

class SsmRequestPrivate;

class QTAWSSSM_EXPORT SsmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ssm.
    enum Action {
        AddTagsToResourceAction,
        AssociateOpsItemRelatedItemAction,
        CancelCommandAction,
        CancelMaintenanceWindowExecutionAction,
        CreateActivationAction,
        CreateAssociationAction,
        CreateAssociationBatchAction,
        CreateDocumentAction,
        CreateMaintenanceWindowAction,
        CreateOpsItemAction,
        CreateOpsMetadataAction,
        CreatePatchBaselineAction,
        CreateResourceDataSyncAction,
        DeleteActivationAction,
        DeleteAssociationAction,
        DeleteDocumentAction,
        DeleteInventoryAction,
        DeleteMaintenanceWindowAction,
        DeleteOpsMetadataAction,
        DeleteParameterAction,
        DeleteParametersAction,
        DeletePatchBaselineAction,
        DeleteResourceDataSyncAction,
        DeregisterManagedInstanceAction,
        DeregisterPatchBaselineForPatchGroupAction,
        DeregisterTargetFromMaintenanceWindowAction,
        DeregisterTaskFromMaintenanceWindowAction,
        DescribeActivationsAction,
        DescribeAssociationAction,
        DescribeAssociationExecutionTargetsAction,
        DescribeAssociationExecutionsAction,
        DescribeAutomationExecutionsAction,
        DescribeAutomationStepExecutionsAction,
        DescribeAvailablePatchesAction,
        DescribeDocumentAction,
        DescribeDocumentPermissionAction,
        DescribeEffectiveInstanceAssociationsAction,
        DescribeEffectivePatchesForPatchBaselineAction,
        DescribeInstanceAssociationsStatusAction,
        DescribeInstanceInformationAction,
        DescribeInstancePatchStatesAction,
        DescribeInstancePatchStatesForPatchGroupAction,
        DescribeInstancePatchesAction,
        DescribeInventoryDeletionsAction,
        DescribeMaintenanceWindowExecutionTaskInvocationsAction,
        DescribeMaintenanceWindowExecutionTasksAction,
        DescribeMaintenanceWindowExecutionsAction,
        DescribeMaintenanceWindowScheduleAction,
        DescribeMaintenanceWindowTargetsAction,
        DescribeMaintenanceWindowTasksAction,
        DescribeMaintenanceWindowsAction,
        DescribeMaintenanceWindowsForTargetAction,
        DescribeOpsItemsAction,
        DescribeParametersAction,
        DescribePatchBaselinesAction,
        DescribePatchGroupStateAction,
        DescribePatchGroupsAction,
        DescribePatchPropertiesAction,
        DescribeSessionsAction,
        DisassociateOpsItemRelatedItemAction,
        GetAutomationExecutionAction,
        GetCalendarStateAction,
        GetCommandInvocationAction,
        GetConnectionStatusAction,
        GetDefaultPatchBaselineAction,
        GetDeployablePatchSnapshotForInstanceAction,
        GetDocumentAction,
        GetInventoryAction,
        GetInventorySchemaAction,
        GetMaintenanceWindowAction,
        GetMaintenanceWindowExecutionAction,
        GetMaintenanceWindowExecutionTaskAction,
        GetMaintenanceWindowExecutionTaskInvocationAction,
        GetMaintenanceWindowTaskAction,
        GetOpsItemAction,
        GetOpsMetadataAction,
        GetOpsSummaryAction,
        GetParameterAction,
        GetParameterHistoryAction,
        GetParametersAction,
        GetParametersByPathAction,
        GetPatchBaselineAction,
        GetPatchBaselineForPatchGroupAction,
        GetServiceSettingAction,
        LabelParameterVersionAction,
        ListAssociationVersionsAction,
        ListAssociationsAction,
        ListCommandInvocationsAction,
        ListCommandsAction,
        ListComplianceItemsAction,
        ListComplianceSummariesAction,
        ListDocumentMetadataHistoryAction,
        ListDocumentVersionsAction,
        ListDocumentsAction,
        ListInventoryEntriesAction,
        ListOpsItemEventsAction,
        ListOpsItemRelatedItemsAction,
        ListOpsMetadataAction,
        ListResourceComplianceSummariesAction,
        ListResourceDataSyncAction,
        ListTagsForResourceAction,
        ModifyDocumentPermissionAction,
        PutComplianceItemsAction,
        PutInventoryAction,
        PutParameterAction,
        RegisterDefaultPatchBaselineAction,
        RegisterPatchBaselineForPatchGroupAction,
        RegisterTargetWithMaintenanceWindowAction,
        RegisterTaskWithMaintenanceWindowAction,
        RemoveTagsFromResourceAction,
        ResetServiceSettingAction,
        ResumeSessionAction,
        SendAutomationSignalAction,
        SendCommandAction,
        StartAssociationsOnceAction,
        StartAutomationExecutionAction,
        StartChangeRequestExecutionAction,
        StartSessionAction,
        StopAutomationExecutionAction,
        TerminateSessionAction,
        UnlabelParameterVersionAction,
        UpdateAssociationAction,
        UpdateAssociationStatusAction,
        UpdateDocumentAction,
        UpdateDocumentDefaultVersionAction,
        UpdateDocumentMetadataAction,
        UpdateMaintenanceWindowAction,
        UpdateMaintenanceWindowTargetAction,
        UpdateMaintenanceWindowTaskAction,
        UpdateManagedInstanceRoleAction,
        UpdateOpsItemAction,
        UpdateOpsMetadataAction,
        UpdatePatchBaselineAction,
        UpdateResourceDataSyncAction,
        UpdateServiceSettingAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsmRequest(const Action action);
    SsmRequest(const SsmRequest &other);
    SsmRequest &operator=(const SsmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsmRequest &other) const;


protected:
    /// @cond internal
    explicit SsmRequest(SsmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
