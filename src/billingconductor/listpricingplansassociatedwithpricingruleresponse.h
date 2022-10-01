// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULERESPONSE_H
#define QTAWS_LISTPRICINGPLANSASSOCIATEDWITHPRICINGRULERESPONSE_H

#include "billingconductorresponse.h"
#include "listpricingplansassociatedwithpricingrulerequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingPlansAssociatedWithPricingRuleResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingPlansAssociatedWithPricingRuleResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListPricingPlansAssociatedWithPricingRuleResponse(const ListPricingPlansAssociatedWithPricingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPricingPlansAssociatedWithPricingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingPlansAssociatedWithPricingRuleResponse)
    Q_DISABLE_COPY(ListPricingPlansAssociatedWithPricingRuleResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
