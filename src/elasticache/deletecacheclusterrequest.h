// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHECLUSTERREQUEST_H
#define QTAWS_DELETECACHECLUSTERREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheClusterRequestPrivate;

class QTAWSELASTICACHE_EXPORT DeleteCacheClusterRequest : public ElastiCacheRequest {

public:
    DeleteCacheClusterRequest(const DeleteCacheClusterRequest &other);
    DeleteCacheClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCacheClusterRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
