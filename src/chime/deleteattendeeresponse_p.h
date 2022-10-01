// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEERESPONSE_P_H
#define QTAWS_DELETEATTENDEERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteAttendeeResponse;

class DeleteAttendeeResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteAttendeeResponsePrivate(DeleteAttendeeResponse * const q);

    void parseDeleteAttendeeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAttendeeResponse)
    Q_DISABLE_COPY(DeleteAttendeeResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
