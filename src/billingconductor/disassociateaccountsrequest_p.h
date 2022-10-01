// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEACCOUNTSREQUEST_P_H
#define QTAWS_DISASSOCIATEACCOUNTSREQUEST_P_H

#include "billingconductorrequest_p.h"
#include "disassociateaccountsrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociateAccountsRequest;

class DisassociateAccountsRequestPrivate : public BillingConductorRequestPrivate {

public:
    DisassociateAccountsRequestPrivate(const BillingConductorRequest::Action action,
                                   DisassociateAccountsRequest * const q);
    DisassociateAccountsRequestPrivate(const DisassociateAccountsRequestPrivate &other,
                                   DisassociateAccountsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateAccountsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
