// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESRESPONSE_P_H
#define QTAWS_LISTATTENDEESRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class ListAttendeesResponse;

class ListAttendeesResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit ListAttendeesResponsePrivate(ListAttendeesResponse * const q);

    void parseListAttendeesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAttendeesResponse)
    Q_DISABLE_COPY(ListAttendeesResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
