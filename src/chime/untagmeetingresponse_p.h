// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMEETINGRESPONSE_P_H
#define QTAWS_UNTAGMEETINGRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UntagMeetingResponse;

class UntagMeetingResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UntagMeetingResponsePrivate(UntagMeetingResponse * const q);

    void parseUntagMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagMeetingResponse)
    Q_DISABLE_COPY(UntagMeetingResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
