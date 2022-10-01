// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEXTMESSAGERESPONSE_P_H
#define QTAWS_SENDTEXTMESSAGERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendTextMessageResponse;

class SendTextMessageResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SendTextMessageResponsePrivate(SendTextMessageResponse * const q);

    void parseSendTextMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendTextMessageResponse)
    Q_DISABLE_COPY(SendTextMessageResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
