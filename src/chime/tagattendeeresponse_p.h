// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGATTENDEERESPONSE_P_H
#define QTAWS_TAGATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class TagAttendeeResponse;

class TagAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit TagAttendeeResponsePrivate(TagAttendeeResponse * const q);

    void parseTagAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagAttendeeResponse)
    Q_DISABLE_COPY(TagAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
