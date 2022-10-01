// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONRESPONSE_H
#define QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONRESPONSE_H

#include "costexplorerresponse.h"
#include "getsavingsplanspurchaserecommendationrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansPurchaseRecommendationResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansPurchaseRecommendationResponse : public CostExplorerResponse {
    Q_OBJECT

public:
    GetSavingsPlansPurchaseRecommendationResponse(const GetSavingsPlansPurchaseRecommendationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSavingsPlansPurchaseRecommendationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansPurchaseRecommendationResponse)
    Q_DISABLE_COPY(GetSavingsPlansPurchaseRecommendationResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
