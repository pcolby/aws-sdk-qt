// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOSTCATEGORYDEFINITIONREQUEST_P_H
#define QTAWS_CREATECOSTCATEGORYDEFINITIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "createcostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateCostCategoryDefinitionRequest;

class CreateCostCategoryDefinitionRequestPrivate : public CostExplorerRequestPrivate {

public:
    CreateCostCategoryDefinitionRequestPrivate(const CostExplorerRequest::Action action,
                                   CreateCostCategoryDefinitionRequest * const q);
    CreateCostCategoryDefinitionRequestPrivate(const CreateCostCategoryDefinitionRequestPrivate &other,
                                   CreateCostCategoryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
