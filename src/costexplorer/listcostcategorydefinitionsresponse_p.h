// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOSTCATEGORYDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTCOSTCATEGORYDEFINITIONSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class ListCostCategoryDefinitionsResponse;

class ListCostCategoryDefinitionsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit ListCostCategoryDefinitionsResponsePrivate(ListCostCategoryDefinitionsResponse * const q);

    void parseListCostCategoryDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCostCategoryDefinitionsResponse)
    Q_DISABLE_COPY(ListCostCategoryDefinitionsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
