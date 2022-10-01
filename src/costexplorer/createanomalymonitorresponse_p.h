// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYMONITORRESPONSE_P_H
#define QTAWS_CREATEANOMALYMONITORRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalyMonitorResponse;

class CreateAnomalyMonitorResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit CreateAnomalyMonitorResponsePrivate(CreateAnomalyMonitorResponse * const q);

    void parseCreateAnomalyMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAnomalyMonitorResponse)
    Q_DISABLE_COPY(CreateAnomalyMonitorResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
