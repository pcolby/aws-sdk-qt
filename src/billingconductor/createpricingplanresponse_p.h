// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGPLANRESPONSE_P_H
#define QTAWS_CREATEPRICINGPLANRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingPlanResponse;

class CreatePricingPlanResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit CreatePricingPlanResponsePrivate(CreatePricingPlanResponse * const q);

    void parseCreatePricingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePricingPlanResponse)
    Q_DISABLE_COPY(CreatePricingPlanResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
