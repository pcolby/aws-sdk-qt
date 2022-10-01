// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSREQUEST_P_H
#define QTAWS_UPDATECOSTALLOCATIONTAGSSTATUSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "updatecostallocationtagsstatusrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostAllocationTagsStatusRequest;

class UpdateCostAllocationTagsStatusRequestPrivate : public CostExplorerRequestPrivate {

public:
    UpdateCostAllocationTagsStatusRequestPrivate(const CostExplorerRequest::Action action,
                                   UpdateCostAllocationTagsStatusRequest * const q);
    UpdateCostAllocationTagsStatusRequestPrivate(const UpdateCostAllocationTagsStatusRequestPrivate &other,
                                   UpdateCostAllocationTagsStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCostAllocationTagsStatusRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
