// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYSUBSCRIPTIONSRESPONSE_H
#define QTAWS_GETANOMALYSUBSCRIPTIONSRESPONSE_H

#include "costexplorerresponse.h"
#include "getanomalysubscriptionsrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalySubscriptionsResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetAnomalySubscriptionsResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetAnomalySubscriptionsResponse(const GetAnomalySubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAnomalySubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalySubscriptionsResponse)
    Q_DISABLE_COPY(GetAnomalySubscriptionsResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
