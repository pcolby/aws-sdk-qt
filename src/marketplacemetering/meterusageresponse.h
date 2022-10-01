// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_METERUSAGERESPONSE_H
#define QTAWS_METERUSAGERESPONSE_H

#include "marketplacemeteringresponse.h"
#include "meterusagerequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MeterUsageResponsePrivate;

class QTAWSMARKETPLACEMETERING_EXPORT MeterUsageResponse : public MarketplaceMeteringResponse {
    Q_OBJECT

public:
    MeterUsageResponse(const MeterUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MeterUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MeterUsageResponse)
    Q_DISABLE_COPY(MeterUsageResponse)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
