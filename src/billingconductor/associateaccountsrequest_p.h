// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEACCOUNTSREQUEST_P_H
#define QTAWS_ASSOCIATEACCOUNTSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "associateaccountsrequest.h"

namespace QtAws {
namespace BillingConductor {

class AssociateAccountsRequest;

class AssociateAccountsRequestPrivate : public BillingConductorRequestPrivate {

public:
    AssociateAccountsRequestPrivate(const BillingConductorRequest::Action action,
                                   AssociateAccountsRequest * const q);
    AssociateAccountsRequestPrivate(const AssociateAccountsRequestPrivate &other,
                                   AssociateAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateAccountsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
