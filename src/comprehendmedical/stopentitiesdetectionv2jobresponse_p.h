// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPENTITIESDETECTIONV2JOBRESPONSE_P_H
#define QTAWS_STOPENTITIESDETECTIONV2JOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StopEntitiesDetectionV2JobResponse;

class StopEntitiesDetectionV2JobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StopEntitiesDetectionV2JobResponsePrivate(StopEntitiesDetectionV2JobResponse * const q);

    void parseStopEntitiesDetectionV2JobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(StopEntitiesDetectionV2JobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
