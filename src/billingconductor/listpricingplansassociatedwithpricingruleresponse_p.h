// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULERESPONSE_P_H
#define QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULERESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansAssociatedWithPricingRuleResponse;

class ListPricingPlansAssociatedWithPricingRuleResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit ListPricingPlansAssociatedWithPricingRuleResponsePrivate(ListPricingPlansAssociatedWithPricingRuleResponse * const q);

    void parseListPricingPlansAssociatedWithPricingRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPricingPlansAssociatedWithPricingRuleResponse)
    Q_DISABLE_COPY(ListPricingPlansAssociatedWithPricingRuleResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
