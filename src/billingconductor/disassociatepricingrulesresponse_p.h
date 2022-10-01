// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRICINGRULESRESPONSE_P_H
#define QTAWS_DISASSOCIATEPRICINGRULESRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DisassociatePricingRulesResponse;

class DisassociatePricingRulesResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DisassociatePricingRulesResponsePrivate(DisassociatePricingRulesResponse * const q);

    void parseDisassociatePricingRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePricingRulesResponse)
    Q_DISABLE_COPY(DisassociatePricingRulesResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
