// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONREQUEST_H
#define QTAWS_GETSAVINGSPLANSPURCHASERECOMMENDATIONREQUEST_H

#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class GetSavingsPlansPurchaseRecommendationRequestPrivate;

class QTAWSCOSTEXPLORER_EXPORT GetSavingsPlansPurchaseRecommendationRequest : public CostExplorerRequest {

public:
    GetSavingsPlansPurchaseRecommendationRequest(const GetSavingsPlansPurchaseRecommendationRequest &other);
    GetSavingsPlansPurchaseRecommendationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSavingsPlansPurchaseRecommendationRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
