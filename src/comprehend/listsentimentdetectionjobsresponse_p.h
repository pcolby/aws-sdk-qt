// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENTIMENTDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTSENTIMENTDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListSentimentDetectionJobsResponse;

class ListSentimentDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListSentimentDetectionJobsResponsePrivate(ListSentimentDetectionJobsResponse * const q);

    void parseListSentimentDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSentimentDetectionJobsResponse)
    Q_DISABLE_COPY(ListSentimentDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
