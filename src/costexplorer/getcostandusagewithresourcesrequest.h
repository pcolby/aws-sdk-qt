// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEWITHRESOURCESREQUEST_H
#define QTAWS_GETCOSTANDUSAGEWITHRESOURCESREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageWithResourcesRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostAndUsageWithResourcesRequest : public CostExplorerRequest {

public:
    GetCostAndUsageWithResourcesRequest(const GetCostAndUsageWithResourcesRequest &other);
    GetCostAndUsageWithResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostAndUsageWithResourcesRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
