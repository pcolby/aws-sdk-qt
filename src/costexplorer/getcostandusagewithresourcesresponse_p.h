// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEWITHRESOURCESRESPONSE_P_H
#define QTAWS_GETCOSTANDUSAGEWITHRESOURCESRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageWithResourcesResponse;

class GetCostAndUsageWithResourcesResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetCostAndUsageWithResourcesResponsePrivate(GetCostAndUsageWithResourcesResponse * const q);

    void parseGetCostAndUsageWithResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCostAndUsageWithResourcesResponse)
    Q_DISABLE_COPY(GetCostAndUsageWithResourcesResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
