// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPHIDETECTIONJOBRESPONSE_P_H
#define QTAWS_STOPPHIDETECTIONJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StopPHIDetectionJobResponse;

class StopPHIDetectionJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StopPHIDetectionJobResponsePrivate(StopPHIDetectionJobResponse * const q);

    void parseStopPHIDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopPHIDetectionJobResponse)
    Q_DISABLE_COPY(StopPHIDetectionJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
