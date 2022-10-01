// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEWITHRESOURCESREQUEST_P_H
#define QTAWS_GETCOSTANDUSAGEWITHRESOURCESREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getcostandusagewithresourcesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageWithResourcesRequest;

class GetCostAndUsageWithResourcesRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetCostAndUsageWithResourcesRequestPrivate(const CostExplorerRequest::Action action,
                                   GetCostAndUsageWithResourcesRequest * const q);
    GetCostAndUsageWithResourcesRequestPrivate(const GetCostAndUsageWithResourcesRequestPrivate &other,
                                   GetCostAndUsageWithResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostAndUsageWithResourcesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
