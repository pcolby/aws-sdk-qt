// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONREQUEST_P_H
#define QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getreservationpurchaserecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationPurchaseRecommendationRequest;

class GetReservationPurchaseRecommendationRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetReservationPurchaseRecommendationRequestPrivate(const CostExplorerRequest::Action action,
                                   GetReservationPurchaseRecommendationRequest * const q);
    GetReservationPurchaseRecommendationRequestPrivate(const GetReservationPurchaseRecommendationRequestPrivate &other,
                                   GetReservationPurchaseRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetReservationPurchaseRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
