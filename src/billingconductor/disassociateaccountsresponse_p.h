// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEACCOUNTSRESPONSE_P_H
#define QTAWS_DISASSOCIATEACCOUNTSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class DisassociateAccountsResponse;

class DisassociateAccountsResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit DisassociateAccountsResponsePrivate(DisassociateAccountsResponse * const q);

    void parseDisassociateAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateAccountsResponse)
    Q_DISABLE_COPY(DisassociateAccountsResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
