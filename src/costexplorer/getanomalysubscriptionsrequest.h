// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYSUBSCRIPTIONSREQUEST_H
#define QTAWS_GETANOMALYSUBSCRIPTIONSREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetAnomalySubscriptionsRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetAnomalySubscriptionsRequest : public CostExplorerRequest {

public:
    GetAnomalySubscriptionsRequest(const GetAnomalySubscriptionsRequest &other);
    GetAnomalySubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAnomalySubscriptionsRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
