// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOSTCATEGORYDEFINITIONRESPONSE_P_H
#define QTAWS_DESCRIBECOSTCATEGORYDEFINITIONRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class DescribeCostCategoryDefinitionResponse;

class DescribeCostCategoryDefinitionResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit DescribeCostCategoryDefinitionResponsePrivate(DescribeCostCategoryDefinitionResponse * const q);

    void parseDescribeCostCategoryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCostCategoryDefinitionResponse)
    Q_DISABLE_COPY(DescribeCostCategoryDefinitionResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
