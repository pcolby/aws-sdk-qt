// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBANDWIDTHRATELIMITRESPONSE_P_H
#define QTAWS_DELETEBANDWIDTHRATELIMITRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DeleteBandwidthRateLimitResponse;

class DeleteBandwidthRateLimitResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DeleteBandwidthRateLimitResponsePrivate(DeleteBandwidthRateLimitResponse * const q);

    void parseDeleteBandwidthRateLimitResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBandwidthRateLimitResponse)
    Q_DISABLE_COPY(DeleteBandwidthRateLimitResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
