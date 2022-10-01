// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTENDEERESPONSE_P_H
#define QTAWS_CREATEATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateAttendeeResponse;

class CreateAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateAttendeeResponsePrivate(CreateAttendeeResponse * const q);

    void parseCreateAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAttendeeResponse)
    Q_DISABLE_COPY(CreateAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
