// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICECLIENT_P_H
#define QTAWS_PINPOINTSMSVOICECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace PinpointSmsVoice {

class PinpointSmsVoiceClient;

class PinpointSmsVoiceClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PinpointSmsVoiceClientPrivate(PinpointSmsVoiceClient * const q);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceClient)
    Q_DISABLE_COPY(PinpointSmsVoiceClientPrivate)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
