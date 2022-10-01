// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGERESPONSE_H
#define QTAWS_GETCOSTANDUSAGERESPONSE_H

#include "costexplorerresponse.h"
#include "getcostandusagerequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostAndUsageResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetCostAndUsageResponse(const GetCostAndUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCostAndUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostAndUsageResponse)
    Q_DISABLE_COPY(GetCostAndUsageResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
