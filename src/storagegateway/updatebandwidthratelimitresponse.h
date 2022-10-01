// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBANDWIDTHRATELIMITRESPONSE_H
#define QTAWS_UPDATEBANDWIDTHRATELIMITRESPONSE_H

#include "storagegatewayresponse.h"
#include "updatebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateBandwidthRateLimitResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateBandwidthRateLimitResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateBandwidthRateLimitResponse(const UpdateBandwidthRateLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBandwidthRateLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBandwidthRateLimitResponse)
    Q_DISABLE_COPY(UpdateBandwidthRateLimitResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
