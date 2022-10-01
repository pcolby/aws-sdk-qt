// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDUSERSMESSAGESRESPONSE_P_H
#define QTAWS_SENDUSERSMESSAGESRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class SendUsersMessagesResponse;

class SendUsersMessagesResponsePrivate : public PinpointResponsePrivate {

public:

    explicit SendUsersMessagesResponsePrivate(SendUsersMessagesResponse * const q);

    void parseSendUsersMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendUsersMessagesResponse)
    Q_DISABLE_COPY(SendUsersMessagesResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
