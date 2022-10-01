// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEETINGRESPONSE_P_H
#define QTAWS_GETMEETINGRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetMeetingResponse;

class GetMeetingResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetMeetingResponsePrivate(GetMeetingResponse * const q);

    void parseGetMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMeetingResponse)
    Q_DISABLE_COPY(GetMeetingResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
