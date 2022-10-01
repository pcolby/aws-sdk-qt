// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHESECURITYGROUPRESPONSE_P_H
#define QTAWS_CREATECACHESECURITYGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheSecurityGroupResponse;

class CreateCacheSecurityGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateCacheSecurityGroupResponsePrivate(CreateCacheSecurityGroupResponse * const q);

    void parseCreateCacheSecurityGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCacheSecurityGroupResponse)
    Q_DISABLE_COPY(CreateCacheSecurityGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
