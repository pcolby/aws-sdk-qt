// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMEETINGRESPONSE_P_H
#define QTAWS_TAGMEETINGRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class TagMeetingResponse;

class TagMeetingResponsePrivate : public ChimeResponsePrivate {

public:

    explicit TagMeetingResponsePrivate(TagMeetingResponse * const q);

    void parseTagMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagMeetingResponse)
    Q_DISABLE_COPY(TagMeetingResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
