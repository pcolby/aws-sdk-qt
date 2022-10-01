// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITLEMENTSREQUEST_H
#define QTAWS_GETENTITLEMENTSREQUEST_H

#include "marketplaceentitlementrequest.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class GetEntitlementsRequestPrivate;

class QTAWSMARKETPLACEENTITLEMENT_EXPORT GetEntitlementsRequest : public MarketplaceEntitlementRequest {

public:
    GetEntitlementsRequest(const GetEntitlementsRequest &other);
    GetEntitlementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEntitlementsRequest)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
