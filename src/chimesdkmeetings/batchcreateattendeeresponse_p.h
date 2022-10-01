// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEATTENDEERESPONSE_P_H
#define QTAWS_BATCHCREATEATTENDEERESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchCreateAttendeeResponse;

class BatchCreateAttendeeResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit BatchCreateAttendeeResponsePrivate(BatchCreateAttendeeResponse * const q);

    void parseBatchCreateAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateAttendeeResponse)
    Q_DISABLE_COPY(BatchCreateAttendeeResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
