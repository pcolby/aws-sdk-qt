// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCACHECLUSTERRESPONSE_P_H
#define QTAWS_REBOOTCACHECLUSTERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class RebootCacheClusterResponse;

class RebootCacheClusterResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit RebootCacheClusterResponsePrivate(RebootCacheClusterResponse * const q);

    void parseRebootCacheClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootCacheClusterResponse)
    Q_DISABLE_COPY(RebootCacheClusterResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
