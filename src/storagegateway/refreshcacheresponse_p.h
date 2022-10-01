// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHCACHERESPONSE_P_H
#define QTAWS_REFRESHCACHERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class RefreshCacheResponse;

class RefreshCacheResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit RefreshCacheResponsePrivate(RefreshCacheResponse * const q);

    void parseRefreshCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RefreshCacheResponse)
    Q_DISABLE_COPY(RefreshCacheResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
