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

#ifndef QTAWS_PINPOINTSMSVOICEV2REQUEST_H
#define QTAWS_PINPOINTSMSVOICEV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawspinpointsmsvoicev2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2RequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PinpointSmsVoiceV2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by PinpointSmsVoiceV2.
    enum Action {
        AssociateOriginationIdentityAction,
        CreateConfigurationSetAction,
        CreateEventDestinationAction,
        CreateOptOutListAction,
        CreatePoolAction,
        DeleteConfigurationSetAction,
        DeleteDefaultMessageTypeAction,
        DeleteDefaultSenderIdAction,
        DeleteEventDestinationAction,
        DeleteKeywordAction,
        DeleteOptOutListAction,
        DeleteOptedOutNumberAction,
        DeletePoolAction,
        DeleteTextMessageSpendLimitOverrideAction,
        DeleteVoiceMessageSpendLimitOverrideAction,
        DescribeAccountAttributesAction,
        DescribeAccountLimitsAction,
        DescribeConfigurationSetsAction,
        DescribeKeywordsAction,
        DescribeOptOutListsAction,
        DescribeOptedOutNumbersAction,
        DescribePhoneNumbersAction,
        DescribePoolsAction,
        DescribeSenderIdsAction,
        DescribeSpendLimitsAction,
        DisassociateOriginationIdentityAction,
        ListPoolOriginationIdentitiesAction,
        ListTagsForResourceAction,
        PutKeywordAction,
        PutOptedOutNumberAction,
        ReleasePhoneNumberAction,
        RequestPhoneNumberAction,
        SendTextMessageAction,
        SendVoiceMessageAction,
        SetDefaultMessageTypeAction,
        SetDefaultSenderIdAction,
        SetTextMessageSpendLimitOverrideAction,
        SetVoiceMessageSpendLimitOverrideAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEventDestinationAction,
        UpdatePhoneNumberAction,
        UpdatePoolAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    PinpointSmsVoiceV2Request(const Action action);
    PinpointSmsVoiceV2Request(const PinpointSmsVoiceV2Request &other);
    PinpointSmsVoiceV2Request &operator=(const PinpointSmsVoiceV2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const PinpointSmsVoiceV2Request &other) const;


protected:
    /// @cond internal
    explicit PinpointSmsVoiceV2Request(PinpointSmsVoiceV2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointSmsVoiceV2Request)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
