/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_STORAGEGATEWAYREQUEST_H
#define QTAWS_STORAGEGATEWAYREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace StorageGateway {

class StorageGatewayRequestPrivate;

class QTAWS_EXPORT StorageGatewayRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by StorageGateway.
    enum Action {
        ActivateGatewayAction,
        AddCacheAction,
        AddTagsToResourceAction,
        AddUploadBufferAction,
        AddWorkingStorageAction,
        CancelArchivalAction,
        CancelRetrievalAction,
        CreateCachediSCSIVolumeAction,
        CreateNFSFileShareAction,
        CreateSMBFileShareAction,
        CreateSnapshotAction,
        CreateSnapshotFromVolumeRecoveryPointAction,
        CreateStorediSCSIVolumeAction,
        CreateTapeWithBarcodeAction,
        CreateTapesAction,
        DeleteBandwidthRateLimitAction,
        DeleteChapCredentialsAction,
        DeleteFileShareAction,
        DeleteGatewayAction,
        DeleteSnapshotScheduleAction,
        DeleteTapeAction,
        DeleteTapeArchiveAction,
        DeleteVolumeAction,
        DescribeBandwidthRateLimitAction,
        DescribeCacheAction,
        DescribeCachediSCSIVolumesAction,
        DescribeChapCredentialsAction,
        DescribeGatewayInformationAction,
        DescribeMaintenanceStartTimeAction,
        DescribeNFSFileSharesAction,
        DescribeSMBFileSharesAction,
        DescribeSMBSettingsAction,
        DescribeSnapshotScheduleAction,
        DescribeStorediSCSIVolumesAction,
        DescribeTapeArchivesAction,
        DescribeTapeRecoveryPointsAction,
        DescribeTapesAction,
        DescribeUploadBufferAction,
        DescribeVTLDevicesAction,
        DescribeWorkingStorageAction,
        DisableGatewayAction,
        JoinDomainAction,
        ListFileSharesAction,
        ListGatewaysAction,
        ListLocalDisksAction,
        ListTagsForResourceAction,
        ListTapesAction,
        ListVolumeInitiatorsAction,
        ListVolumeRecoveryPointsAction,
        ListVolumesAction,
        NotifyWhenUploadedAction,
        RefreshCacheAction,
        RemoveTagsFromResourceAction,
        ResetCacheAction,
        RetrieveTapeArchiveAction,
        RetrieveTapeRecoveryPointAction,
        SetLocalConsolePasswordAction,
        SetSMBGuestPasswordAction,
        ShutdownGatewayAction,
        StartGatewayAction,
        UpdateBandwidthRateLimitAction,
        UpdateChapCredentialsAction,
        UpdateGatewayInformationAction,
        UpdateGatewaySoftwareNowAction,
        UpdateMaintenanceStartTimeAction,
        UpdateNFSFileShareAction,
        UpdateSMBFileShareAction,
        UpdateSnapshotScheduleAction,
        UpdateVTLDeviceTypeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    StorageGatewayRequest(const Action action);
    StorageGatewayRequest(const StorageGatewayRequest &other);
    StorageGatewayRequest &operator=(const StorageGatewayRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const StorageGatewayRequest &other) const;


protected:
    /// @cond internal
    StorageGatewayRequest(StorageGatewayRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StorageGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
