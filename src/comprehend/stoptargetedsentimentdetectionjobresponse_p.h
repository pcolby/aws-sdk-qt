// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPTARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopTargetedSentimentDetectionJobResponse;

class StopTargetedSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopTargetedSentimentDetectionJobResponsePrivate(StopTargetedSentimentDetectionJobResponse * const q);

    void parseStopTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StopTargetedSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
