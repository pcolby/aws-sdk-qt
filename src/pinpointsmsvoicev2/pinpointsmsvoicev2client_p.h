// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEV2CLIENT_P_H
#define QTAWS_PINPOINTSMSVOICEV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2Client;

class PinpointSmsVoiceV2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PinpointSmsVoiceV2ClientPrivate(PinpointSmsVoiceV2Client * const q);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceV2Client)
    Q_DISABLE_COPY(PinpointSmsVoiceV2ClientPrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
