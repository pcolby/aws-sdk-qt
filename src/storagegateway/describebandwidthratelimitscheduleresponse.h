// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULERESPONSE_H
#define QTAWS_DESCRIBEBANDWIDTHRATELIMITSCHEDULERESPONSE_H

#include "storagegatewayresponse.h"
#include "describebandwidthratelimitschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeBandwidthRateLimitScheduleResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeBandwidthRateLimitScheduleResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DescribeBandwidthRateLimitScheduleResponse(const DescribeBandwidthRateLimitScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBandwidthRateLimitScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBandwidthRateLimitScheduleResponse)
    Q_DISABLE_COPY(DescribeBandwidthRateLimitScheduleResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
