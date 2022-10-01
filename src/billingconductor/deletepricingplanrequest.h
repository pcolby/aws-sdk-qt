// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGPLANREQUEST_H
#define QTAWS_DELETEPRICINGPLANREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingPlanRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeletePricingPlanRequest : public BillingConductorRequest {

public:
    DeletePricingPlanRequest(const DeletePricingPlanRequest &other);
    DeletePricingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePricingPlanRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
