// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTFORECASTRESPONSE_H
#define QTAWS_GETCOSTFORECASTRESPONSE_H

#include "costexplorerresponse.h"
#include "getcostforecastrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostForecastResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostForecastResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetCostForecastResponse(const GetCostForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCostForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostForecastResponse)
    Q_DISABLE_COPY(GetCostForecastResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
