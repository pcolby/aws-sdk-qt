// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONREQUEST_H
#define QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationPurchaseRecommendationRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationPurchaseRecommendationRequest : public CostExplorerRequest {

public:
    GetReservationPurchaseRecommendationRequest(const GetReservationPurchaseRecommendationRequest &other);
    GetReservationPurchaseRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationPurchaseRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
