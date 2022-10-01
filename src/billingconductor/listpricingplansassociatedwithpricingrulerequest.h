// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULEREQUEST_H
#define QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULEREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansAssociatedWithPricingRuleRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingPlansAssociatedWithPricingRuleRequest : public BillingConductorRequest {

public:
    ListPricingPlansAssociatedWithPricingRuleRequest(const ListPricingPlansAssociatedWithPricingRuleRequest &other);
    ListPricingPlansAssociatedWithPricingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingPlansAssociatedWithPricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
