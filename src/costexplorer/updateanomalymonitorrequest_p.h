// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYMONITORREQUEST_P_H
#define QTAWS_UPDATEANOMALYMONITORREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "updateanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalyMonitorRequest;

class UpdateAnomalyMonitorRequestPrivate : public CostExplorerRequestPrivate {

public:
    UpdateAnomalyMonitorRequestPrivate(const CostExplorerRequest::Action action,
                                   UpdateAnomalyMonitorRequest * const q);
    UpdateAnomalyMonitorRequestPrivate(const UpdateAnomalyMonitorRequestPrivate &other,
                                   UpdateAnomalyMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
