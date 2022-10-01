// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYMONITORRESPONSE_H
#define QTAWS_CREATEANOMALYMONITORRESPONSE_H

#include "costexplorerresponse.h"
#include "createanomalymonitorrequest.h"

namespace QtAws {
namespace CostExplorer {

class CreateAnomalyMonitorResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT CreateAnomalyMonitorResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    CreateAnomalyMonitorResponse(const CreateAnomalyMonitorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAnomalyMonitorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAnomalyMonitorResponse)
    Q_DISABLE_COPY(CreateAnomalyMonitorResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
