// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOSTCATEGORYDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBECOSTCATEGORYDEFINITIONREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "describecostcategorydefinitionrequest.h"

namespace QtAws {
namespace CostExplorer {

class DescribeCostCategoryDefinitionRequest;

class DescribeCostCategoryDefinitionRequestPrivate : public CostExplorerRequestPrivate {

public:
    DescribeCostCategoryDefinitionRequestPrivate(const CostExplorerRequest::Action action,
                                   DescribeCostCategoryDefinitionRequest * const q);
    DescribeCostCategoryDefinitionRequestPrivate(const DescribeCostCategoryDefinitionRequestPrivate &other,
                                   DescribeCostCategoryDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCostCategoryDefinitionRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
