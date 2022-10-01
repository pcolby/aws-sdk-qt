// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTEVENTSDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListEventsDetectionJobsResponse;

class ListEventsDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListEventsDetectionJobsResponsePrivate(ListEventsDetectionJobsResponse * const q);

    void parseListEventsDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventsDetectionJobsResponse)
    Q_DISABLE_COPY(ListEventsDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
