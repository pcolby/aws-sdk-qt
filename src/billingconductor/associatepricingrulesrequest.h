// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPRICINGRULESREQUEST_H
#define QTAWS_ASSOCIATEPRICINGRULESREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class AssociatePricingRulesRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT AssociatePricingRulesRequest : public BillingConductorRequest {

public:
    AssociatePricingRulesRequest(const AssociatePricingRulesRequest &other);
    AssociatePricingRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
