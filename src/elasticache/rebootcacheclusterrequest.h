// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTCACHECLUSTERREQUEST_H
#define QTAWS_REBOOTCACHECLUSTERREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class RebootCacheClusterRequestPrivate;

class QTAWSELASTICACHE_EXPORT RebootCacheClusterRequest : public ElastiCacheRequest {

public:
    RebootCacheClusterRequest(const RebootCacheClusterRequest &other);
    RebootCacheClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
