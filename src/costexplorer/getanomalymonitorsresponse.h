// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYMONITORSRESPONSE_H
#define QTAWS_GETANOMALYMONITORSRESPONSE_H

#include "costexplorerresponse.h"
#include "getanomalymonitorsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalyMonitorsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetAnomalyMonitorsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetAnomalyMonitorsResponse(const GetAnomalyMonitorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnomalyMonitorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalyMonitorsResponse)
    Q_DISABLE_COPY(GetAnomalyMonitorsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
