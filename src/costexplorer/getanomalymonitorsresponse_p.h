// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYMONITORSRESPONSE_P_H
#define QTAWS_GETANOMALYMONITORSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalyMonitorsResponse;

class GetAnomalyMonitorsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetAnomalyMonitorsResponsePrivate(GetAnomalyMonitorsResponse * const q);

    void parseGetAnomalyMonitorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnomalyMonitorsResponse)
    Q_DISABLE_COPY(GetAnomalyMonitorsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
