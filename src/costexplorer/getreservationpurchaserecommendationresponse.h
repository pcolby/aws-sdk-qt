// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONRESPONSE_H
#define QTAWS_GETRESERVATIONPURCHASERECOMMENDATIONRESPONSE_H

#include "costexplorerresponse.h"
#include "getreservationpurchaserecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetReservationPurchaseRecommendationResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetReservationPurchaseRecommendationResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetReservationPurchaseRecommendationResponse(const GetReservationPurchaseRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetReservationPurchaseRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReservationPurchaseRecommendationResponse)
    Q_DISABLE_COPY(GetReservationPurchaseRecommendationResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
