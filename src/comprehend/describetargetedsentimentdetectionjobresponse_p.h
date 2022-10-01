// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeTargetedSentimentDetectionJobResponse;

class DescribeTargetedSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeTargetedSentimentDetectionJobResponsePrivate(DescribeTargetedSentimentDetectionJobResponse * const q);

    void parseDescribeTargetedSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTargetedSentimentDetectionJobResponse)
    Q_DISABLE_COPY(DescribeTargetedSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
