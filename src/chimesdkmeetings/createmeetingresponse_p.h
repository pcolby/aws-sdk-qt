// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGRESPONSE_P_H
#define QTAWS_CREATEMEETINGRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingResponse;

class CreateMeetingResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit CreateMeetingResponsePrivate(CreateMeetingResponse * const q);

    void parseCreateMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMeetingResponse)
    Q_DISABLE_COPY(CreateMeetingResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
