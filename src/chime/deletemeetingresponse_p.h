// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEETINGRESPONSE_P_H
#define QTAWS_DELETEMEETINGRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteMeetingResponse;

class DeleteMeetingResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteMeetingResponsePrivate(DeleteMeetingResponse * const q);

    void parseDeleteMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMeetingResponse)
    Q_DISABLE_COPY(DeleteMeetingResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
