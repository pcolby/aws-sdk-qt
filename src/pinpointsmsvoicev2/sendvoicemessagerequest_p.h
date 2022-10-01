// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDVOICEMESSAGEREQUEST_P_H
#define QTAWS_SENDVOICEMESSAGEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "sendvoicemessagerequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendVoiceMessageRequest;

class SendVoiceMessageRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SendVoiceMessageRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SendVoiceMessageRequest * const q);
    SendVoiceMessageRequestPrivate(const SendVoiceMessageRequestPrivate &other,
                                   SendVoiceMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendVoiceMessageRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
