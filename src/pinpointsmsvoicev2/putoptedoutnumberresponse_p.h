// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOPTEDOUTNUMBERRESPONSE_P_H
#define QTAWS_PUTOPTEDOUTNUMBERRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PutOptedOutNumberResponse;

class PutOptedOutNumberResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit PutOptedOutNumberResponsePrivate(PutOptedOutNumberResponse * const q);

    void parsePutOptedOutNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutOptedOutNumberResponse)
    Q_DISABLE_COPY(PutOptedOutNumberResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
