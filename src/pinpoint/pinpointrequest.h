// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTREQUEST_H
#define QTAWS_PINPOINTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspinpointglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Pinpoint {

class PinpointRequestPrivate;

class QTAWSPINPOINT_EXPORT PinpointRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Pinpoint.
    enum Action {
        CreateAppAction,
        CreateCampaignAction,
        CreateEmailTemplateAction,
        CreateExportJobAction,
        CreateImportJobAction,
        CreateInAppTemplateAction,
        CreateJourneyAction,
        CreatePushTemplateAction,
        CreateRecommenderConfigurationAction,
        CreateSegmentAction,
        CreateSmsTemplateAction,
        CreateVoiceTemplateAction,
        DeleteAdmChannelAction,
        DeleteApnsChannelAction,
        DeleteApnsSandboxChannelAction,
        DeleteApnsVoipChannelAction,
        DeleteApnsVoipSandboxChannelAction,
        DeleteAppAction,
        DeleteBaiduChannelAction,
        DeleteCampaignAction,
        DeleteEmailChannelAction,
        DeleteEmailTemplateAction,
        DeleteEndpointAction,
        DeleteEventStreamAction,
        DeleteGcmChannelAction,
        DeleteInAppTemplateAction,
        DeleteJourneyAction,
        DeletePushTemplateAction,
        DeleteRecommenderConfigurationAction,
        DeleteSegmentAction,
        DeleteSmsChannelAction,
        DeleteSmsTemplateAction,
        DeleteUserEndpointsAction,
        DeleteVoiceChannelAction,
        DeleteVoiceTemplateAction,
        GetAdmChannelAction,
        GetApnsChannelAction,
        GetApnsSandboxChannelAction,
        GetApnsVoipChannelAction,
        GetApnsVoipSandboxChannelAction,
        GetAppAction,
        GetApplicationDateRangeKpiAction,
        GetApplicationSettingsAction,
        GetAppsAction,
        GetBaiduChannelAction,
        GetCampaignAction,
        GetCampaignActivitiesAction,
        GetCampaignDateRangeKpiAction,
        GetCampaignVersionAction,
        GetCampaignVersionsAction,
        GetCampaignsAction,
        GetChannelsAction,
        GetEmailChannelAction,
        GetEmailTemplateAction,
        GetEndpointAction,
        GetEventStreamAction,
        GetExportJobAction,
        GetExportJobsAction,
        GetGcmChannelAction,
        GetImportJobAction,
        GetImportJobsAction,
        GetInAppMessagesAction,
        GetInAppTemplateAction,
        GetJourneyAction,
        GetJourneyDateRangeKpiAction,
        GetJourneyExecutionActivityMetricsAction,
        GetJourneyExecutionMetricsAction,
        GetPushTemplateAction,
        GetRecommenderConfigurationAction,
        GetRecommenderConfigurationsAction,
        GetSegmentAction,
        GetSegmentExportJobsAction,
        GetSegmentImportJobsAction,
        GetSegmentVersionAction,
        GetSegmentVersionsAction,
        GetSegmentsAction,
        GetSmsChannelAction,
        GetSmsTemplateAction,
        GetUserEndpointsAction,
        GetVoiceChannelAction,
        GetVoiceTemplateAction,
        ListJourneysAction,
        ListTagsForResourceAction,
        ListTemplateVersionsAction,
        ListTemplatesAction,
        PhoneNumberValidateAction,
        PutEventStreamAction,
        PutEventsAction,
        RemoveAttributesAction,
        SendMessagesAction,
        SendOTPMessageAction,
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
        UpdateEmailTemplateAction,
        UpdateEndpointAction,
        UpdateEndpointsBatchAction,
        UpdateGcmChannelAction,
        UpdateInAppTemplateAction,
        UpdateJourneyAction,
        UpdateJourneyStateAction,
        UpdatePushTemplateAction,
        UpdateRecommenderConfigurationAction,
        UpdateSegmentAction,
        UpdateSmsChannelAction,
        UpdateSmsTemplateAction,
        UpdateTemplateActiveVersionAction,
        UpdateVoiceChannelAction,
        UpdateVoiceTemplateAction,
        VerifyOTPMessageAction,
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
    explicit PinpointRequest(PinpointRequestPrivate * const d);
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
