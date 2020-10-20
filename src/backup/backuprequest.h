/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_BACKUPREQUEST_H
#define QTAWS_BACKUPREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Backup {

class BackupRequestPrivate;

class QTAWS_EXPORT BackupRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Backup.
    enum Action {
        CreateBackupPlanAction,
        CreateBackupSelectionAction,
        CreateBackupVaultAction,
        DeleteBackupPlanAction,
        DeleteBackupSelectionAction,
        DeleteBackupVaultAction,
        DeleteBackupVaultAccessPolicyAction,
        DeleteBackupVaultNotificationsAction,
        DeleteRecoveryPointAction,
        DescribeBackupJobAction,
        DescribeBackupVaultAction,
        DescribeProtectedResourceAction,
        DescribeRecoveryPointAction,
        DescribeRestoreJobAction,
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
        ListProtectedResourcesAction,
        ListRecoveryPointsByBackupVaultAction,
        ListRecoveryPointsByResourceAction,
        ListRestoreJobsAction,
        ListTagsAction,
        PutBackupVaultAccessPolicyAction,
        PutBackupVaultNotificationsAction,
        StartBackupJobAction,
        StartRestoreJobAction,
        StopBackupJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBackupPlanAction,
        UpdateRecoveryPointLifecycleAction,
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
    BackupRequest(BackupRequestPrivate * const d);
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
