// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHMETERUSAGERESPONSE_H
#define QTAWS_BATCHMETERUSAGERESPONSE_H

#include "marketplacemeteringresponse.h"
#include "batchmeterusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class BatchMeterUsageResponsePrivate;

class QTAWSMARKETPLACEMETERING_EXPORT BatchMeterUsageResponse : public MarketplaceMeteringResponse {
    Q_OBJECT

public:
    BatchMeterUsageResponse(const BatchMeterUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchMeterUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchMeterUsageResponse)
    Q_DISABLE_COPY(BatchMeterUsageResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
