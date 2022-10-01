// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEFORECASTREQUEST_P_H
#define QTAWS_GETUSAGEFORECASTREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getusageforecastrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetUsageForecastRequest;

class GetUsageForecastRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetUsageForecastRequestPrivate(const CostExplorerRequest::Action action,
                                   GetUsageForecastRequest * const q);
    GetUsageForecastRequestPrivate(const GetUsageForecastRequestPrivate &other,
                                   GetUsageForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsageForecastRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
