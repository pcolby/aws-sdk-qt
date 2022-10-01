// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDETECTORMODELANALYSISRESPONSE_P_H
#define QTAWS_STARTDETECTORMODELANALYSISRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class StartDetectorModelAnalysisResponse;

class StartDetectorModelAnalysisResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit StartDetectorModelAnalysisResponsePrivate(StartDetectorModelAnalysisResponse * const q);

    void parseStartDetectorModelAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDetectorModelAnalysisResponse)
    Q_DISABLE_COPY(StartDetectorModelAnalysisResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
