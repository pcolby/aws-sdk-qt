// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITLEMENTSRESPONSE_H
#define QTAWS_GETENTITLEMENTSRESPONSE_H

#include "marketplaceentitlementresponse.h"
#include "getentitlementsrequest.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class GetEntitlementsResponsePrivate;

class QTAWSMARKETPLACEENTITLEMENT_EXPORT GetEntitlementsResponse : public MarketplaceEntitlementResponse {
    Q_OBJECT

public:
    GetEntitlementsResponse(const GetEntitlementsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEntitlementsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntitlementsResponse)
    Q_DISABLE_COPY(GetEntitlementsResponse)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
