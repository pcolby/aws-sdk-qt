// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTCATEGORYDEFINITIONSREQUEST_P_H
#define QTAWS_LISTCOSTCATEGORYDEFINITIONSREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "listcostcategorydefinitionsrequest.h"

namespace QtAws {
namespace CostExplorer {

class ListCostCategoryDefinitionsRequest;

class ListCostCategoryDefinitionsRequestPrivate : public CostExplorerRequestPrivate {

public:
    ListCostCategoryDefinitionsRequestPrivate(const CostExplorerRequest::Action action,
                                   ListCostCategoryDefinitionsRequest * const q);
    ListCostCategoryDefinitionsRequestPrivate(const ListCostCategoryDefinitionsRequestPrivate &other,
                                   ListCostCategoryDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCostCategoryDefinitionsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
