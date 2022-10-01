// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGPLANRESPONSE_H
#define QTAWS_CREATEPRICINGPLANRESPONSE_H

#include "billingconductorresponse.h"
#include "createpricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingPlanResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreatePricingPlanResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    CreatePricingPlanResponse(const CreatePricingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePricingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePricingPlanResponse)
    Q_DISABLE_COPY(CreatePricingPlanResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
