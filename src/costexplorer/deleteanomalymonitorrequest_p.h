// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYMONITORREQUEST_P_H
#define QTAWS_DELETEANOMALYMONITORREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "deleteanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalyMonitorRequest;

class DeleteAnomalyMonitorRequestPrivate : public CostExplorerRequestPrivate {

public:
    DeleteAnomalyMonitorRequestPrivate(const CostExplorerRequest::Action action,
                                   DeleteAnomalyMonitorRequest * const q);
    DeleteAnomalyMonitorRequestPrivate(const DeleteAnomalyMonitorRequestPrivate &other,
                                   DeleteAnomalyMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
