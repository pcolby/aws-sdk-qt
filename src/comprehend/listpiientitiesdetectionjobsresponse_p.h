// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIIENTITIESDETECTIONJOBSRESPONSE_P_H
#define QTAWS_LISTPIIENTITIESDETECTIONJOBSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListPiiEntitiesDetectionJobsResponse;

class ListPiiEntitiesDetectionJobsResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListPiiEntitiesDetectionJobsResponsePrivate(ListPiiEntitiesDetectionJobsResponse * const q);

    void parseListPiiEntitiesDetectionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPiiEntitiesDetectionJobsResponse)
    Q_DISABLE_COPY(ListPiiEntitiesDetectionJobsResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
