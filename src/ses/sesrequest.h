// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESREQUEST_H
#define QTAWS_SESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ses {

class SesRequestPrivate;

class QTAWSSES_EXPORT SesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ses.
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
        PutConfigurationSetDeliveryOptionsAction,
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
    explicit SesRequest(SesRequestPrivate * const d);
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

} // namespace Ses
} // namespace QtAws

#endif
