// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartTargetedSentimentDetectionJobResponse;

class StartTargetedSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartTargetedSentimentDetectionJobResponsePrivate(StartTargetedSentimentDetectionJobResponse * const q);

    void parseStartTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(StartTargetedSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
