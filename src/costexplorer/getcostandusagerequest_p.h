// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEREQUEST_P_H
#define QTAWS_GETCOSTANDUSAGEREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getcostandusagerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageRequest;

class GetCostAndUsageRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetCostAndUsageRequestPrivate(const CostExplorerRequest::Action action,
                                   GetCostAndUsageRequest * const q);
    GetCostAndUsageRequestPrivate(const GetCostAndUsageRequestPrivate &other,
                                   GetCostAndUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostAndUsageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
