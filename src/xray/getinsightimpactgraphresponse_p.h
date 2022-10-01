// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTIMPACTGRAPHRESPONSE_P_H
#define QTAWS_GETINSIGHTIMPACTGRAPHRESPONSE_P_H

#include "xrayresponse_p.h"

namespace QtAws {
namespace XRay {

class GetInsightImpactGraphResponse;

class GetInsightImpactGraphResponsePrivate : public XRayResponsePrivate {

public:

    explicit GetInsightImpactGraphResponsePrivate(GetInsightImpactGraphResponse * const q);

    void parseGetInsightImpactGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightImpactGraphResponse)
    Q_DISABLE_COPY(GetInsightImpactGraphResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
