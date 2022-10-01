// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGPLANREQUEST_H
#define QTAWS_CREATEPRICINGPLANREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingPlanRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreatePricingPlanRequest : public BillingConductorRequest {

public:
    CreatePricingPlanRequest(const CreatePricingPlanRequest &other);
    CreatePricingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
