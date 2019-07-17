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

#ifndef QTAWS_SESREQUEST_H
#define QTAWS_SESREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SES {

class SesRequestPrivate;

class QTAWS_EXPORT SesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SES.
    enum Action {
        CloneReceiptRuleSetAction,
        CreateConfigurationSetAction,
        CreateConfigurationSetEventDestinationAction,
        CreateConfigurationSetTrackingOptionsAction,
        CreateCustomVerificationEmailTemplateAction,
        CreateReceiptFilterAction,
        CreateReceiptRuleAction,
        CreateReceiptRuleSetAction,
        CreateTemplateAction,
        DeleteConfigurationSetAction,
        DeleteConfigurationSetEventDestinationAction,
        DeleteConfigurationSetTrackingOptionsAction,
        DeleteCustomVerificationEmailTemplateAction,
        DeleteIdentityAction,
        DeleteIdentityPolicyAction,
        DeleteReceiptFilterAction,
        DeleteReceiptRuleAction,
        DeleteReceiptRuleSetAction,
        DeleteTemplateAction,
        DeleteVerifiedEmailAddressAction,
        DescribeActiveReceiptRuleSetAction,
        DescribeConfigurationSetAction,
        DescribeReceiptRuleAction,
        DescribeReceiptRuleSetAction,
        GetAccountSendingEnabledAction,
        GetCustomVerificationEmailTemplateAction,
        GetIdentityDkimAttributesAction,
        GetIdentityMailFromDomainAttributesAction,
        GetIdentityNotificationAttributesAction,
        GetIdentityPoliciesAction,
        GetIdentityVerificationAttributesAction,
        GetSendQuotaAction,
        GetSendStatisticsAction,
        GetTemplateAction,
        ListConfigurationSetsAction,
        ListCustomVerificationEmailTemplatesAction,
        ListIdentitiesAction,
        ListIdentityPoliciesAction,
        ListReceiptFiltersAction,
        ListReceiptRuleSetsAction,
        ListTemplatesAction,
        ListVerifiedEmailAddressesAction,
        PutIdentityPolicyAction,
        ReorderReceiptRuleSetAction,
        SendBounceAction,
        SendBulkTemplatedEmailAction,
        SendCustomVerificationEmailAction,
        SendEmailAction,
        SendRawEmailAction,
        SendTemplatedEmailAction,
        SetActiveReceiptRuleSetAction,
        SetIdentityDkimEnabledAction,
        SetIdentityFeedbackForwardingEnabledAction,
        SetIdentityHeadersInNotificationsEnabledAction,
        SetIdentityMailFromDomainAction,
        SetIdentityNotificationTopicAction,
        SetReceiptRulePositionAction,
        TestRenderTemplateAction,
        UpdateAccountSendingEnabledAction,
        UpdateConfigurationSetEventDestinationAction,
        UpdateConfigurationSetReputationMetricsEnabledAction,
        UpdateConfigurationSetSendingEnabledAction,
        UpdateConfigurationSetTrackingOptionsAction,
        UpdateCustomVerificationEmailTemplateAction,
        UpdateReceiptRuleAction,
        UpdateTemplateAction,
        VerifyDomainDkimAction,
        VerifyDomainIdentityAction,
        VerifyEmailAddressAction,
        VerifyEmailIdentityAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SesRequest(const Action action);
    SesRequest(const SesRequest &other);
    SesRequest &operator=(const SesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SesRequest &other) const;


protected:
    /// @cond internal
    SesRequest(SesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SesRequest)

};

} // namespace SES
} // namespace QtAws

#endif
