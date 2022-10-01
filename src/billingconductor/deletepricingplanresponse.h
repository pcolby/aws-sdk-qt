// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGPLANRESPONSE_H
#define QTAWS_DELETEPRICINGPLANRESPONSE_H

#include "billingconductorresponse.h"
#include "deletepricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingPlanResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeletePricingPlanResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DeletePricingPlanResponse(const DeletePricingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePricingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePricingPlanResponse)
    Q_DISABLE_COPY(DeletePricingPlanResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
