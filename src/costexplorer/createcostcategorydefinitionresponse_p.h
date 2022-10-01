// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOSTCATEGORYDEFINITIONRESPONSE_P_H
#define QTAWS_CREATECOSTCATEGORYDEFINITIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class CreateCostCategoryDefinitionResponse;

class CreateCostCategoryDefinitionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit CreateCostCategoryDefinitionResponsePrivate(CreateCostCategoryDefinitionResponse * const q);

    void parseCreateCostCategoryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(CreateCostCategoryDefinitionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
