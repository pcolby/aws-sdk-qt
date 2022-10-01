// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTFORECASTREQUEST_P_H
#define QTAWS_GETCOSTFORECASTREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getcostforecastrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostForecastRequest;

class GetCostForecastRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetCostForecastRequestPrivate(const CostExplorerRequest::Action action,
                                   GetCostForecastRequest * const q);
    GetCostForecastRequestPrivate(const GetCostForecastRequestPrivate &other,
                                   GetCostForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostForecastRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
