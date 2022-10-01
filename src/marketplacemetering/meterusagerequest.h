// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_METERUSAGEREQUEST_H
#define QTAWS_METERUSAGEREQUEST_H

#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MeterUsageRequestPrivate;

class QTAWSMARKETPLACEMETERING_EXPORT MeterUsageRequest : public MarketplaceMeteringRequest {

public:
    MeterUsageRequest(const MeterUsageRequest &other);
    MeterUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MeterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
