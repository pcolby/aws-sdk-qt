// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDETECTORMODELANALYSISRESULTSRESPONSE_P_H
#define QTAWS_GETDETECTORMODELANALYSISRESULTSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class GetDetectorModelAnalysisResultsResponse;

class GetDetectorModelAnalysisResultsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit GetDetectorModelAnalysisResultsResponsePrivate(GetDetectorModelAnalysisResultsResponse * const q);

    void parseGetDetectorModelAnalysisResultsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDetectorModelAnalysisResultsResponse)
    Q_DISABLE_COPY(GetDetectorModelAnalysisResultsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
