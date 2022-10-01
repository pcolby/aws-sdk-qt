// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTENTITIESDETECTIONV2JOBRESPONSE_P_H
#define QTAWS_STARTENTITIESDETECTIONV2JOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class StartEntitiesDetectionV2JobResponse;

class StartEntitiesDetectionV2JobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit StartEntitiesDetectionV2JobResponsePrivate(StartEntitiesDetectionV2JobResponse * const q);

    void parseStartEntitiesDetectionV2JobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(StartEntitiesDetectionV2JobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
