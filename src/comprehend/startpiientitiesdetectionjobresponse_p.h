// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPIIENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTPIIENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartPiiEntitiesDetectionJobResponse;

class StartPiiEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartPiiEntitiesDetectionJobResponsePrivate(StartPiiEntitiesDetectionJobResponse * const q);

    void parseStartPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StartPiiEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
