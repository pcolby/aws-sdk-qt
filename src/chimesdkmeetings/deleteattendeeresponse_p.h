// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEERESPONSE_P_H
#define QTAWS_DELETEATTENDEERESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteAttendeeResponse;

class DeleteAttendeeResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit DeleteAttendeeResponsePrivate(DeleteAttendeeResponse * const q);

    void parseDeleteAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAttendeeResponse)
    Q_DISABLE_COPY(DeleteAttendeeResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
