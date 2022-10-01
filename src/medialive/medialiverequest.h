// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIALIVEREQUEST_H
#define QTAWS_MEDIALIVEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmedialiveglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaLive {

class MediaLiveRequestPrivate;

class QTAWSMEDIALIVE_EXPORT MediaLiveRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaLive.
    enum Action {
        AcceptInputDeviceTransferAction,
        BatchDeleteAction,
        BatchStartAction,
        BatchStopAction,
        BatchUpdateScheduleAction,
        CancelInputDeviceTransferAction,
        ClaimDeviceAction,
        CreateChannelAction,
        CreateInputAction,
        CreateInputSecurityGroupAction,
        CreateMultiplexAction,
        CreateMultiplexProgramAction,
        CreatePartnerInputAction,
        CreateTagsAction,
        DeleteChannelAction,
        DeleteInputAction,
        DeleteInputSecurityGroupAction,
        DeleteMultiplexAction,
        DeleteMultiplexProgramAction,
        DeleteReservationAction,
        DeleteScheduleAction,
        DeleteTagsAction,
        DescribeChannelAction,
        DescribeInputAction,
        DescribeInputDeviceAction,
        DescribeInputDeviceThumbnailAction,
        DescribeInputSecurityGroupAction,
        DescribeMultiplexAction,
        DescribeMultiplexProgramAction,
        DescribeOfferingAction,
        DescribeReservationAction,
        DescribeScheduleAction,
        ListChannelsAction,
        ListInputDeviceTransfersAction,
        ListInputDevicesAction,
        ListInputSecurityGroupsAction,
        ListInputsAction,
        ListMultiplexProgramsAction,
        ListMultiplexesAction,
        ListOfferingsAction,
        ListReservationsAction,
        ListTagsForResourceAction,
        PurchaseOfferingAction,
        RebootInputDeviceAction,
        RejectInputDeviceTransferAction,
        StartChannelAction,
        StartInputDeviceMaintenanceWindowAction,
        StartMultiplexAction,
        StopChannelAction,
        StopMultiplexAction,
        TransferInputDeviceAction,
        UpdateChannelAction,
        UpdateChannelClassAction,
        UpdateInputAction,
        UpdateInputDeviceAction,
        UpdateInputSecurityGroupAction,
        UpdateMultiplexAction,
        UpdateMultiplexProgramAction,
        UpdateReservationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaLiveRequest(const Action action);
    MediaLiveRequest(const MediaLiveRequest &other);
    MediaLiveRequest &operator=(const MediaLiveRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaLiveRequest &other) const;


protected:
    /// @cond internal
    explicit MediaLiveRequest(MediaLiveRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaLiveRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
