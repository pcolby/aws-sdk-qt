// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEWITHRESOURCESRESPONSE_H
#define QTAWS_GETCOSTANDUSAGEWITHRESOURCESRESPONSE_H

#include "costexplorerresponse.h"
#include "getcostandusagewithresourcesrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageWithResourcesResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostAndUsageWithResourcesResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetCostAndUsageWithResourcesResponse(const GetCostAndUsageWithResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCostAndUsageWithResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostAndUsageWithResourcesResponse)
    Q_DISABLE_COPY(GetCostAndUsageWithResourcesResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
