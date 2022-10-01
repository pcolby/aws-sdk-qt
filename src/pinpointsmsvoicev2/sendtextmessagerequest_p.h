// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEXTMESSAGEREQUEST_P_H
#define QTAWS_SENDTEXTMESSAGEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "sendtextmessagerequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendTextMessageRequest;

class SendTextMessageRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SendTextMessageRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SendTextMessageRequest * const q);
    SendTextMessageRequestPrivate(const SendTextMessageRequestPrivate &other,
                                   SendTextMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendTextMessageRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
