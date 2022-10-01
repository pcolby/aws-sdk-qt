// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEV2REQUEST_P_H
#define QTAWS_PINPOINTSMSVOICEV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2Request;

class PinpointSmsVoiceV2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PinpointSmsVoiceV2Request::Action action; ///< PinpointSmsVoiceV2 action to be performed.
    QString apiVersion;        ///< PinpointSmsVoiceV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PinpointSmsVoiceV2 request (query string) parameters. @todo?

    PinpointSmsVoiceV2RequestPrivate(const PinpointSmsVoiceV2Request::Action action, PinpointSmsVoiceV2Request * const q);
    PinpointSmsVoiceV2RequestPrivate(const PinpointSmsVoiceV2RequestPrivate &other, PinpointSmsVoiceV2Request * const q);

    static QString toString(const PinpointSmsVoiceV2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceV2Request)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
