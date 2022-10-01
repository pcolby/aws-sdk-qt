// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTRESPONSE_P_H
#define QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTRESPONSE_P_H

#include "chimesdkmeetingsresponse_p.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchUpdateAttendeeCapabilitiesExceptResponse;

class BatchUpdateAttendeeCapabilitiesExceptResponsePrivate : public ChimeSdkMeetingsResponsePrivate {

public:

    explicit BatchUpdateAttendeeCapabilitiesExceptResponsePrivate(BatchUpdateAttendeeCapabilitiesExceptResponse * const q);

    void parseBatchUpdateAttendeeCapabilitiesExceptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateAttendeeCapabilitiesExceptResponse)
    Q_DISABLE_COPY(BatchUpdateAttendeeCapabilitiesExceptResponsePrivate)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
