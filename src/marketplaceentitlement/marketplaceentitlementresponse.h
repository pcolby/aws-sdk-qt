// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTRESPONSE_H
#define QTAWS_MARKETPLACEENTITLEMENTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmarketplaceentitlementglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementResponsePrivate;

class QTAWSMARKETPLACEENTITLEMENT_EXPORT MarketplaceEntitlementResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    MarketplaceEntitlementResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    MarketplaceEntitlementResponse(MarketplaceEntitlementResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceEntitlementResponse)
    Q_DISABLE_COPY(MarketplaceEntitlementResponse)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
