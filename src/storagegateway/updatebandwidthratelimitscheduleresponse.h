// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULERESPONSE_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITSCHEDULERESPONSE_H

#include "storagegatewayresponse.h"
#include "updatebandwidthratelimitschedulerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitScheduleResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateBandwidthRateLimitScheduleResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateBandwidthRateLimitScheduleResponse(const UpdateBandwidthRateLimitScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBandwidthRateLimitScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBandwidthRateLimitScheduleResponse)
    Q_DISABLE_COPY(UpdateBandwidthRateLimitScheduleResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
