// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEERESPONSE_P_H
#define QTAWS_GETATTENDEERESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class GetAttendeeResponse;

class GetAttendeeResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit GetAttendeeResponsePrivate(GetAttendeeResponse * const q);

    void parseGetAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAttendeeResponse)
    Q_DISABLE_COPY(GetAttendeeResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
