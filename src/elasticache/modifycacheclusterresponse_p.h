// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHECLUSTERRESPONSE_P_H
#define QTAWS_MODIFYCACHECLUSTERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheClusterResponse;

class ModifyCacheClusterResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyCacheClusterResponsePrivate(ModifyCacheClusterResponse * const q);

    void parseModifyCacheClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCacheClusterResponse)
    Q_DISABLE_COPY(ModifyCacheClusterResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
