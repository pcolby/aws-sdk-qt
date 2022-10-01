// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_LISTCHANNELSMODERATEDBYAPPINSTANCEUSERRESPONSE_P_H

#include "chimesdkmessagingresponse_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ListChannelsModeratedByAppInstanceUserResponse;

class ListChannelsModeratedByAppInstanceUserResponsePrivate : public ChimeSdkMessagingResponsePrivate {

public:

    explicit ListChannelsModeratedByAppInstanceUserResponsePrivate(ListChannelsModeratedByAppInstanceUserResponse * const q);

    void parseListChannelsModeratedByAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChannelsModeratedByAppInstanceUserResponse)
    Q_DISABLE_COPY(ListChannelsModeratedByAppInstanceUserResponsePrivate)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
