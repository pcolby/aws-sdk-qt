// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPREQUEST_H
#define QTAWS_BACKUPREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsbackupglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Backup {

class BackupRequestPrivate;

class QTAWSBACKUP_EXPORT BackupRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Backup.
    enum Action {
        CreateBackupPlanAction,
        CreateBackupSelectionAction,
        CreateBackupVaultAction,
        CreateFrameworkAction,
        CreateReportPlanAction,
        DeleteBackupPlanAction,
        DeleteBackupSelectionAction,
        DeleteBackupVaultAction,
        DeleteBackupVaultAccessPolicyAction,
        DeleteBackupVaultLockConfigurationAction,
        DeleteBackupVaultNotificationsAction,
        DeleteFrameworkAction,
        DeleteRecoveryPointAction,
        DeleteReportPlanAction,
        DescribeBackupJobAction,
        DescribeBackupVaultAction,
        DescribeCopyJobAction,
        DescribeFrameworkAction,
        DescribeGlobalSettingsAction,
        DescribeProtectedResourceAction,
        DescribeRecoveryPointAction,
        DescribeRegionSettingsAction,
        DescribeReportJobAction,
        DescribeReportPlanAction,
        DescribeRestoreJobAction,
        DisassociateRecoveryPointAction,
        ExportBackupPlanTemplateAction,
        GetBackupPlanAction,
        GetBackupPlanFromJSONAction,
        GetBackupPlanFromTemplateAction,
        GetBackupSelectionAction,
        GetBackupVaultAccessPolicyAction,
        GetBackupVaultNotificationsAction,
        GetRecoveryPointRestoreMetadataAction,
        GetSupportedResourceTypesAction,
        ListBackupJobsAction,
        ListBackupPlanTemplatesAction,
        ListBackupPlanVersionsAction,
        ListBackupPlansAction,
        ListBackupSelectionsAction,
        ListBackupVaultsAction,
        ListCopyJobsAction,
        ListFrameworksAction,
        ListProtectedResourcesAction,
        ListRecoveryPointsByBackupVaultAction,
        ListRecoveryPointsByResourceAction,
        ListReportJobsAction,
        ListReportPlansAction,
        ListRestoreJobsAction,
        ListTagsAction,
        PutBackupVaultAccessPolicyAction,
        PutBackupVaultLockConfigurationAction,
        PutBackupVaultNotificationsAction,
        StartBackupJobAction,
        StartCopyJobAction,
        StartReportJobAction,
        StartRestoreJobAction,
        StopBackupJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBackupPlanAction,
        UpdateFrameworkAction,
        UpdateGlobalSettingsAction,
        UpdateRecoveryPointLifecycleAction,
        UpdateRegionSettingsAction,
        UpdateReportPlanAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    BackupRequest(const Action action);
    BackupRequest(const BackupRequest &other);
    BackupRequest &operator=(const BackupRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const BackupRequest &other) const;


protected:
    /// @cond internal
    explicit BackupRequest(BackupRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BackupRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
