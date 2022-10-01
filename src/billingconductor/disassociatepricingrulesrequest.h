// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRICINGRULESREQUEST_H
#define QTAWS_DISASSOCIATEPRICINGRULESREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociatePricingRulesRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DisassociatePricingRulesRequest : public BillingConductorRequest {

public:
    DisassociatePricingRulesRequest(const DisassociatePricingRulesRequest &other);
    DisassociatePricingRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
