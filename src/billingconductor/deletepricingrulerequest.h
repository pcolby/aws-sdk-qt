// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGRULEREQUEST_H
#define QTAWS_DELETEPRICINGRULEREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingRuleRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeletePricingRuleRequest : public BillingConductorRequest {

public:
    DeletePricingRuleRequest(const DeletePricingRuleRequest &other);
    DeletePricingRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePricingRuleRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
