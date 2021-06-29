/*
    Copyright 2013-2021 Paul Colby

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
    PinpointEmailRequestPrivate * const d_ptr; ///< Internal d-pointer.
    PinpointEmailRequest(PinpointEmailRequestPrivate * const d);
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
