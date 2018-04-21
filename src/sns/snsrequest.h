/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SNSREQUEST_H
#define QTAWS_SNSREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SNS {

class SnsRequestPrivate;

class QTAWS_EXPORT SnsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SNS.
    enum Action {
        AddPermissionAction,
        CheckIfPhoneNumberIsOptedOutAction,
        ConfirmSubscriptionAction,
        CreatePlatformApplicationAction,
        CreatePlatformEndpointAction,
        CreateTopicAction,
        DeleteEndpointAction,
        DeletePlatformApplicationAction,
        DeleteTopicAction,
        GetEndpointAttributesAction,
        GetPlatformApplicationAttributesAction,
        GetSMSAttributesAction,
        GetSubscriptionAttributesAction,
        GetTopicAttributesAction,
        ListEndpointsByPlatformApplicationAction,
        ListPhoneNumbersOptedOutAction,
        ListPlatformApplicationsAction,
        ListSubscriptionsAction,
        ListSubscriptionsByTopicAction,
        ListTopicsAction,
        OptInPhoneNumberAction,
        PublishAction,
        RemovePermissionAction,
        SetEndpointAttributesAction,
        SetPlatformApplicationAttributesAction,
        SetSMSAttributesAction,
        SetSubscriptionAttributesAction,
        SetTopicAttributesAction,
        SubscribeAction,
        UnsubscribeAction,
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

    virtual bool operator==(const SnsRequest &other) const override;


protected:
    /// @cond internal
    SnsRequest(SnsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(SnsRequest)

};

} // namespace SNS
} // namespace QtAws

#endif
