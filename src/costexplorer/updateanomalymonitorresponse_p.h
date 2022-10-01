// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYMONITORRESPONSE_P_H
#define QTAWS_UPDATEANOMALYMONITORRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalyMonitorResponse;

class UpdateAnomalyMonitorResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit UpdateAnomalyMonitorResponsePrivate(UpdateAnomalyMonitorResponse * const q);

    void parseUpdateAnomalyMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalyMonitorResponse)
    Q_DISABLE_COPY(UpdateAnomalyMonitorResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
