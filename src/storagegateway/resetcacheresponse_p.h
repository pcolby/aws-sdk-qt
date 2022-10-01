// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHERESPONSE_P_H
#define QTAWS_RESETCACHERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class ResetCacheResponse;

class ResetCacheResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit ResetCacheResponsePrivate(ResetCacheResponse * const q);

    void parseResetCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetCacheResponse)
    Q_DISABLE_COPY(ResetCacheResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
