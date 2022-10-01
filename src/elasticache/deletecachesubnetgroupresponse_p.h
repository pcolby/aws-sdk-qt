// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETECACHESUBNETGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSubnetGroupResponse;

class DeleteCacheSubnetGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteCacheSubnetGroupResponsePrivate(DeleteCacheSubnetGroupResponse * const q);

    void parseDeleteCacheSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCacheSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteCacheSubnetGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
