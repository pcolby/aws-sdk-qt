// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FSXREQUEST_H
#define QTAWS_FSXREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfsxglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace FSx {

class FSxRequestPrivate;

class QTAWSFSX_EXPORT FSxRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by FSx.
    enum Action {
        AssociateFileSystemAliasesAction,
        CancelDataRepositoryTaskAction,
        CopyBackupAction,
        CreateBackupAction,
        CreateDataRepositoryAssociationAction,
        CreateDataRepositoryTaskAction,
        CreateFileSystemAction,
        CreateFileSystemFromBackupAction,
        CreateSnapshotAction,
        CreateStorageVirtualMachineAction,
        CreateVolumeAction,
        CreateVolumeFromBackupAction,
        DeleteBackupAction,
        DeleteDataRepositoryAssociationAction,
        DeleteFileSystemAction,
        DeleteSnapshotAction,
        DeleteStorageVirtualMachineAction,
        DeleteVolumeAction,
        DescribeBackupsAction,
        DescribeDataRepositoryAssociationsAction,
        DescribeDataRepositoryTasksAction,
        DescribeFileSystemAliasesAction,
        DescribeFileSystemsAction,
        DescribeSnapshotsAction,
        DescribeStorageVirtualMachinesAction,
        DescribeVolumesAction,
        DisassociateFileSystemAliasesAction,
        ListTagsForResourceAction,
        ReleaseFileSystemNfsV3LocksAction,
        RestoreVolumeFromSnapshotAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDataRepositoryAssociationAction,
        UpdateFileSystemAction,
        UpdateSnapshotAction,
        UpdateStorageVirtualMachineAction,
        UpdateVolumeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FSxRequest(const Action action);
    FSxRequest(const FSxRequest &other);
    FSxRequest &operator=(const FSxRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FSxRequest &other) const;


protected:
    /// @cond internal
    explicit FSxRequest(FSxRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FSxRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
