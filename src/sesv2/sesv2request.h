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

#ifndef QTAWS_SESV2REQUEST_H
#define QTAWS_SESV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssesv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SESv2 {

class SESv2RequestPrivate;

class QTAWSSESV2_EXPORT SESv2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SESv2.
    enum Action {
        CreateConfigurationSetAction,
        CreateConfigurationSetEventDestinationAction,
        CreateContactAction,
        CreateContactListAction,
        CreateCustomVerificationEmailTemplateAction,
        CreateDedicatedIpPoolAction,
        CreateDeliverabilityTestReportAction,
        CreateEmailIdentityAction,
        CreateEmailIdentityPolicyAction,
        CreateEmailTemplateAction,
        CreateImportJobAction,
        DeleteConfigurationSetAction,
        DeleteConfigurationSetEventDestinationAction,
        DeleteContactAction,
        DeleteContactListAction,
        DeleteCustomVerificationEmailTemplateAction,
        DeleteDedicatedIpPoolAction,
        DeleteEmailIdentityAction,
        DeleteEmailIdentityPolicyAction,
        DeleteEmailTemplateAction,
        DeleteSuppressedDestinationAction,
        GetAccountAction,
        GetBlacklistReportsAction,
        GetConfigurationSetAction,
        GetConfigurationSetEventDestinationsAction,
        GetContactAction,
        GetContactListAction,
        GetCustomVerificationEmailTemplateAction,
        GetDedicatedIpAction,
        GetDedicatedIpsAction,
        GetDeliverabilityDashboardOptionsAction,
        GetDeliverabilityTestReportAction,
        GetDomainDeliverabilityCampaignAction,
        GetDomainStatisticsReportAction,
        GetEmailIdentityAction,
        GetEmailIdentityPoliciesAction,
        GetEmailTemplateAction,
        GetImportJobAction,
        GetSuppressedDestinationAction,
        ListConfigurationSetsAction,
        ListContactListsAction,
        ListContactsAction,
        ListCustomVerificationEmailTemplatesAction,
        ListDedicatedIpPoolsAction,
        ListDeliverabilityTestReportsAction,
        ListDomainDeliverabilityCampaignsAction,
        ListEmailIdentitiesAction,
        ListEmailTemplatesAction,
        ListImportJobsAction,
        ListSuppressedDestinationsAction,
        ListTagsForResourceAction,
        PutAccountDedicatedIpWarmupAttributesAction,
        PutAccountDetailsAction,
        PutAccountSendingAttributesAction,
        PutAccountSuppressionAttributesAction,
        PutConfigurationSetDeliveryOptionsAction,
        PutConfigurationSetReputationOptionsAction,
        PutConfigurationSetSendingOptionsAction,
        PutConfigurationSetSuppressionOptionsAction,
        PutConfigurationSetTrackingOptionsAction,
        PutDedicatedIpInPoolAction,
        PutDedicatedIpWarmupAttributesAction,
        PutDeliverabilityDashboardOptionAction,
        PutEmailIdentityConfigurationSetAttributesAction,
        PutEmailIdentityDkimAttributesAction,
        PutEmailIdentityDkimSigningAttributesAction,
        PutEmailIdentityFeedbackAttributesAction,
        PutEmailIdentityMailFromAttributesAction,
        PutSuppressedDestinationAction,
        SendBulkEmailAction,
        SendCustomVerificationEmailAction,
        SendEmailAction,
        TagResourceAction,
        TestRenderEmailTemplateAction,
        UntagResourceAction,
        UpdateConfigurationSetEventDestinationAction,
        UpdateContactAction,
        UpdateContactListAction,
        UpdateCustomVerificationEmailTemplateAction,
        UpdateEmailIdentityPolicyAction,
        UpdateEmailTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SESv2Request(const Action action);
    SESv2Request(const SESv2Request &other);
    SESv2Request &operator=(const SESv2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SESv2Request &other) const;


protected:
    /// @cond internal
    explicit SESv2Request(SESv2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SESv2Request)

};

} // namespace SESv2
} // namespace QtAws

#endif
