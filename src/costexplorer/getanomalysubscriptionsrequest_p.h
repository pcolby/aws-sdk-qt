// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYSUBSCRIPTIONSREQUEST_P_H
#define QTAWS_GETANOMALYSUBSCRIPTIONSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getanomalysubscriptionsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalySubscriptionsRequest;

class GetAnomalySubscriptionsRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetAnomalySubscriptionsRequestPrivate(const CostExplorerRequest::Action action,
                                   GetAnomalySubscriptionsRequest * const q);
    GetAnomalySubscriptionsRequestPrivate(const GetAnomalySubscriptionsRequestPrivate &other,
                                   GetAnomalySubscriptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnomalySubscriptionsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
