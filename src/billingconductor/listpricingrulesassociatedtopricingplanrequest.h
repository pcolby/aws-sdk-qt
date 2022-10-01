// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANREQUEST_H
#define QTAWS_LISTPRICINGRULESASSOCIATEDTOPRICINGPLANREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesAssociatedToPricingPlanRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingRulesAssociatedToPricingPlanRequest : public BillingConductorRequest {

public:
    ListPricingRulesAssociatedToPricingPlanRequest(const ListPricingRulesAssociatedToPricingPlanRequest &other);
    ListPricingRulesAssociatedToPricingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingRulesAssociatedToPricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
