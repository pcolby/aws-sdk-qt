// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHECLUSTERREQUEST_H
#define QTAWS_MODIFYCACHECLUSTERREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheClusterRequestPrivate;

class QTAWSELASTICACHE_EXPORT ModifyCacheClusterRequest : public ElastiCacheRequest {

public:
    ModifyCacheClusterRequest(const ModifyCacheClusterRequest &other);
    ModifyCacheClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
