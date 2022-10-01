// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHECLUSTERRESPONSE_P_H
#define QTAWS_CREATECACHECLUSTERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheClusterResponse;

class CreateCacheClusterResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateCacheClusterResponsePrivate(CreateCacheClusterResponse * const q);

    void parseCreateCacheClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCacheClusterResponse)
    Q_DISABLE_COPY(CreateCacheClusterResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
