// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBANDWIDTHRATELIMITRESPONSE_H
#define QTAWS_DELETEBANDWIDTHRATELIMITRESPONSE_H

#include "storagegatewayresponse.h"
#include "deletebandwidthratelimitrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteBandwidthRateLimitResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteBandwidthRateLimitResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteBandwidthRateLimitResponse(const DeleteBandwidthRateLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBandwidthRateLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBandwidthRateLimitResponse)
    Q_DISABLE_COPY(DeleteBandwidthRateLimitResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
