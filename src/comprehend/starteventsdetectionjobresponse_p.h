// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEVENTSDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTEVENTSDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartEventsDetectionJobResponse;

class StartEventsDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartEventsDetectionJobResponsePrivate(StartEventsDetectionJobResponse * const q);

    void parseStartEventsDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartEventsDetectionJobResponse)
    Q_DISABLE_COPY(StartEventsDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
