// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTENTITIESDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListEntitiesDetectionJobsResponse;

class ListEntitiesDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListEntitiesDetectionJobsResponsePrivate(ListEntitiesDetectionJobsResponse * const q);

    void parseListEntitiesDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitiesDetectionJobsResponse)
    Q_DISABLE_COPY(ListEntitiesDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
