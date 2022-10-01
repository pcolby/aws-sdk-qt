// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_P_H
#define QTAWS_LISTCHANNELMEMBERSHIPSRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelMembershipsResponse;

class ListChannelMembershipsResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelMembershipsResponsePrivate(ListChannelMembershipsResponse * const q);

    void parseListChannelMembershipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelMembershipsResponse)
    Q_DISABLE_COPY(ListChannelMembershipsResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
