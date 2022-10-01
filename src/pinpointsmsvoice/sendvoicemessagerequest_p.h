// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDVOICEMESSAGEREQUEST_P_H
#define QTAWS_SENDVOICEMESSAGEREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "sendvoicemessagerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class SendVoiceMessageRequest;

class SendVoiceMessageRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    SendVoiceMessageRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   SendVoiceMessageRequest * const q);
    SendVoiceMessageRequestPrivate(const SendVoiceMessageRequestPrivate &other,
                                   SendVoiceMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendVoiceMessageRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
