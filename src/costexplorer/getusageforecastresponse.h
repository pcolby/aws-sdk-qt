// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEFORECASTRESPONSE_H
#define QTAWS_GETUSAGEFORECASTRESPONSE_H

#include "costexplorerresponse.h"
#include "getusageforecastrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetUsageForecastResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetUsageForecastResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetUsageForecastResponse(const GetUsageForecastRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsageForecastRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageForecastResponse)
    Q_DISABLE_COPY(GetUsageForecastResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
