// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRIGHTSIZINGRECOMMENDATIONREQUEST_P_H
#define QTAWS_GETRIGHTSIZINGRECOMMENDATIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getrightsizingrecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetRightsizingRecommendationRequest;

class GetRightsizingRecommendationRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetRightsizingRecommendationRequestPrivate(const CostExplorerRequest::Action action,
                                   GetRightsizingRecommendationRequest * const q);
    GetRightsizingRecommendationRequestPrivate(const GetRightsizingRecommendationRequestPrivate &other,
                                   GetRightsizingRecommendationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRightsizingRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
