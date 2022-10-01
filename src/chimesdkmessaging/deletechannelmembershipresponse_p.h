// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETECHANNELMEMBERSHIPRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class DeleteChannelMembershipResponse;

class DeleteChannelMembershipResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit DeleteChannelMembershipResponsePrivate(DeleteChannelMembershipResponse * const q);

    void parseDeleteChannelMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelMembershipResponse)
    Q_DISABLE_COPY(DeleteChannelMembershipResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
