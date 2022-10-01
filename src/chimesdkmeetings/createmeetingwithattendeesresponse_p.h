// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGWITHATTENDEESRESPONSE_P_H
#define QTAWS_CREATEMEETINGWITHATTENDEESRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingWithAttendeesResponse;

class CreateMeetingWithAttendeesResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit CreateMeetingWithAttendeesResponsePrivate(CreateMeetingWithAttendeesResponse * const q);

    void parseCreateMeetingWithAttendeesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMeetingWithAttendeesResponse)
    Q_DISABLE_COPY(CreateMeetingWithAttendeesResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
