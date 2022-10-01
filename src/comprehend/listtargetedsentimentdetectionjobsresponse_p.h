// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListTargetedSentimentDetectionJobsResponse;

class ListTargetedSentimentDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListTargetedSentimentDetectionJobsResponsePrivate(ListTargetedSentimentDetectionJobsResponse * const q);

    void parseListTargetedSentimentDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetedSentimentDetectionJobsResponse)
    Q_DISABLE_COPY(ListTargetedSentimentDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
