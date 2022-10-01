// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
