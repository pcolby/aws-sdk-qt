// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEERESPONSE_P_H
#define QTAWS_GETATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetAttendeeResponse;

class GetAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetAttendeeResponsePrivate(GetAttendeeResponse * const q);

    void parseGetAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAttendeeResponse)
    Q_DISABLE_COPY(GetAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
