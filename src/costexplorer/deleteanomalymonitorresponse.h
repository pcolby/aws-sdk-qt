// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYMONITORRESPONSE_H
#define QTAWS_DELETEANOMALYMONITORRESPONSE_H

#include "costexplorerresponse.h"
#include "deleteanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class DeleteAnomalyMonitorResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT DeleteAnomalyMonitorResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    DeleteAnomalyMonitorResponse(const DeleteAnomalyMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAnomalyMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAnomalyMonitorResponse)
    Q_DISABLE_COPY(DeleteAnomalyMonitorResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
