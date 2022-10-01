// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEACCOUNTSREQUEST_H
#define QTAWS_DISASSOCIATEACCOUNTSREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociateAccountsRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DisassociateAccountsRequest : public BillingConductorRequest {

public:
    DisassociateAccountsRequest(const DisassociateAccountsRequest &other);
    DisassociateAccountsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAccountsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
