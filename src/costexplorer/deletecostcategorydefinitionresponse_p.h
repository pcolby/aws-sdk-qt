// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOSTCATEGORYDEFINITIONRESPONSE_P_H
#define QTAWS_DELETECOSTCATEGORYDEFINITIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class DeleteCostCategoryDefinitionResponse;

class DeleteCostCategoryDefinitionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit DeleteCostCategoryDefinitionResponsePrivate(DeleteCostCategoryDefinitionResponse * const q);

    void parseDeleteCostCategoryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(DeleteCostCategoryDefinitionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
