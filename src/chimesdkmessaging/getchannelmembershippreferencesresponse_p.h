// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELMEMBERSHIPPREFERENCESRESPONSE_P_H
#define QTAWS_GETCHANNELMEMBERSHIPPREFERENCESRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class GetChannelMembershipPreferencesResponse;

class GetChannelMembershipPreferencesResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit GetChannelMembershipPreferencesResponsePrivate(GetChannelMembershipPreferencesResponse * const q);

    void parseGetChannelMembershipPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetChannelMembershipPreferencesResponse)
    Q_DISABLE_COPY(GetChannelMembershipPreferencesResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
