// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECUSTOMERREQUEST_H
#define QTAWS_RESOLVECUSTOMERREQUEST_H

#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class ResolveCustomerRequestPrivate;

class QTAWSMARKETPLACEMETERING_EXPORT ResolveCustomerRequest : public MarketplaceMeteringRequest {

public:
    ResolveCustomerRequest(const ResolveCustomerRequest &other);
    ResolveCustomerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveCustomerRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
