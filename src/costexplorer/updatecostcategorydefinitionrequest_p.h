// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTCATEGORYDEFINITIONREQUEST_P_H
#define QTAWS_UPDATECOSTCATEGORYDEFINITIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "updatecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostCategoryDefinitionRequest;

class UpdateCostCategoryDefinitionRequestPrivate : public CostExplorerRequestPrivate {

public:
    UpdateCostCategoryDefinitionRequestPrivate(const CostExplorerRequest::Action action,
                                   UpdateCostCategoryDefinitionRequest * const q);
    UpdateCostCategoryDefinitionRequestPrivate(const UpdateCostCategoryDefinitionRequestPrivate &other,
                                   UpdateCostCategoryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
