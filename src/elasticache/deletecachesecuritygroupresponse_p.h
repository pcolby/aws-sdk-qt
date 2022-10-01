// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHESECURITYGROUPRESPONSE_P_H
#define QTAWS_DELETECACHESECURITYGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheSecurityGroupResponse;

class DeleteCacheSecurityGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteCacheSecurityGroupResponsePrivate(DeleteCacheSecurityGroupResponse * const q);

    void parseDeleteCacheSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCacheSecurityGroupResponse)
    Q_DISABLE_COPY(DeleteCacheSecurityGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
