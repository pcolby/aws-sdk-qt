// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTCATEGORIESRESPONSE_P_H
#define QTAWS_GETCOSTCATEGORIESRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetCostCategoriesResponse;

class GetCostCategoriesResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetCostCategoriesResponsePrivate(GetCostCategoriesResponse * const q);

    void parseGetCostCategoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCostCategoriesResponse)
    Q_DISABLE_COPY(GetCostCategoriesResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
