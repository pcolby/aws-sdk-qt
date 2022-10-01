// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECACHESECURITYGROUPINGRESSRESPONSE_H
#define QTAWS_REVOKECACHESECURITYGROUPINGRESSRESPONSE_H

#include "elasticacheresponse.h"
#include "revokecachesecuritygroupingressrequest.h"

namespace QtAws {
namespace ElastiCache {

class RevokeCacheSecurityGroupIngressResponsePrivate;

class QTAWSELASTICACHE_EXPORT RevokeCacheSecurityGroupIngressResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    RevokeCacheSecurityGroupIngressResponse(const RevokeCacheSecurityGroupIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeCacheSecurityGroupIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeCacheSecurityGroupIngressResponse)
    Q_DISABLE_COPY(RevokeCacheSecurityGroupIngressResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
