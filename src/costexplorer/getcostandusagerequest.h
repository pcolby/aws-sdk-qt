// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOSTANDUSAGEREQUEST_H
#define QTAWS_GETCOSTANDUSAGEREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetCostAndUsageRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetCostAndUsageRequest : public CostExplorerRequest {

public:
    GetCostAndUsageRequest(const GetCostAndUsageRequest &other);
    GetCostAndUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCostAndUsageRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
