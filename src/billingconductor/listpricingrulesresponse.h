// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESRESPONSE_H
#define QTAWS_LISTPRICINGRULESRESPONSE_H

#include "billingconductorresponse.h"
#include "listpricingrulesrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingRulesResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListPricingRulesResponse(const ListPricingRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPricingRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingRulesResponse)
    Q_DISABLE_COPY(ListPricingRulesResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
