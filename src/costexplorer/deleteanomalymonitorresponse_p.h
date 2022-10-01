// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYMONITORRESPONSE_P_H
#define QTAWS_DELETEANOMALYMONITORRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalyMonitorResponse;

class DeleteAnomalyMonitorResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit DeleteAnomalyMonitorResponsePrivate(DeleteAnomalyMonitorResponse * const q);

    void parseDeleteAnomalyMonitorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalyMonitorResponse)
    Q_DISABLE_COPY(DeleteAnomalyMonitorResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
