// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITRESPONSE_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITRESPONSE_H

#include "storagegatewayresponse.h"
#include "describebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeBandwidthRateLimitResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeBandwidthRateLimitResponse(const DescribeBandwidthRateLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBandwidthRateLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBandwidthRateLimitResponse)
    Q_DISABLE_COPY(DescribeBandwidthRateLimitResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
