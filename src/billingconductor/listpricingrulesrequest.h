// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPRICINGRULESREQUEST_H
#define QTAWS_LISTPRICINGRULESREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListPricingRulesRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListPricingRulesRequest : public BillingConductorRequest {

public:
    ListPricingRulesRequest(const ListPricingRulesRequest &other);
    ListPricingRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPricingRulesRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
