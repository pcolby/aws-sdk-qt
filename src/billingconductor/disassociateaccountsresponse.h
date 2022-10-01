// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEACCOUNTSRESPONSE_H
#define QTAWS_DISASSOCIATEACCOUNTSRESPONSE_H

#include "billingconductorresponse.h"
#include "disassociateaccountsrequest.h"

namespace QtAws {
namespace BillingConductor {

class DisassociateAccountsResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT DisassociateAccountsResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    DisassociateAccountsResponse(const DisassociateAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAccountsResponse)
    Q_DISABLE_COPY(DisassociateAccountsResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
