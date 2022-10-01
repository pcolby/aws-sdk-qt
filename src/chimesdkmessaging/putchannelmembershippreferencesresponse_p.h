// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESRESPONSE_P_H
#define QTAWS_PUTCHANNELMEMBERSHIPPREFERENCESRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class PutChannelMembershipPreferencesResponse;

class PutChannelMembershipPreferencesResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit PutChannelMembershipPreferencesResponsePrivate(PutChannelMembershipPreferencesResponse * const q);

    void parsePutChannelMembershipPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutChannelMembershipPreferencesResponse)
    Q_DISABLE_COPY(PutChannelMembershipPreferencesResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
