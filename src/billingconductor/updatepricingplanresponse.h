// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGPLANRESPONSE_H
#define QTAWS_UPDATEPRICINGPLANRESPONSE_H

#include "billingconductorresponse.h"
#include "updatepricingplanrequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingPlanResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT UpdatePricingPlanResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    UpdatePricingPlanResponse(const UpdatePricingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePricingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePricingPlanResponse)
    Q_DISABLE_COPY(UpdatePricingPlanResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
