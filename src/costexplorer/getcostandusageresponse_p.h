// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGERESPONSE_P_H
#define QTAWS_GETCOSTANDUSAGERESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageResponse;

class GetCostAndUsageResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetCostAndUsageResponsePrivate(GetCostAndUsageResponse * const q);

    void parseGetCostAndUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCostAndUsageResponse)
    Q_DISABLE_COPY(GetCostAndUsageResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
