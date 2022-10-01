// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRIGHTSIZINGRECOMMENDATIONRESPONSE_P_H
#define QTAWS_GETRIGHTSIZINGRECOMMENDATIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetRightsizingRecommendationResponse;

class GetRightsizingRecommendationResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetRightsizingRecommendationResponsePrivate(GetRightsizingRecommendationResponse * const q);

    void parseGetRightsizingRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRightsizingRecommendationResponse)
    Q_DISABLE_COPY(GetRightsizingRecommendationResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
