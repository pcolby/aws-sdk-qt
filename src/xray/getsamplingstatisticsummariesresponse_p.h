// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGSTATISTICSUMMARIESRESPONSE_P_H
#define QTAWS_GETSAMPLINGSTATISTICSUMMARIESRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetSamplingStatisticSummariesResponse;

class GetSamplingStatisticSummariesResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetSamplingStatisticSummariesResponsePrivate(GetSamplingStatisticSummariesResponse * const q);

    void parseGetSamplingStatisticSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSamplingStatisticSummariesResponse)
    Q_DISABLE_COPY(GetSamplingStatisticSummariesResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
