// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTALLOCATIONTAGSREQUEST_P_H
#define QTAWS_LISTCOSTALLOCATIONTAGSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "listcostallocationtagsrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostAllocationTagsRequest;

class ListCostAllocationTagsRequestPrivate : public CostExplorerRequestPrivate {

public:
    ListCostAllocationTagsRequestPrivate(const CostExplorerRequest::Action action,
                                   ListCostAllocationTagsRequest * const q);
    ListCostAllocationTagsRequestPrivate(const ListCostAllocationTagsRequestPrivate &other,
                                   ListCostAllocationTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCostAllocationTagsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
