// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGATTENDEERESPONSE_P_H
#define QTAWS_UNTAGATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UntagAttendeeResponse;

class UntagAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UntagAttendeeResponsePrivate(UntagAttendeeResponse * const q);

    void parseUntagAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagAttendeeResponse)
    Q_DISABLE_COPY(UntagAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
