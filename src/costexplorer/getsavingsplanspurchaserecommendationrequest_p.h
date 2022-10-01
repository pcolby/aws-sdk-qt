// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONREQUEST_P_H
#define QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getsavingsplanspurchaserecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansPurchaseRecommendationRequest;

class GetSavingsPlansPurchaseRecommendationRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetSavingsPlansPurchaseRecommendationRequestPrivate(const CostExplorerRequest::Action action,
                                   GetSavingsPlansPurchaseRecommendationRequest * const q);
    GetSavingsPlansPurchaseRecommendationRequestPrivate(const GetSavingsPlansPurchaseRecommendationRequestPrivate &other,
                                   GetSavingsPlansPurchaseRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSavingsPlansPurchaseRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
