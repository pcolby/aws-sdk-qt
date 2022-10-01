// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTCATEGORIESREQUEST_P_H
#define QTAWS_GETCOSTCATEGORIESREQUEST_P_H

#include "costexplorerrequest_p.h"
#include "getcostcategoriesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostCategoriesRequest;

class GetCostCategoriesRequestPrivate : public CostExplorerRequestPrivate {

public:
    GetCostCategoriesRequestPrivate(const CostExplorerRequest::Action action,
                                   GetCostCategoriesRequest * const q);
    GetCostCategoriesRequestPrivate(const GetCostCategoriesRequestPrivate &other,
                                   GetCostCategoriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostCategoriesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
