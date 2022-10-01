// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYMONITORSREQUEST_P_H
#define QTAWS_GETANOMALYMONITORSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getanomalymonitorsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalyMonitorsRequest;

class GetAnomalyMonitorsRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetAnomalyMonitorsRequestPrivate(const CostExplorerRequest::Action action,
                                   GetAnomalyMonitorsRequest * const q);
    GetAnomalyMonitorsRequestPrivate(const GetAnomalyMonitorsRequestPrivate &other,
                                   GetAnomalyMonitorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnomalyMonitorsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
