// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSOCIATIONSRESPONSE_H
#define QTAWS_LISTACCOUNTASSOCIATIONSRESPONSE_H

#include "billingconductorresponse.h"
#include "listaccountassociationsrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListAccountAssociationsResponsePrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListAccountAssociationsResponse : public BillingConductorResponse {
    Q_OBJECT

public:
    ListAccountAssociationsResponse(const ListAccountAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssociationsResponse)
    Q_DISABLE_COPY(ListAccountAssociationsResponse)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
