// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCACHERESPONSE_P_H
#define QTAWS_ADDCACHERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class AddCacheResponse;

class AddCacheResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit AddCacheResponsePrivate(AddCacheResponse * const q);

    void parseAddCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddCacheResponse)
    Q_DISABLE_COPY(AddCacheResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
