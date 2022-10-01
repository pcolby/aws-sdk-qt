// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONRESPONSE_P_H
#define QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansPurchaseRecommendationResponse;

class GetSavingsPlansPurchaseRecommendationResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetSavingsPlansPurchaseRecommendationResponsePrivate(GetSavingsPlansPurchaseRecommendationResponse * const q);

    void parseGetSavingsPlansPurchaseRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansPurchaseRecommendationResponse)
    Q_DISABLE_COPY(GetSavingsPlansPurchaseRecommendationResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
