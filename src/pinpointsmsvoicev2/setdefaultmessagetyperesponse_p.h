// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTMESSAGETYPERESPONSE_P_H
#define QTAWS_SETDEFAULTMESSAGETYPERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultMessageTypeResponse;

class SetDefaultMessageTypeResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit SetDefaultMessageTypeResponsePrivate(SetDefaultMessageTypeResponse * const q);

    void parseSetDefaultMessageTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDefaultMessageTypeResponse)
    Q_DISABLE_COPY(SetDefaultMessageTypeResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
