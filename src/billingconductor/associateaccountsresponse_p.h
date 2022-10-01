// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEACCOUNTSRESPONSE_P_H
#define QTAWS_ASSOCIATEACCOUNTSRESPONSE_P_H

#include "billingconductorresponse_p.h"

namespace QtAws {
namespace BillingConductor {

class AssociateAccountsResponse;

class AssociateAccountsResponsePrivate : public BillingConductorResponsePrivate {

public:

    explicit AssociateAccountsResponsePrivate(AssociateAccountsResponse * const q);

    void parseAssociateAccountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateAccountsResponse)
    Q_DISABLE_COPY(AssociateAccountsResponsePrivate)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
