// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartEntitiesDetectionJobResponse;

class StartEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartEntitiesDetectionJobResponsePrivate(StartEntitiesDetectionJobResponse * const q);

    void parseStartEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(StartEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
