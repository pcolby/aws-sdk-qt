// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTEMAILREQUEST_H
#define QTAWS_PINPOINTEMAILREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspinpointemailglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PinpointEmailRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PinpointEmail.
    enum Action {
        CreateConfigurationSetAction,
        CreateConfigurationSetEventDestinationAction,
        CreateDedicatedIpPoolAction,
        CreateDeliverabilityTestReportAction,
        CreateEmailIdentityAction,
        DeleteConfigurationSetAction,
        DeleteConfigurationSetEventDestinationAction,
        DeleteDedicatedIpPoolAction,
        DeleteEmailIdentityAction,
        GetAccountAction,
        GetBlacklistReportsAction,
        GetConfigurationSetAction,
        GetConfigurationSetEventDestinationsAction,
        GetDedicatedIpAction,
        GetDedicatedIpsAction,
        GetDeliverabilityDashboardOptionsAction,
        GetDeliverabilityTestReportAction,
        GetDomainDeliverabilityCampaignAction,
        GetDomainStatisticsReportAction,
        GetEmailIdentityAction,
        ListConfigurationSetsAction,
        ListDedicatedIpPoolsAction,
        ListDeliverabilityTestReportsAction,
        ListDomainDeliverabilityCampaignsAction,
        ListEmailIdentitiesAction,
        ListTagsForResourceAction,
        PutAccountDedicatedIpWarmupAttributesAction,
        PutAccountSendingAttributesAction,
        PutConfigurationSetDeliveryOptionsAction,
        PutConfigurationSetReputationOptionsAction,
        PutConfigurationSetSendingOptionsAction,
        PutConfigurationSetTrackingOptionsAction,
        PutDedicatedIpInPoolAction,
        PutDedicatedIpWarmupAttributesAction,
        PutDeliverabilityDashboardOptionAction,
        PutEmailIdentityDkimAttributesAction,
        PutEmailIdentityFeedbackAttributesAction,
        PutEmailIdentityMailFromAttributesAction,
        SendEmailAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConfigurationSetEventDestinationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PinpointEmailRequest(const Action action);
    PinpointEmailRequest(const PinpointEmailRequest &other);
    PinpointEmailRequest &operator=(const PinpointEmailRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PinpointEmailRequest &other) const;


protected:
    /// @cond internal
    explicit PinpointEmailRequest(PinpointEmailRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointEmailRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
