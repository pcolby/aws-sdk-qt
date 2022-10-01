// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANRESPONSE_H
#define QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANRESPONSE_H

#include "billingconductorresponse.h"
#include "listpricingrulesassociatedtopricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesAssociatedToPricingPlanResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingRulesAssociatedToPricingPlanResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListPricingRulesAssociatedToPricingPlanResponse(const ListPricingRulesAssociatedToPricingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPricingRulesAssociatedToPricingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingRulesAssociatedToPricingPlanResponse)
    Q_DISABLE_COPY(ListPricingRulesAssociatedToPricingPlanResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
