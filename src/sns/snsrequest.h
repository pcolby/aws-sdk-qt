// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNSREQUEST_H
#define QTAWS_SNSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssnsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Sns {

class SnsRequestPrivate;

class QTAWSSNS_EXPORT SnsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Sns.
    enum Action {
        AddPermissionAction,
        CheckIfPhoneNumberIsOptedOutAction,
        ConfirmSubscriptionAction,
        CreatePlatformApplicationAction,
        CreatePlatformEndpointAction,
        CreateSMSSandboxPhoneNumberAction,
        CreateTopicAction,
        DeleteEndpointAction,
        DeletePlatformApplicationAction,
        DeleteSMSSandboxPhoneNumberAction,
        DeleteTopicAction,
        GetDataProtectionPolicyAction,
        GetEndpointAttributesAction,
        GetPlatformApplicationAttributesAction,
        GetSMSAttributesAction,
        GetSMSSandboxAccountStatusAction,
        GetSubscriptionAttributesAction,
        GetTopicAttributesAction,
        ListEndpointsByPlatformApplicationAction,
        ListOriginationNumbersAction,
        ListPhoneNumbersOptedOutAction,
        ListPlatformApplicationsAction,
        ListSMSSandboxPhoneNumbersAction,
        ListSubscriptionsAction,
        ListSubscriptionsByTopicAction,
        ListTagsForResourceAction,
        ListTopicsAction,
        OptInPhoneNumberAction,
        PublishAction,
        PublishBatchAction,
        PutDataProtectionPolicyAction,
        RemovePermissionAction,
        SetEndpointAttributesAction,
        SetPlatformApplicationAttributesAction,
        SetSMSAttributesAction,
        SetSubscriptionAttributesAction,
        SetTopicAttributesAction,
        SubscribeAction,
        TagResourceAction,
        UnsubscribeAction,
        UntagResourceAction,
        VerifySMSSandboxPhoneNumberAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SnsRequest(const Action action);
    SnsRequest(const SnsRequest &other);
    SnsRequest &operator=(const SnsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SnsRequest &other) const;


protected:
    /// @cond internal
    explicit SnsRequest(SnsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnsRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
