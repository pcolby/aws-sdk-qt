// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOSTCATEGORYDEFINITIONREQUEST_P_H
#define QTAWS_DELETECOSTCATEGORYDEFINITIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "deletecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteCostCategoryDefinitionRequest;

class DeleteCostCategoryDefinitionRequestPrivate : public CostExplorerRequestPrivate {

public:
    DeleteCostCategoryDefinitionRequestPrivate(const CostExplorerRequest::Action action,
                                   DeleteCostCategoryDefinitionRequest * const q);
    DeleteCostCategoryDefinitionRequestPrivate(const DeleteCostCategoryDefinitionRequestPrivate &other,
                                   DeleteCostCategoryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
