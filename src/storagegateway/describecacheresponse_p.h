// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHERESPONSE_P_H
#define QTAWS_DESCRIBECACHERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCacheResponse;

class DescribeCacheResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeCacheResponsePrivate(DescribeCacheResponse * const q);

    void parseDescribeCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCacheResponse)
    Q_DISABLE_COPY(DescribeCacheResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
