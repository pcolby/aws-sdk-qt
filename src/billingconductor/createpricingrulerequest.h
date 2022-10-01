// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGRULEREQUEST_H
#define QTAWS_CREATEPRICINGRULEREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingRuleRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreatePricingRuleRequest : public BillingConductorRequest {

public:
    CreatePricingRuleRequest(const CreatePricingRuleRequest &other);
    CreatePricingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
