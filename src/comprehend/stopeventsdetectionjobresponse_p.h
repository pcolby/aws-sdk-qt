// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEVENTSDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPEVENTSDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopEventsDetectionJobResponse;

class StopEventsDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopEventsDetectionJobResponsePrivate(StopEventsDetectionJobResponse * const q);

    void parseStopEventsDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEventsDetectionJobResponse)
    Q_DISABLE_COPY(StopEventsDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
