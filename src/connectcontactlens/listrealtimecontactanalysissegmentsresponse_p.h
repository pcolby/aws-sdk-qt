// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSRESPONSE_P_H
#define QTAWS_LISTREALTIMECONTACTANALYSISSEGMENTSRESPONSE_P_H

#include "connectcontactlensresponse_p.h"

namespace QtAws {
namespace ConnectContactLens {

class ListRealtimeContactAnalysisSegmentsResponse;

class ListRealtimeContactAnalysisSegmentsResponsePrivate : public ConnectContactLensResponsePrivate {

public:

    explicit ListRealtimeContactAnalysisSegmentsResponsePrivate(ListRealtimeContactAnalysisSegmentsResponse * const q);

    void parseListRealtimeContactAnalysisSegmentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRealtimeContactAnalysisSegmentsResponse)
    Q_DISABLE_COPY(ListRealtimeContactAnalysisSegmentsResponsePrivate)

};

} // namespace ConnectContactLens
} // namespace QtAws

#endif
