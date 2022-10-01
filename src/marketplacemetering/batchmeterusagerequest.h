// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMETERUSAGEREQUEST_H
#define QTAWS_BATCHMETERUSAGEREQUEST_H

#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class BatchMeterUsageRequestPrivate;

class QTAWSMARKETPLACEMETERING_EXPORT BatchMeterUsageRequest : public MarketplaceMeteringRequest {

public:
    BatchMeterUsageRequest(const BatchMeterUsageRequest &other);
    BatchMeterUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchMeterUsageRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
