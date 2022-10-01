// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRICINGRULERESPONSE_H
#define QTAWS_UPDATEPRICINGRULERESPONSE_H

#include "billingconductorresponse.h"
#include "updatepricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class UpdatePricingRuleResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT UpdatePricingRuleResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    UpdatePricingRuleResponse(const UpdatePricingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePricingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePricingRuleResponse)
    Q_DISABLE_COPY(UpdatePricingRuleResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
