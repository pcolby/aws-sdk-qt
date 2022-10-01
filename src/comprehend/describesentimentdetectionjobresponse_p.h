// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENTIMENTDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBESENTIMENTDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeSentimentDetectionJobResponse;

class DescribeSentimentDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeSentimentDetectionJobResponsePrivate(DescribeSentimentDetectionJobResponse * const q);

    void parseDescribeSentimentDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSentimentDetectionJobResponse)
    Q_DISABLE_COPY(DescribeSentimentDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
