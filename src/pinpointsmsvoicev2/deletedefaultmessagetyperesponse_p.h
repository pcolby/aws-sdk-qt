// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTMESSAGETYPERESPONSE_P_H
#define QTAWS_DELETEDEFAULTMESSAGETYPERESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultMessageTypeResponse;

class DeleteDefaultMessageTypeResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit DeleteDefaultMessageTypeResponsePrivate(DeleteDefaultMessageTypeResponse * const q);

    void parseDeleteDefaultMessageTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDefaultMessageTypeResponse)
    Q_DISABLE_COPY(DeleteDefaultMessageTypeResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
