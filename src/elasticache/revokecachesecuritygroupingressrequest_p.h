// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECACHESECURITYGROUPINGRESSREQUEST_P_H
#define QTAWS_REVOKECACHESECURITYGROUPINGRESSREQUEST_P_H

#include "elasticacherequest_p.h"
#include "revokecachesecuritygroupingressrequest.h"

namespace QtAws {
namespace ElastiCache {

class RevokeCacheSecurityGroupIngressRequest;

class RevokeCacheSecurityGroupIngressRequestPrivate : public ElastiCacheRequestPrivate {

public:
    RevokeCacheSecurityGroupIngressRequestPrivate(const ElastiCacheRequest::Action action,
                                   RevokeCacheSecurityGroupIngressRequest * const q);
    RevokeCacheSecurityGroupIngressRequestPrivate(const RevokeCacheSecurityGroupIngressRequestPrivate &other,
                                   RevokeCacheSecurityGroupIngressRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeCacheSecurityGroupIngressRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
