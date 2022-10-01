// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPSENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopSentimentDetectionJobResponse;

class StopSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopSentimentDetectionJobResponsePrivate(StopSentimentDetectionJobResponse * const q);

    void parseStopSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StopSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
