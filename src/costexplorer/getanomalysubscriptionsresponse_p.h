// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_GETANOMALYSUBSCRIPTIONSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalySubscriptionsResponse;

class GetAnomalySubscriptionsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetAnomalySubscriptionsResponsePrivate(GetAnomalySubscriptionsResponse * const q);

    void parseGetAnomalySubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnomalySubscriptionsResponse)
    Q_DISABLE_COPY(GetAnomalySubscriptionsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
