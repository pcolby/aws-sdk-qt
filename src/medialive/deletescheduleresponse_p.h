// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULERESPONSE_P_H
#define QTAWS_DELETESCHEDULERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DeleteScheduleResponse;

class DeleteScheduleResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DeleteScheduleResponsePrivate(DeleteScheduleResponse * const q);

    void parseDeleteScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScheduleResponse)
    Q_DISABLE_COPY(DeleteScheduleResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
