// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEACCOUNTSRESPONSE_H
#define QTAWS_ASSOCIATEACCOUNTSRESPONSE_H

#include "billingconductorresponse.h"
#include "associateaccountsrequest.h"

namespace QtAws {
namespace BillingConductor {

class AssociateAccountsResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT AssociateAccountsResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    AssociateAccountsResponse(const AssociateAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAccountsResponse)
    Q_DISABLE_COPY(AssociateAccountsResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
