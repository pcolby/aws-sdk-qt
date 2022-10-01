// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPRICINGRULERESPONSE_H
#define QTAWS_DELETEPRICINGRULERESPONSE_H

#include "billingconductorresponse.h"
#include "deletepricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class DeletePricingRuleResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DeletePricingRuleResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DeletePricingRuleResponse(const DeletePricingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePricingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePricingRuleResponse)
    Q_DISABLE_COPY(DeletePricingRuleResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
