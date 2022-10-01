// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGDIALOUTRESPONSE_P_H
#define QTAWS_CREATEMEETINGDIALOUTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateMeetingDialOutResponse;

class CreateMeetingDialOutResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateMeetingDialOutResponsePrivate(CreateMeetingDialOutResponse * const q);

    void parseCreateMeetingDialOutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMeetingDialOutResponse)
    Q_DISABLE_COPY(CreateMeetingDialOutResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
