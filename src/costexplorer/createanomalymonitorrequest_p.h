// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYMONITORREQUEST_P_H
#define QTAWS_CREATEANOMALYMONITORREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "createanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalyMonitorRequest;

class CreateAnomalyMonitorRequestPrivate : public CostExplorerRequestPrivate {

public:
    CreateAnomalyMonitorRequestPrivate(const CostExplorerRequest::Action action,
                                   CreateAnomalyMonitorRequest * const q);
    CreateAnomalyMonitorRequestPrivate(const CreateAnomalyMonitorRequestPrivate &other,
                                   CreateAnomalyMonitorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAnomalyMonitorRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
