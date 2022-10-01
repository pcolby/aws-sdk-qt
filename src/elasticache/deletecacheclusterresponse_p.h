// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHECLUSTERRESPONSE_P_H
#define QTAWS_DELETECACHECLUSTERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheClusterResponse;

class DeleteCacheClusterResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteCacheClusterResponsePrivate(DeleteCacheClusterResponse * const q);

    void parseDeleteCacheClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCacheClusterResponse)
    Q_DISABLE_COPY(DeleteCacheClusterResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
