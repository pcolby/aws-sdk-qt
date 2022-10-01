// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYMONITORRESPONSE_H
#define QTAWS_UPDATEANOMALYMONITORRESPONSE_H

#include "costexplorerresponse.h"
#include "updateanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class UpdateAnomalyMonitorResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT UpdateAnomalyMonitorResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    UpdateAnomalyMonitorResponse(const UpdateAnomalyMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAnomalyMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAnomalyMonitorResponse)
    Q_DISABLE_COPY(UpdateAnomalyMonitorResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
