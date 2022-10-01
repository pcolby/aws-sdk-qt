// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGPLANRESPONSE_P_H
#define QTAWS_DELETEPRICINGPLANRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingPlanResponse;

class DeletePricingPlanResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DeletePricingPlanResponsePrivate(DeletePricingPlanResponse * const q);

    void parseDeletePricingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePricingPlanResponse)
    Q_DISABLE_COPY(DeletePricingPlanResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
