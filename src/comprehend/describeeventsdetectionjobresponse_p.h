// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeEventsDetectionJobResponse;

class DescribeEventsDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeEventsDetectionJobResponsePrivate(DescribeEventsDetectionJobResponse * const q);

    void parseDescribeEventsDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventsDetectionJobResponse)
    Q_DISABLE_COPY(DescribeEventsDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
