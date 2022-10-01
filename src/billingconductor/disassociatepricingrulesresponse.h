// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRICINGRULESRESPONSE_H
#define QTAWS_DISASSOCIATEPRICINGRULESRESPONSE_H

#include "billingconductorresponse.h"
#include "disassociatepricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociatePricingRulesResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DisassociatePricingRulesResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DisassociatePricingRulesResponse(const DisassociatePricingRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePricingRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePricingRulesResponse)
    Q_DISABLE_COPY(DisassociatePricingRulesResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
