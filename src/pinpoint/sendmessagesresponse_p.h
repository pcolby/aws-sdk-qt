// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDMESSAGESRESPONSE_P_H
#define QTAWS_SENDMESSAGESRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class SendMessagesResponse;

class SendMessagesResponsePrivate : public PinpointResponsePrivate {

public:

    explicit SendMessagesResponsePrivate(SendMessagesResponse * const q);

    void parseSendMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendMessagesResponse)
    Q_DISABLE_COPY(SendMessagesResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
