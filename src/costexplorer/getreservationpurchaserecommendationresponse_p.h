// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONRESPONSE_P_H
#define QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationPurchaseRecommendationResponse;

class GetReservationPurchaseRecommendationResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetReservationPurchaseRecommendationResponsePrivate(GetReservationPurchaseRecommendationResponse * const q);

    void parseGetReservationPurchaseRecommendationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetReservationPurchaseRecommendationResponse)
    Q_DISABLE_COPY(GetReservationPurchaseRecommendationResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
