// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECUSTOMERRESPONSE_H
#define QTAWS_RESOLVECUSTOMERRESPONSE_H

#include "marketplacemeteringresponse.h"
#include "resolvecustomerrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class ResolveCustomerResponsePrivate;

class QTAWSMARKETPLACEMETERING_EXPORT ResolveCustomerResponse : public MarketplaceMeteringResponse {
    Q_OBJECT

public:
    ResolveCustomerResponse(const ResolveCustomerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveCustomerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveCustomerResponse)
    Q_DISABLE_COPY(ResolveCustomerResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
