// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOSTCATEGORYDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATECOSTCATEGORYDEFINITIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class UpdateCostCategoryDefinitionResponse;

class UpdateCostCategoryDefinitionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit UpdateCostCategoryDefinitionResponsePrivate(UpdateCostCategoryDefinitionResponse * const q);

    void parseUpdateCostCategoryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(UpdateCostCategoryDefinitionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
