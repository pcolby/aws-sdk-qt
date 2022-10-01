// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGRULEREQUEST_H
#define QTAWS_UPDATEPRICINGRULEREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingRuleRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT UpdatePricingRuleRequest : public BillingConductorRequest {

public:
    UpdatePricingRuleRequest(const UpdatePricingRuleRequest &other);
    UpdatePricingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
