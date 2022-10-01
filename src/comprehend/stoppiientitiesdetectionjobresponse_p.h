// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPIIENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPPIIENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StopPiiEntitiesDetectionJobResponse;

class StopPiiEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StopPiiEntitiesDetectionJobResponsePrivate(StopPiiEntitiesDetectionJobResponse * const q);

    void parseStopPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopPiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StopPiiEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
