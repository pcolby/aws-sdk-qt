// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRICINGRULESRESPONSE_H
#define QTAWS_ASSOCIATEPRICINGRULESRESPONSE_H

#include "billingconductorresponse.h"
#include "associatepricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class AssociatePricingRulesResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT AssociatePricingRulesResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    AssociatePricingRulesResponse(const AssociatePricingRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePricingRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePricingRulesResponse)
    Q_DISABLE_COPY(AssociatePricingRulesResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
