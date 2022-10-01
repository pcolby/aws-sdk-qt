// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDVOICEMESSAGERESPONSE_P_H
#define QTAWS_SENDVOICEMESSAGERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendVoiceMessageResponse;

class SendVoiceMessageResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SendVoiceMessageResponsePrivate(SendVoiceMessageResponse * const q);

    void parseSendVoiceMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendVoiceMessageResponse)
    Q_DISABLE_COPY(SendVoiceMessageResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
