/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_PINPOINTREQUEST_H
#define QTAWS_PINPOINTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Pinpoint {

class PinpointRequestPrivate;

class QTAWS_EXPORT PinpointRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Pinpoint.
    enum Action {
        CreateAppAction,
        CreateCampaignAction,
        CreateExportJobAction,
        CreateImportJobAction,
        CreateSegmentAction,
        DeleteAdmChannelAction,
        DeleteApnsChannelAction,
        DeleteApnsSandboxChannelAction,
        DeleteApnsVoipChannelAction,
        DeleteApnsVoipSandboxChannelAction,
        DeleteAppAction,
        DeleteBaiduChannelAction,
        DeleteCampaignAction,
        DeleteEmailChannelAction,
        DeleteEndpointAction,
        DeleteEventStreamAction,
        DeleteGcmChannelAction,
        DeleteSegmentAction,
        DeleteSmsChannelAction,
        DeleteUserEndpointsAction,
        DeleteVoiceChannelAction,
        GetAdmChannelAction,
        GetApnsChannelAction,
        GetApnsSandboxChannelAction,
        GetApnsVoipChannelAction,
        GetApnsVoipSandboxChannelAction,
        GetAppAction,
        GetApplicationSettingsAction,
        GetAppsAction,
        GetBaiduChannelAction,
        GetCampaignAction,
        GetCampaignActivitiesAction,
        GetCampaignVersionAction,
        GetCampaignVersionsAction,
        GetCampaignsAction,
        GetChannelsAction,
        GetEmailChannelAction,
        GetEndpointAction,
        GetEventStreamAction,
        GetExportJobAction,
        GetExportJobsAction,
        GetGcmChannelAction,
        GetImportJobAction,
        GetImportJobsAction,
        GetSegmentAction,
        GetSegmentExportJobsAction,
        GetSegmentImportJobsAction,
        GetSegmentVersionAction,
        GetSegmentVersionsAction,
        GetSegmentsAction,
        GetSmsChannelAction,
        GetUserEndpointsAction,
        GetVoiceChannelAction,
        ListTagsForResourceAction,
        PhoneNumberValidateAction,
        PutEventStreamAction,
        PutEventsAction,
        RemoveAttributesAction,
        SendMessagesAction,
        SendUsersMessagesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAdmChannelAction,
        UpdateApnsChannelAction,
        UpdateApnsSandboxChannelAction,
        UpdateApnsVoipChannelAction,
        UpdateApnsVoipSandboxChannelAction,
        UpdateApplicationSettingsAction,
        UpdateBaiduChannelAction,
        UpdateCampaignAction,
        UpdateEmailChannelAction,
        UpdateEndpointAction,
        UpdateEndpointsBatchAction,
        UpdateGcmChannelAction,
        UpdateSegmentAction,
        UpdateSmsChannelAction,
        UpdateVoiceChannelAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PinpointRequest(const Action action);
    PinpointRequest(const PinpointRequest &other);
    PinpointRequest &operator=(const PinpointRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PinpointRequest &other) const;


protected:
    /// @cond internal
    PinpointRequest(PinpointRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
