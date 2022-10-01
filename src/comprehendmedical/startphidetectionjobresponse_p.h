// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPHIDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTPHIDETECTIONJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StartPHIDetectionJobResponse;

class StartPHIDetectionJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StartPHIDetectionJobResponsePrivate(StartPHIDetectionJobResponse * const q);

    void parseStartPHIDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartPHIDetectionJobResponse)
    Q_DISABLE_COPY(StartPHIDetectionJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
