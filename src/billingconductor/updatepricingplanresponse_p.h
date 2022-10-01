// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGPLANRESPONSE_P_H
#define QTAWS_UPDATEPRICINGPLANRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingPlanResponse;

class UpdatePricingPlanResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit UpdatePricingPlanResponsePrivate(UpdatePricingPlanResponse * const q);

    void parseUpdatePricingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePricingPlanResponse)
    Q_DISABLE_COPY(UpdatePricingPlanResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
