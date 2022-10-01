// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTFORECASTRESPONSE_P_H
#define QTAWS_GETCOSTFORECASTRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetCostForecastResponse;

class GetCostForecastResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetCostForecastResponsePrivate(GetCostForecastResponse * const q);

    void parseGetCostForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCostForecastResponse)
    Q_DISABLE_COPY(GetCostForecastResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
