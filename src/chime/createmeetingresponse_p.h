// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGRESPONSE_P_H
#define QTAWS_CREATEMEETINGRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateMeetingResponse;

class CreateMeetingResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateMeetingResponsePrivate(CreateMeetingResponse * const q);

    void parseCreateMeetingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMeetingResponse)
    Q_DISABLE_COPY(CreateMeetingResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
