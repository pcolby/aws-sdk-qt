// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTENDEECAPABILITIESRESPONSE_P_H
#define QTAWS_UPDATEATTENDEECAPABILITIESRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class UpdateAttendeeCapabilitiesResponse;

class UpdateAttendeeCapabilitiesResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit UpdateAttendeeCapabilitiesResponsePrivate(UpdateAttendeeCapabilitiesResponse * const q);

    void parseUpdateAttendeeCapabilitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAttendeeCapabilitiesResponse)
    Q_DISABLE_COPY(UpdateAttendeeCapabilitiesResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
