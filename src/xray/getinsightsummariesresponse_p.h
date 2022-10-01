// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSUMMARIESRESPONSE_P_H
#define QTAWS_GETINSIGHTSUMMARIESRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetInsightSummariesResponse;

class GetInsightSummariesResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetInsightSummariesResponsePrivate(GetInsightSummariesResponse * const q);

    void parseGetInsightSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightSummariesResponse)
    Q_DISABLE_COPY(GetInsightSummariesResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
