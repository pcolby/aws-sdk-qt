// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECACHESECURITYGROUPINGRESSRESPONSE_P_H
#define QTAWS_REVOKECACHESECURITYGROUPINGRESSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class RevokeCacheSecurityGroupIngressResponse;

class RevokeCacheSecurityGroupIngressResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit RevokeCacheSecurityGroupIngressResponsePrivate(RevokeCacheSecurityGroupIngressResponse * const q);

    void parseRevokeCacheSecurityGroupIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RevokeCacheSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeCacheSecurityGroupIngressResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
