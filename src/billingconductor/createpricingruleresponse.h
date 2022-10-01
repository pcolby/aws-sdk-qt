// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRICINGRULERESPONSE_H
#define QTAWS_CREATEPRICINGRULERESPONSE_H

#include "billingconductorresponse.h"
#include "createpricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class CreatePricingRuleResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT CreatePricingRuleResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    CreatePricingRuleResponse(const CreatePricingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePricingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePricingRuleResponse)
    Q_DISABLE_COPY(CreatePricingRuleResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
